#include "tlinsertdialog.h"
#include "ui_tlinsertdialog.h"

#include "struct.h"
#include "tlwindow.h"

#include <QString>
#include <QMessageBox>


TLInsertDialog::TLInsertDialog(QWidget *parent, const bool isTree)
    : QDialog(parent)
    , ui(new Ui::TLInsertDialog),isTree(isTree)
{
    ui->setupUi(this);

    this-> setMaximumSize(307,90);
    this-> setMinimumSize(307,90);

    // 设置图标
    QIcon icon;
    if(isTree){
        icon.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\BT.png"));
    }
    else{
        icon.addPixmap(QPixmap("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\TL.png"));
    }
    this->setWindowIcon(icon);

    //回车可插入
    connect(ui->lineEdit, SIGNAL(returnPressed()), ui->TLInsertButton, SLOT(click()));

}

TLInsertDialog::~TLInsertDialog()
{
    delete ui;
}

void TLInsertDialog::closeEvent(QCloseEvent *event){
    // 获取父窗口指针
    TLWindow *parwind = (TLWindow*)parentWidget();
    // 工具栏重新可以调用
    parwind->ToolBarEnable(true);
    // 将窗口指针设置为NULL
    parwind->setDigNull();
}


void TLInsertDialog::on_TLDefualtButton_clicked()
{
    TLWindow *parwind = (TLWindow*)parentWidget();
    parwind->initData(isTree);
    if(isTree == 0){
        parwind->isTreeOutDate = 1;
    }
}


void TLInsertDialog::on_TLInsertButton_clicked()
{
    // 转化数据
    int id = 0, pid = 0;
    Elem data;
    data.dInt = 0;
    data.dStr = "初始字符串";
    QString text = ui->lineEdit->text();
    if(text == ""){
        QMessageBox::critical(new QWidget, "错误", "请输入数据");
    }
    else{
        id = text.section(" ",0,0).toInt();
        pid = text.section(" ",1,1).toInt();
        data.dInt = text.section(" ",2,2).toInt();
        data.dStr = text.section(" ",3,-1);
        ui->lineEdit->clear();

        // 插入数据
        TLWindow *parwind = (TLWindow*)parentWidget();
        if(isTree){
            parwind->getTree()->InsertNewNode(id,pid,data,parwind->getList());
        }
        else{
            bool result = parwind->getList()->InsertNode(id,pid,data);
            // 表中插入成功，则树过时
            if(result) {
                parwind->isTreeOutDate = 1;
            }
        }
    }
}

