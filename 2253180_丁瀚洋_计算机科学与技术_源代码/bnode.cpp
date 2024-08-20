#include "btree.h"
#include "bnode.h"

BNode::BNode(QObject *parent) : QObject(parent) {
    num = 0;            // 初始化节点键值数量为0
    key.clear();        // 清空键值数组
    child.clear();      // 清空子节点数组
    child.append(NULL); // 为子节点添加一个空指针
}

BNode::~BNode() {
    key.clear();    // 清空键值数组
    child.clear();  // 清空子节点数组
}

Result BNode::Search(const int x) {
    // 如果节点没有键值
    if (num == 0) {
        Result result;
        result.f = false;
        result.node = this;
        result.place = 0;
        return result;
    }

    // 二分查找键值
    int low = 0;
    int high = num - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key.at(mid) == x) {
            Result result;
            result.f = true;
            result.node = this;
            result.place = mid;
            return result;
        }
        else if (key.at(mid) > x) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    // 如果未找到，查找子节点
    BNode *next = child.at(low);
    if (next == NULL) {
        Result result;
        result.f = false;
        result.node = this;
        result.place = low;
        return result;
    } else {
        return next->Search(x);
    }
}

bool BNode::Insert(const int x, int m) {
    Result result = Search(x);
    if (result.f) {
        return false; // 如果键值已存在，返回false
    }
    result.node->inKey(x, NULL, NULL, m, result.place);
    return true;
}

bool BNode::inKey(const int x, BNode *cLeft, BNode *cRight, int m, int idx) {
    if (idx == -1) {
        // 二分查找插入位置
        int low = 0;
        int high = num - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (key.at(mid) == x) {
                return false;
            } else if (key.at(mid) > x) {
                high = mid - 1;
                continue;
            } else {
                low = mid + 1;
                continue;
            }
        }
        idx = low;
    }

    // 插入键值和子节点指针
    key.insert(idx, x);
    child.insert(idx, cLeft);
    child.replace(idx + 1, cRight);

    num++; // 更新节点的键值数量

    // 如果键值数量等于树的度数，进行分裂
    if (num == m) {
        Split(this, m);
    }
    return true;
}

BNode* BNode::getFather() {
    return qobject_cast<BNode *>(parent()); // 获取父节点
}

void BNode::Split(BNode *node, int m) {
    BNode *sibling;
    BNode *father;

    // 如果节点是根节点
    if (qobject_cast<BTree *>(node->parent()->parent()) != NULL) {
        BNode* newRoot = new BNode(node->parent());
        sibling = new BNode(newRoot);
        node->setParent(newRoot);
        father = newRoot;
    } else {
        sibling = new BNode(node->parent());
        father = node->getFather();
    }

    // 将节点分裂成两个节点
    sibling->key.append(node->key.mid((node->num + 1) / 2, m / 2));
    sibling->child.clear();
    sibling->child.append(node->child.mid((node->num + 1) / 2, m / 2 + 1));
    sibling->num = m / 2;

    // 将中间键值插入到父节点中
    father->inKey((node->key[(node->num - 1) / 2]), node, sibling, m, -1);

    // 移除被分裂节点的后半部分键值和子节点
    for (int i = 0; i < m / 2 + 1; i++) {
        node->key.removeLast();
        BNode *lastChild = node->child.last();
        if (lastChild) {
            lastChild->setParent(sibling);
        }
        node->child.removeLast();
    }
    node->num = (node->num - 1) / 2;
}

bool BNode::Delete(const int x, int m) {
    Result result = Search(x);
    if (!result.f) {
        return false; // 如果键值不存在，返回false
    }
    result.node->deleteIndexKey(m, result.place);
    return true;
}

