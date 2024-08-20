#include "tlwindow.h"
#include "ui_tlwindow.h"

#include <QList>

#define TableColumnCount 4 // 表格的列数(id-pid-int-str)

QIcon iconLeaf, iconRoot;

TLWindow::TLWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TLWindow)
{
    ui->setupUi(this);

    this->setMaximumSize(830, 370);
    this->setMinimumSize(830, 370);
    this->setWindowTitle("综合应用演示");

    // 初始化
    list = new LinkList();
    modelList = new QStandardItemModel(0, TableColumnCount, this);
    selectList = new QItemSelectionModel(modelList);
    ui->tableView->setModel(modelList);
    ui->tableView->setSelectionModel(selectList);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 设置为只读
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection); // 选择单行
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);  // 选择整行
    ui->tableView->setColumnWidth(0, 45);
    ui->tableView->setColumnWidth(1, 60);
    ui->tableView->setColumnWidth(2, 80);
    ui->tableView->setColumnWidth(3, 120);
    modelList->setHorizontalHeaderLabels(QStringList() << "  id  " << "  pid  " << "   整型数据   " << "  字符串数据  ");

    tree = new Tree();

    isTreeOutDate = 0;
    modelTree = new QStandardItemModel();
    selectTree = new QItemSelectionModel(modelTree);
    ui->treeView->setModel(modelTree);
    ui->treeView->setSelectionModel(selectTree);
    ui->treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);  // 设置为只读
    ui->treeView->setSelectionMode(QAbstractItemView::SingleSelection); // 选择单行
    ui->treeView->setSelectionBehavior(QAbstractItemView::SelectRows);  // 选择整行
    modelTree->setHorizontalHeaderLabels(QStringList() << "  id  " << "  data(int)  " << "     data(string)    ");
    ui->treeView->header()->resizeSection(0, 200);
    ui->treeView->header()->resizeSection(1, 70);
    ui->treeView->header()->resizeSection(2, 100);
    ui->treeView->header()->resizeSection(3, 0);

    iconLeaf.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\leaf.png"));
    iconRoot.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\root.png"));

    // 信号和槽
    connect(this, SIGNAL(treeUpdate()), this, SLOT(treeToolActivate()));
    connect(tree, SIGNAL(update()), this, SLOT(updateTreeView()));
    connect(list, SIGNAL(update()), this, SLOT(updateTableView()));

    // 初始化视图
    updateTableView();
    updateTreeView();
}

TLWindow::~TLWindow()
{
    delete list;
    delete tree;
    delete ui;
}

Tree* TLWindow::getTree(){
    return tree;
}

LinkList* TLWindow::getList(){
    return list;
}

// 插入数据初始化
void TLWindow::initData(const bool isTree){
    Elem data;
    data.dInt = 0;
    data.dStr = "Default";

    // 清空原数据
    tree->root->fChild = tree->ClearTree(tree->root->fChild);
    int len = list->length;
    for (int i = 0; i < len; i++) {
        Node* p = list->head->next;
        list->head->next = p->next;
        delete p;
    }
    list->hasRoot = list->length = 0;

    // 初始化链表节点
    list->InsertNode(2, 0, data);
    list->InsertNode(4, 2, data);
    list->InsertNode(6, 2, data);
    list->InsertNode(8, 4, data);
    list->InsertNode(1, 4, data);
    list->InsertNode(3, 1, data);
    list->InsertNode(5, 1, data);
    list->InsertNode(7, 5, data);
    list->InsertNode(9, 7, data);

}

// 取消子窗口指针
void TLWindow::setDigNull(){
    listInsertDig = nullptr;
    treeInsertDig = nullptr;
    listDeleteDig = nullptr;
    treeDeleteDig = nullptr;
}

// 设置工具栏使能
void TLWindow::ToolBarEnable(const bool f){
    ui->actBack->setEnabled(f);
    ui->actToTree->setEnabled(f);
    ui->actTreeInsert->setEnabled(f);
    ui->actTreeDelete->setEnabled(f);
    ui->actTableInsert->setEnabled(f);
    ui->actTableDelete->setEnabled(f);
    if(f && isTreeOutDate)
        treeToolDisable();
}

