#ifndef TLTREE_H
#define TLTREE_H

#include "linklist.h"
#include "struct.h"

#include <QObject>

class Tree : public QObject {
    Q_OBJECT
public:
    pTree root;  // 根节点
    int size;    // 节点数

    explicit Tree(QObject *parent = nullptr);
    ~Tree();

    // 将线性表转换为树结构
    bool ConvertListToTree(pTree& parentNode, LinkList* list);
    bool InitializeWithList(LinkList* list);

    // 清空树结构
    pTree ClearTree(pTree& tree);
    pTree ClearSubtree(pTree& subtree);

    // 查找节点
    pTree FindNode(const int id, const pTree tree) const;

    // 插入节点
    bool InsertNode(pTree& node, LinkList* list);
    bool InsertNewNode(const int id, const int parentId, const Elem data, LinkList* list);

    // 更新节点信息
    bool UpdateNode(const int id, const int newId, const int parentId, const Elem data, LinkList* list);

    // 删除节点
    bool DeleteNode(const int id, LinkList* list);

signals:
    void update();  // 树更新信号
};

#endif // TLTREE_H
