#include "btree.h"

BTree::BTree(QObject *parent, int degree)
    : QObject(parent), degree(degree)
{
    //创建根节点，并设置为p的子节点
    p = new BNode(this);
    new BNode(p);
}

BTree::~BTree(){
    delete p;
}

//获取BTree的根节点
BNode* BTree::getRoot(){
    return qobject_cast<BNode *>(p->children().first());  //返回 p 的第一个子节点作为根节点
}

//在BTree中插入元素x
bool BTree::Insert(const int x){
    bool result = getRoot()->Insert(x, degree);
    if (result){
        emit update();  //如果插入成功，发出更新信号
    }
    return result;
}

//从 BTree 中删除元素x
bool BTree::Delete(const int x){
    bool result = getRoot()->Delete(x, degree);
    if (result){
        emit update();  //如果删除成功，发出更新信号
    }
    return result;
}

//在BTree中查找元素x，返回查找结果
Result BTree::Search(const int x){
    return getRoot()->Search(x);  //调用根节点的搜索方法并返回
}
