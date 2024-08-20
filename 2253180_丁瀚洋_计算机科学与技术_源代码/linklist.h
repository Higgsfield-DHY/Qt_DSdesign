#ifndef LINKLIST_H
#define LINKLIST_H

#include "struct.h"

#include <QObject>

class LinkList : public QObject
{
    Q_OBJECT
public:
    Node* head;     //表头
    int length;     //长度
    bool hasRoot;   //是否有根节点

    explicit LinkList(QObject *parent = nullptr);
    ~LinkList();

    //子节点数
    int CountChildren(const int parentId) const;

    //树转化判断
    bool IsTree() const;

    //检查ID
    bool CheckDuplicate(const int id);

    //插入新节点
    bool InsertNode(const int id, const int parentId, const Elem data);

    //更新节点信息
    bool UpdateNode(const int id, const int newId, const int parentId, const Elem data);

    //删除节点
    bool DeleteNode(const int id);

    //删除节点和其子节点
    bool DeleteNodeWithChildren(const int id);

signals:
    void update();  //数据更新时发出
};

#endif // LINKLIST_H
