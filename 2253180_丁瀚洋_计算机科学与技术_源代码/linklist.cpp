#include "linklist.h"

#include <QMessageBox>
#include <QVector>

LinkList::LinkList(QObject *parent) : QObject(parent)
{
    // 初始化链表
    this->hasRoot = false;
    this->length = 0;
    this->head = new Node();
    if (!this->head) {
        QMessageBox::critical(new QWidget, "错误", "地址异常");
    } else {
        this->head->next = nullptr;
    }
}

LinkList::~LinkList()
{
    // 释放链表内存
    for (int i = 0; i < this->length; i++) {
        Node* current = this->head->next;
        this->head->next = current->next;
        delete current;
    }
    this->hasRoot = false;
    this->length = 0;
    delete this->head;
}

// 递归计算子节点的个数
int LinkList::CountChildren(const int parentId) const
{
    QVector<int> childrenIds;

    // 找到所有父节点为parentId的子节点
    Node* current = this->head->next;
    for (int i = 0; i < this->length; i++) {
        if (current->pid == parentId) {
            childrenIds.push_back(current->id);
        }
        current = current->next;
    }

    // 递归计算子节点的总数
    int count = 0;
    for (int i = 0; i < childrenIds.size(); i++) {
        count += CountChildren(childrenIds[i]);
    }
    return count + childrenIds.size();
}

//判断链表是否能成为树
bool LinkList::IsTree() const
{
    // 必须有且仅有一个根节点
    if (!this->hasRoot) {
        return false;
    }

    // 从根节点出发应包含所有节点
    int totalNodes = CountChildren(0);
    return totalNodes == length;
}

//检查ID是否重复
bool LinkList::CheckDuplicate(const int id)
{
    Node* current = this->head->next;
    for (int i = 0; i < this->length; i++) {
        if (current->id == id) {
            return true;
        }
        current = current->next;
    }
    return false;
}

//在链表头部插入新节点
bool LinkList::InsertNode(const int id, const int parentId, const Elem data)
{
    if (parentId == id) {
        QMessageBox::critical(new QWidget, "错误", "ID与父节点ID重复");
        return false;
    }
    if (parentId == 0 && this->hasRoot) {
        QMessageBox::critical(new QWidget, "错误", "已有此根节点");
        return false;
    }
    if (id == 0) {
        QMessageBox::critical(new QWidget, "错误", "ID值非0");
        return false;
    }
    if (CheckDuplicate(id)) {
        QMessageBox::critical(new QWidget, "错误", "已有此ID");
        return false;
    } else {
        Node* newNode = new Node();
        if (!newNode) {
            QMessageBox::critical(new QWidget, "错误", "地址异常");
            return false;
        }
        newNode->id = id;
        newNode->pid = parentId;
        newNode->data = data;
        newNode->next = this->head->next;
        this->head->next = newNode;
        this->length += 1;
        if (parentId == 0) {
            this->hasRoot = true;
        }

        emit update();
        return true;
    }
}

//更新节点信息
bool LinkList::UpdateNode(const int id, const int newId, const int parentId, const Elem data)
{
    if (parentId == newId) {
        QMessageBox::critical(new QWidget, "错误", "新ID与父节点ID重复");
        return false;
    }
    if (newId == 0) {
        QMessageBox::critical(new QWidget, "错误", "新ID值非0");
        return false;
    }
    if (id != newId && CheckDuplicate(newId)) {
        QMessageBox::critical(new QWidget, "错误", "已有此ID");
        return false;
    } else {
        Node* current = this->head->next;
        for (int i = 0; i < this->length; i++) {
            if (current->id == id) {
                // 非根节点要变成根节点，但根节点已经存在
                if (current->pid != 0 && parentId == 0 && this->hasRoot) {
                    QMessageBox::critical(new QWidget, "错误", "根节点已经存在");
                    return false;
                }
                // 非根节点变为根节点，且根节点不存在，更新信息
                if (current->pid != 0 && parentId == 0 && !this->hasRoot) {
                    this->hasRoot = true;
                }
                // 根节点变为非根节点，更新信息
                if (current->pid == 0 && parentId != 0) {
                    this->hasRoot = false;
                }

                // 更新与ID相关的信息
                Node* temp = this->head->next;
                for (int j = 0; j < this->length; j++) {
                    if (temp->pid == id) {
                        temp->pid = newId;
                    }
                    temp = temp->next;
                }

                // 更新节点ID、父节点ID、数据
                current->id = newId;
                current->pid = parentId;
                current->data = data;

                emit update();
                return true;
            }
            current = current->next;
        }
        QMessageBox::critical(new QWidget, "错误", "不存在此ID");
        return false;
    }
}

//删除指定ID的节点
bool LinkList::DeleteNode(const int id)
{
    Node* current = this->head;
    for (int i = 0; i < this->length; i++) {
        if (current->next->id == id) {
            Node* toDelete = current->next;
            current->next = toDelete->next;
            if (toDelete->pid == 0) {
                this->hasRoot = false;
            }
            delete toDelete;
            this->length -= 1;

            emit update();
            return true;
        }
        current = current->next;
    }
    QMessageBox::critical(new QWidget, "错误", "不存在此ID");
    return false;
}

//删除指定ID及其子节点
bool LinkList::DeleteNodeWithChildren(const int id)
{
    QVector<int> childrenIds;

    // 找到所有父节点为id的子节点
    Node* current = this->head->next;
    for (int i = 0; i < this->length; i++) {
        if (current->pid == id) {
            childrenIds.push_back(current->id);
        }
        current = current->next;
    }

    // 递归删除子节点
    for (int i = 0; i < childrenIds.size(); i++) {
        DeleteNodeWithChildren(childrenIds[i]);
    }
    return DeleteNode(id);
}
