#ifndef BTREEWINDOW_H
#define BTREEWINDOW_H

#include "btree.h"
#include "bnode.h"

#include <QWidget>
#include <QMainWindow>
#include <QStandardItemModel>



namespace Ui {
class BTreeWindow;
}

class BTreeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BTreeWindow(QWidget *parent = nullptr);
    ~BTreeWindow();

    //绘制树
    void drawBTree(QStandardItem *fItem, BNode *node, int d, const QString l, const QString r);

private slots:
    //返回menu
    void on_BT_RtnButton_clicked();

    //视图和label更新
    void updateTreeView();

    //按键信号与槽
    void on_InsertButton_clicked();

    void on_DeleteButton_clicked();

    void on_SearchButton_clicked();

    void on_ShowButton_clicked();

    void on_CloseButton_clicked();

    void on_ClearButton_clicked();

private:
    Ui::BTreeWindow *ui;
    //B树结构
    BTree *btree;
    bool folded;
    bool failShow;
    QStandardItemModel *modelBTree;

signals:
    void BTree_back();
};

#endif // BTREEWINDOW_H