// 更新表视图
void TLWindow::updateTableView(){
    // 清空原表格
    modelList->removeRows(0, modelList->rowCount());
    // 绘制新表格
    Node *p = list->head;
    for(int i = 0; i < list->length; i++){
        p = p->next;
        QList<QStandardItem*> tempList;
        QStandardItem* temp;
        temp = new QStandardItem(QString::number(p->id));
        temp->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        tempList << temp;
        temp = new QStandardItem(QString::number(p->pid));
        temp->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        tempList << temp;
        temp = new QStandardItem(QString::number(p->data.dInt));
        temp->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        tempList << temp;
        temp = new QStandardItem(p->data.dStr);
        temp->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        tempList << temp;
        // 在表格首插入
        modelList->insertRow(0, tempList);
    }
}

// 根据孩子表示法画树
void TLWindow::drawTree(QStandardItem *fItem, pTree f){
    // 从f的第一个孩子开始
    pTree child = f->fChild;
    while(child){
        QStandardItem *cItem;
        // 判断是否有孩子来确定是否是叶子
        if(child->fChild){
            cItem = new QStandardItem(QString::number(child->id).append(" -结点"));
            //cItem->setIcon(iconRoot);
        }
        else{
            cItem = new QStandardItem(QString::number(child->id).append(" -叶子"));
            cItem->setIcon(iconLeaf);
        }
        // 将孩子结点添加到父节点下
        fItem->appendRow(cItem);
        fItem->setChild(cItem->index().row(), 1, new QStandardItem(QString::number(child->data.dInt)));
        fItem->setChild(cItem->index().row(), 2, new QStandardItem(child->data.dStr));
        // 递归添加孩子结点
        drawTree(cItem, child);
        // 处理下一个孩子
        child = child->nSibling;
    }
}

// 更新树视图
void TLWindow::updateTreeView(){
    // 清空原视图
    modelTree->removeRows(0, modelTree->rowCount());
    // 绘制新树（孩子表示法）
    // 设置表头
    modelTree->setHorizontalHeaderLabels(QStringList() << "  id  " << "  data(int)  " << "     data(string)    ");
    ui->treeView->header()->resizeSection(0, 200);
    ui->treeView->header()->resizeSection(1, 70);
    ui->treeView->header()->resizeSection(2, 100);
    ui->treeView->header()->resizeSection(3, 0);
    // 判断是否有树
    if(tree->root->fChild){
        QStandardItem *root = new QStandardItem(QString::number(tree->root->fChild->id).append(" -树根"));
        root->setIcon(iconRoot);
        modelTree->appendRow(root);
        modelTree->setItem(root->index().row(), 1, new QStandardItem(QString::number(tree->root->fChild->data.dInt)));
        modelTree->setItem(root->index().row(), 2, new QStandardItem(tree->root->fChild->data.dStr));
        // 递归画树
        drawTree(root, tree->root->fChild);
    }

    ui->treeView->expandAll();
}

// 启用树操作
void TLWindow::treeToolActivate(){
    ui->actTreeInsert->setEnabled(true);
    ui->actTreeDelete->setEnabled(true);
}

// 禁用树操作
void TLWindow::treeToolDisable(){
    ui->actTreeInsert->setEnabled(false);
    ui->actTreeDelete->setEnabled(false);
}

void TLWindow::on_actBack_triggered()
{
    emit TL_back();
}

void TLWindow::on_actTableInsert_triggered()
{
    // 禁用工具栏
    ToolBarEnable(0);

    // 创建插入对话框
    listInsertDig = new TLInsertDialog(this, 0);
    listInsertDig->setAttribute(Qt::WA_DeleteOnClose);
    listInsertDig->show();
}

void TLWindow::on_actTreeInsert_triggered()
{
    // 禁用工具栏
    ToolBarEnable(0);

    // 创建插入对话框
    treeInsertDig = new TLInsertDialog(this, 1);
    treeInsertDig->setAttribute(Qt::WA_DeleteOnClose);
    treeInsertDig->show();
}

void TLWindow::on_actTableDelete_triggered()
{
    // 禁用工具栏
    ToolBarEnable(0);

    // 创建删除对话框
    listDeleteDig = new TLDeleteDialog(this, 0);
    listDeleteDig->setAttribute(Qt::WA_DeleteOnClose);
    listDeleteDig->show();
}

void TLWindow::on_actTreeDelete_triggered()
{
    // 禁用工具栏
    ToolBarEnable(0);

    // 创建删除对话框
    treeDeleteDig = new TLDeleteDialog(this, 1);
    treeDeleteDig->setAttribute(Qt::WA_DeleteOnClose);
    treeDeleteDig->show();
}

void TLWindow::on_actToTree_triggered()
{
    // 从链表初始化树
    tree->InitializeWithList(list);
    if(list->IsTree()){
        isTreeOutDate = 0;
        emit treeUpdate();
    }
}
