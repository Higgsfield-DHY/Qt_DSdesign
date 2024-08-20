#include "intro.h"
#include "ui_intro.h"

Intro::Intro(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Intro)
{
    ui->setupUi(this);

    //窗口名
    this-> setWindowTitle("题目介绍&演示帮助");

    //ui设置
    this-> setMaximumSize(612,412);
    this-> setMinimumSize(612,412);

    //信号与槽
    connect(ui->RtnMemuButton,SIGNAL(returnPressed()),this,SLOT(on_RtnMemuButton_clicked()));
}

Intro::~Intro()
{
    delete ui;
}

//<返回主菜单>按键信号
void Intro::on_RtnMemuButton_clicked()
{
    emit intro_back();
}

