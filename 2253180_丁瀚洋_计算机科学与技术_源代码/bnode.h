#ifndef BNODE_H
#define BNODE_H

#include "struct.h"

#include <QList>
#include <QObject>

class BNode : public QObject
{
    Q_OBJECT

public:
    explicit BNode(QObject *parent = nullptr);
    ~BNode();

    int num;        // 键值数
    QList<int> key; // 键值表
    QList<BNode*> child; // 孩子表
    BNode *getFather();
    Result Search(const int x);
    bool Insert(const int x, int m);
    bool Delete(const int x, int m);

private:
    void Split(BNode *node, int m);     // 拆分结点
    void deleteLeafKey(int m, int idx);   // 叶键值删除
    void deleteIndexKey(int m, int idx);  // 删除键值
    void nodeNoFull(BNode *node, int m, int key); // 未满结点
    bool inKey(const int x, BNode *cLeft, BNode *cRight, int m, int idx);

};

#endif // BNODE_H
