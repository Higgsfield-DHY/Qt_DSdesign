#include "tltree.h"

#include <QMessageBox>

Tree::Tree(QObject *parent) : QObject(parent) {
    this->size = 0;
    // 初始化空根节点
    this->root = new TreeNode();
    if (!this->root) {
        QMessageBox::critical(new QWidget, "错误", "地址异常");
    }
    else {
        this->root->father = nullptr;
        this->root->nSibling = nullptr;
        this->root->fChild = nullptr;
        this->root->id = 0;
        this->root->pid = 0;
    }
}

Tree::~Tree() {
    this->size = 0;
    ClearTree(this->root);
}

// 将线性表转换为树
bool Tree::ConvertListToTree(pTree& parentNode, LinkList* list) {
    // 遍历线性表，连接父节点和子节点
    Node* currentNode = list->head->next;
    for (int i = 0; i < list->length; i++) {
        if (currentNode->pid == parentNode->id) {
            pTree newNode = new TreeNode();
            if (!newNode) {
                QMessageBox::critical(new QWidget, "错误", "地址异常");
                return false;
            }
            this->size += 1;
            newNode->data = currentNode->data;
            newNode->id = currentNode->id;
            newNode->pid = currentNode->pid;
            newNode->fChild = newNode->nSibling = nullptr;
            newNode->father = parentNode;
            newNode->nSibling = parentNode->fChild;
            parentNode->fChild = newNode;
        }
        currentNode = currentNode->next;
    }
    // 递归处理子节点
    pTree childNode = parentNode->fChild;
    while (childNode != nullptr) {
        ConvertListToTree(childNode, list);
        childNode = childNode->nSibling;
    }
    return true;
}

// 初始化树
bool Tree::InitializeWithList(LinkList* list) {
    // 检查是否可以转换
    if (list->IsTree()) {
        // 清空现有的树
        this->root->fChild = ClearTree(this->root->fChild);

        ConvertListToTree(this->root, list);
        emit update();
        return true;
    }
    else {
        QMessageBox::critical(new QWidget, "错误", "转换失败");
        return false;
    }
}

// 清空树的子树
pTree Tree::ClearSubtree(pTree& subtree) {
    if (subtree) {
        ClearSubtree(subtree->fChild);
        ClearSubtree(subtree->nSibling);
        delete subtree;
        this->size -= 1;
        return nullptr;
    }
    return nullptr;
}

// 清空整个树
pTree Tree::ClearTree(pTree& tree) {
    if (tree) {
        ClearSubtree(tree->fChild);
        delete tree;
        this->size -= 1;
        return nullptr;
    }
    emit update();
    return nullptr;
}

// 查找
pTree Tree::FindNode(const int id, const pTree tree) const {
    if (tree) {
        if (tree->id == id){
            return tree;
        }
        else {
            pTree foundInChild = FindNode(id, tree->fChild);
            pTree foundInSibling = FindNode(id, tree->nSibling);
            if (foundInChild != nullptr){
                return foundInChild;
            }
            else if (foundInSibling != nullptr){
                return foundInSibling;
            }
            else {
                return nullptr;
            }
        }
    }
    else {
        return nullptr;
    }
}

// 插入新节点
bool Tree::InsertNewNode(const int id, const int parentId, const Elem data, LinkList* list) {
    if (parentId == id) {
        QMessageBox::critical(new QWidget, "错误", "ID与父节点ID重复");
        return false;
    }
    if (id == 0) {
        QMessageBox::critical(new QWidget, "错误", "ID值非0");
        return false;
    }
    if (parentId == 0 && (this->root->fChild != nullptr)) {
        QMessageBox::critical(new QWidget, "错误", "已有此根节点");
        return false;
    }
    if (FindNode(id, this->root) != nullptr) {
        QMessageBox::critical(new QWidget, "错误", "已有此ID");
        return false;
    }
    // 查找父节点
    pTree parentNode = FindNode(parentId, this->root);
    if (parentNode == nullptr) {
        QMessageBox::critical(new QWidget, "错误", "无父结点ID");
        return false;
    }
    else {
        pTree newNode = new TreeNode();
        if (!newNode) {
            QMessageBox::critical(new QWidget, "错误", "地址异常");
            return false;
        }
        this->size += 1;
        newNode->id = id;
        newNode->pid = parentId;
        newNode->data = data;
        newNode->father = parentNode;
        newNode->fChild = newNode->nSibling = nullptr;
        newNode->nSibling = parentNode->fChild;
        parentNode->fChild = newNode;

        // 在表中同步插入
        emit update();
        list->InsertNode(id, parentId, data);
        return true;
    }
}

// 更新节点信息
bool Tree::UpdateNode(const int id, const int newId, const int parentId, const Elem data, LinkList* list) {
    if (parentId == newId) {
        QMessageBox::critical(new QWidget, "错误", "新ID与父结点ID相同");
        return false;
    }
    if (newId == 0) {
        QMessageBox::critical(new QWidget, "错误", "新ID值不能为0");
        return false;
    }
    if (id != newId && FindNode(newId, this->root)) {
        QMessageBox::critical(new QWidget, "错误", "新ID已经存在");
        return false;
    }
    else {
        pTree node = FindNode(id, this->root);
        if (node == nullptr) {
            QMessageBox::critical(new QWidget, "错误", "ID不存在");
            return false;
        }
        pTree parentNode = FindNode(parentId, this->root);
        if (parentNode == nullptr) {
            QMessageBox::critical(new QWidget, "错误", "父结点ID不存在");
            return false;
        }
        else {
            if (parentId == 0 && this->root->fChild && this->root->fChild->id != id) {
                QMessageBox::critical(new QWidget, "错误", "根节点已经存在");
                return false;
            }
            node->data = data;
            if (node->pid != parentId) {
                pTree oldParent = node->father;
                if (oldParent->fChild->id == id) {
                    oldParent->fChild = node->nSibling;
                }
                else {
                    pTree siblingNode = oldParent->fChild;
                    while (siblingNode->nSibling && siblingNode->nSibling->id != id) {
                        siblingNode = siblingNode->nSibling;
                    }
                    siblingNode->nSibling = node->nSibling;
                }
                node->father = parentNode;
                node->nSibling = parentNode->fChild;
                parentNode->fChild = node;
            }
            if (id != newId) {
                node->id = newId;
                pTree childNode = node->fChild;
                while (childNode) {
                    childNode->pid = newId;
                    childNode = childNode->nSibling;
                }
            }

            // 同步更新表的数据
            emit update();
            list->UpdateNode(id, newId, parentId, data);
            return true;
        }
    }
}

// 删除节点
bool Tree::DeleteNode(const int id, LinkList* list) {
    pTree nodeToDelete = FindNode(id, this->root);
    if (nodeToDelete == nullptr || id == 0) {
        QMessageBox::critical(new QWidget, "错误", "ID不存在");
        return false;
    }
    else {
        pTree parentNode = nodeToDelete->father;
        if (parentNode->fChild->id == nodeToDelete->id) {
            parentNode->fChild = nodeToDelete->nSibling;
        }
        else {
            pTree siblingNode = parentNode->fChild;
            while (siblingNode->nSibling && siblingNode->nSibling->id != id) {
                siblingNode = siblingNode->nSibling;
            }
            siblingNode->nSibling = nodeToDelete->nSibling;
        }

        ClearTree(nodeToDelete);
        list->DeleteNodeWithChildren(id);
        emit update();
        return true;
    }
}