void BNode::deleteIndexKey(int m, int idx) {
    if (child[0] == NULL) {
        // 如果是叶子节点，直接删除键值
        deleteLeafKey(m, idx);
    } else {
        // 如果不是叶子节点，找到后继节点替代
        BNode *leafNode = child[idx + 1];
        while (leafNode->child[0] != NULL) {
            leafNode = leafNode->child[0];
        }
        key[idx] = leafNode->key[0];
        leafNode->deleteLeafKey(m, 0);
    }
}

void BNode::deleteLeafKey(int m, int idx) {
    int deletedKey = key.takeAt(idx);
    child.removeAt(idx);
    num--; // 更新节点的键值数量
    nodeNoFull(this, m, deletedKey); // 删除后检查节点是否需要平衡
}

void BNode::nodeNoFull(BNode *cur, int m, int deletedKey) {
    // 如果节点中键值数量大于等于(m-1)/2，不需要处理
    if (cur->num >= (m - 1) / 2) {
        return;
    }

    // 如果当前节点是根节点且是空节点，不需要处理
    if (qobject_cast<BTree *>(cur->parent()->parent()) != NULL) {
        return;
    }

    BNode *fatherNode = cur->getFather();
    int myKey = cur->key.empty() ? deletedKey : cur->key.first();

    // 在父节点中定位当前节点的索引位置
    int newKey = 0;
    int low = 0;
    int high = fatherNode->num - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (fatherNode->key.at(mid) > myKey) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    int idx = high;
    BNode *left = (high != -1) ? fatherNode->child.at(high) : NULL;
    BNode *right = (low != fatherNode->num) ? fatherNode->child.at(low + 1) : NULL;

    bool leftFull = left && left->num > (m - 1) / 2;
    bool rightFull = right && right->num > (m - 1) / 2;

    BNode *alive = nullptr;

    if (leftFull) {
        // 从左兄弟节点借一个键值
        cur->key.push_front(fatherNode->key[idx]);
        cur->child.push_front(left->child.takeLast());
        if (cur->child.first()) {
            cur->child.first()->setParent(cur);
        }
        cur->num++;
        fatherNode->key[idx] = left->key.takeLast();
        left->num--;
    }
    else if (rightFull) {
        // 从右兄弟节点借一个键值
        cur->key.push_back(fatherNode->key[idx + 1]);
        cur->child.push_back(right->child.takeFirst());
        if (cur->child.last()) {
            cur->child.last()->setParent(cur);
        }
        cur->num++;
        fatherNode->key[idx + 1] = right->key.takeFirst();
        right->num--;
    }
    else if (left) {
        // 左右节点都不足，合并左节点
        left->key.append(newKey = fatherNode->key.takeAt(idx));
        left->key.append(cur->key);
        left->child.append(cur->child);
        if (cur->child.first()) {
            for (auto p = cur->child.cbegin(); p != cur->child.cend(); ++p) {
                (*p)->setParent(left);
            }
        }
        fatherNode->child.takeAt(idx + 1);
        cur->setParent(nullptr);
        delete cur;
        alive = left;
        alive->num = alive->key.count();
        fatherNode->num--;
    }
    else if (right) {
        // 左右节点都不足，合并右节点
        cur->key.append(newKey = fatherNode->key.takeAt(idx + 1));
        cur->key.append(right->key);
        cur->child.append(right->child);
        if (right->child.first()) {
            for (auto p = right->child.cbegin(); p != right->child.cend(); ++p) {
                (*p)->setParent(cur);
            }
        }
        fatherNode->child.takeAt(idx + 2);
        right->setParent(nullptr);
        delete right;
        alive = cur;
        alive->num = alive->key.count();
        fatherNode->num--;
    }

    // 如果父节点已空，删除父节点并将子节点提升为根节点
    if (!leftFull && !rightFull && qobject_cast<BTree *>(fatherNode->parent()->parent()) != NULL && fatherNode->num == 0) {
        alive->setParent(fatherNode->parent());
        fatherNode->setParent(nullptr);
        delete fatherNode;
    }
    else {
        nodeNoFull(fatherNode, m, newKey); // 递归检查父节点
    }
}
