#ifndef TLWINDOW_H
#define TLWINDOW_H

#include "struct.h"
#include "linklist.h"
#include "tlinsertdialog.h"
#include "tltree.h"
#include "tldeletedialog.h"

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>

namespace Ui {
class TLWindow;
}

class TLWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TLWindow(QWidget *parent = nullptr);
    ~TLWindow();

    bool isTreeOutDate;     // 树是否过时
    Tree* getTree();        // 获取树对象
    LinkList* getList();    // 获取链表对象
    void setDigNull();      // 取消子窗口指针
    void treeToolDisable(); // 禁用树操作
    void ToolBarEnable(const bool f); // 设置工具栏使能
    void initData(const bool isTree);   // 初始化数据
    void drawTree(QStandardItem *fItem, pTree f); // 绘制树

private slots:
    void on_actBack_triggered();
    void on_actTableInsert_triggered();
    void on_actTreeInsert_triggered();
    void on_actTableDelete_triggered();
    void on_actTreeDelete_triggered();
    void on_actToTree_triggered();

    void updateTableView();               // 更新表视图
    void updateTreeView();                // 更新树视图
    void treeToolActivate();              // 启用树操作


private:
    Ui::TLWindow *ui;

    // 线性表相关
    LinkList *list;                      // 链表对象
    QStandardItemModel *modelList;      // 表格模型
    QItemSelectionModel *selectList;    // 表格选择模型

    // 树结构相关
    Tree *tree;                         // 树对象
    QStandardItemModel *modelTree;      // 树模型
    QItemSelectionModel *selectTree;    // 树选择模型

    // 对话框相关
    TLInsertDialog *listInsertDig;      // 链表插入对话框
    TLInsertDialog *treeInsertDig;      // 树插入对话框
    TLDeleteDialog *listDeleteDig;      // 链表删除对话框
    TLDeleteDialog *treeDeleteDig;      // 树删除对话框

signals:
    void TL_back();                     // 返回信号
    void treeUpdate();                  // 树视图更新信号
};

#endif // TLWINDOW_H
