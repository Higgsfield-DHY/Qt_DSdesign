#ifndef STRUCT_H
#define STRUCT_H

#include <QString>

class Tree;
class BTree;
class BNode;
class LinkList;

//B-树搜索结果
typedef struct Result {
    bool f;
    int place;
    BNode* node;
}Result;

//存储数据元素
typedef struct Elem {
    int dInt;
    QString dStr;
}Elem;

//线性表节点
typedef struct Node {
    int id;
    int pid;
    Elem data;
    Node* next;
}Node;

//树节点
typedef struct TreeNode {
    int id;
    int pid;
    Elem data;
    TreeNode* father;
    TreeNode* fChild;
    TreeNode* nSibling;
}TreeNode, * pTree;

#endif // STRUCT_H
