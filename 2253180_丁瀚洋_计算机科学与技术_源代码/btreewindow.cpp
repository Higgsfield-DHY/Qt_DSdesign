#include "btreewindow.h"
#include "ui_btreewindow.h"

#include <QMessageBox>

QIcon icon_leaf,icon_key,icon_root;
int keyNum, treeDepth;
BTreeWindow::BTreeWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BTreeWindow)
{
    ui->setupUi(this);

    //窗口名
    this-> setWindowTitle("算法实现演示");

    //ui设置
    this-> setMaximumSize(620,330);
    this-> setMinimumSize(620,330);
    ui->labelDepth->setText("0");
    ui->labelDegree->setText("3");
    ui->lineKey->setValidator(new QIntValidator(this));
    folded = false;
    failShow = false;
    btree = new BTree(this, 3);
    modelBTree = new QStandardItemModel();
    ui->treeView->setModel(modelBTree);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->treeView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->treeView->setSelectionBehavior(QAbstractItemView::SelectRows);
    modelBTree->setHorizontalHeaderLabels(QStringList()<<"          B-树          "<<"    节点类型    "<<"  key数  ");
    ui->treeView->header()->resizeSection(0, 250);
    ui->treeView->header()->resizeSection(1, 180);
    ui->treeView->header()->resizeSection(2, 40);
    keyNum = treeDepth = 0;

    //节点图标
    icon_leaf.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\leaf.png"));
    icon_key.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\node.png"));
    icon_root.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\root.png"));

    //信号与槽
    connect(btree, SIGNAL(update()), this, SLOT(updateTreeView()));

    connect(ui->BT_RtnButton,SIGNAL(returnPressed()),this,SLOT(on_BT_RtnButton_clicked()));

    connect(ui->lineKey, SIGNAL(returnPressed()), ui->InsertButton, SLOT(click()));

    //初始化视图
    updateTreeView();

}
BTreeWindow::~BTreeWindow()
{
    delete(btree);
    delete ui;
}

//绘制树
void BTreeWindow::drawBTree(QStandardItem *fItem, BNode *node, int d, const QString l, const QString r){
    //获取信息
    keyNum = keyNum + node->num;
    if(d > treeDepth)
        treeDepth = d;
    //绘制子节点
    for (int i = 0; i <= node->num; i++){
        BNode *cNode= node->child.at(i);
        QString left=(i == 0 ? l:QString::number(node->key.at(i-1)));
        QString right=(i == node->num ? r:QString::number(node->key.at(i)));
        // 生成结点
        if (cNode){
            QStandardItem *cItem = new QStandardItem("("+left+","+right+")");
            fItem->appendRow(cItem);
            fItem->setChild(cItem->index().row(), 1, new QStandardItem(QString::number(d)+"层--子结点"));
            fItem->setChild(cItem->index().row(), 2, new QStandardItem(QString::number(cNode->num)));
            drawBTree(cItem, cNode, d+1, left, right);
        }
        //键值
        if (i != node->num){
            QStandardItem *cItem = new QStandardItem(right);
            if(d < treeDepth){
                cItem->setIcon(icon_key);
                fItem->appendRow(cItem);
                fItem->setChild(cItem->index().row(), 1, new QStandardItem(QString::number(d)+"层--键值"));
            }
            else{
                cItem->setIcon(icon_leaf);
                fItem->appendRow(cItem);
                fItem->setChild(cItem->index().row(), 1, new QStandardItem(QString::number(d)+"层--叶子结点"));
            }
        }
    }
}

//更新treeView
void BTreeWindow::updateTreeView(){
    //清空视图
    modelBTree->removeRows(0, modelBTree->rowCount());
    keyNum = treeDepth = 0;
    //绘制新树
    QStandardItem *root = new QStandardItem("(-∞,+∞)");
    root->setIcon(icon_root);
    modelBTree->appendRow(root);
    BNode *node = btree->getRoot();
    modelBTree->setItem(root->index().row(), 1, new QStandardItem("0层--树根"));
    modelBTree->setItem(root->index().row(), 2, new QStandardItem(QString::number(node->num)));
    //递归画树
    if(node->num != 0){
        drawBTree(root, node, 1, "-∞", "+∞");
    }
    //是否展开
    if (folded){
        ui->treeView->collapseAll();
    }
    else{
        ui->treeView->expandAll();
    }
    //更新label
    ui->labelDepth->setText(QString::number(treeDepth));
}

//插入
void BTreeWindow::on_InsertButton_clicked()
{
    if (ui->lineKey->hasAcceptableInput()){
        if (!btree->Insert(ui->lineKey->text().toInt())){
            QMessageBox::critical(this, "错误", "插入失败");
        }
    }
    ui->lineKey->clear();

}

//删除
void BTreeWindow::on_DeleteButton_clicked()
{
    if (ui->lineKey->hasAcceptableInput()){
        if (!btree->Delete(ui->lineKey->text().toInt())){
            QMessageBox::critical(this, "错误", "删除失败");
        }
    }
    ui->lineKey->clear();
}

//搜索
void BTreeWindow::on_SearchButton_clicked()
{
    if (ui->lineKey->hasAcceptableInput()){
        Result result = btree->Search(ui->lineKey->text().toInt());
        bool f = result.f;
        if (f){
            QMessageBox::information(this, "查找", "查找成功 键值存在");
        }
        else{
            QMessageBox::critical(this, "查找", "查找失败 未找到此键值");
        }
    }
    ui->lineKey->clear();
}

//清空
void BTreeWindow::on_ClearButton_clicked()
{
    delete(btree);
    ui->labelDepth->setText("0");
    int degree = ui->labelDegree->text().toInt();
    ui->labelDegree->setText(QString::number(degree));
    btree = new BTree(this, degree);
    connect(btree, SIGNAL(update()), this, SLOT(updateTreeView()));
    updateTreeView();
}

// 展开
void BTreeWindow::on_ShowButton_clicked()
{
    folded = false;
    ui->treeView->expandAll();
}

//收起
void BTreeWindow::on_CloseButton_clicked()
{
    folded = true;
    ui->treeView->collapseAll();
}

//返回menu信号
void BTreeWindow::on_BT_RtnButton_clicked()
{
    emit BTree_back();
}


