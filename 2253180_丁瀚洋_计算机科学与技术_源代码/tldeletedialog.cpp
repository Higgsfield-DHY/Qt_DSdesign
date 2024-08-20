#include "tldeletedialog.h"
#include "ui_tldeletedialog.h"

#include "struct.h"
#include "tlwindow.h"

#include <QString>

TLDeleteDialog::TLDeleteDialog(QWidget *parent, const bool isTree)
    : QDialog(parent)
    , ui(new Ui::TLDeleteDialog), isTree(isTree)
{
    ui->setupUi(this);

    this-> setMaximumSize(200,105);
    this-> setMinimumSize(200,105);

    // 设置图标
    QIcon icon;
    if(isTree){
        icon.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\BT.png"));
    }
    else{
        icon.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\TL.png"));
    }
    this->setWindowIcon(icon);


}

TLDeleteDialog::~TLDeleteDialog()
{
    delete ui;
}

void TLDeleteDialog::closeEvent(QCloseEvent *event){
    // 获取父窗口指针
    TLWindow *parwind = (TLWindow*)parentWidget();
    // 工具栏重新可以调用
    parwind->ToolBarEnable(true);
    // 将窗口指针设置为NULL
    parwind->setDigNull();
}


void TLDeleteDialog::on_TLClearButton_clicked()
{
    TLWindow *parwind = (TLWindow*)parentWidget();
    Tree *tree = parwind->getTree();
    LinkList *list = parwind->getList();

    // 清空原数据
    tree->root->fChild = tree->ClearTree(tree->root->fChild);
    emit tree->update();
    int len = list->length;
    for (int i = 0; i < len; i++) {
        Node* p = list->head->next;
        list->DeleteNode(p->id);
    }
    list->hasRoot = list->length = 0;
    parwind->isTreeOutDate = 0;
}


void TLDeleteDialog::on_TLDeleteButton_clicked()
{
    // 转化数据
    int id = 0;
    id = ui->spinBox->value();
    ui->spinBox->setValue(0);

    // 删除数据
    TLWindow *parwind = (TLWindow*)parentWidget();
    if(isTree){
        parwind->getTree()->DeleteNode(id,parwind->getList());
    }
    else{
        bool result = parwind->getList()->DeleteNode(id);
        // 表中删除成功，则树过时
        if(result) {
            parwind->isTreeOutDate = 1;
        }
    }
}


void TLDeleteDialog::on_spinBox_valueChanged(int id)
{
    TLWindow *parwind = (TLWindow*)parentWidget();
    LinkList *list = parwind->getList();
    Node* p = list->head->next;
    while(p){
        if(p->id == id){
            break;
        }
        p = p->next;
    }
    if(p){
        QString text = QString::number(p->id);
        text.append(" ").append(QString::number(p->pid));
        text.append(" ").append(QString::number(p->data.dInt));
        text.append(" ").append(p->data.dStr);
        ui->lineEdit->setText(text);
    }
    else{
        ui->lineEdit->setText("此id无数据");
    }
}

