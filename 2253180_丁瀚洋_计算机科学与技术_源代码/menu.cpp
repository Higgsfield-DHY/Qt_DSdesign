#include "menu.h"
#include "./ui_menu.h"

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);

    //窗口名
    this-> setWindowTitle("数据结构课设演示");

    //ui设置
    this-> setMaximumSize(350,110);
    this-> setMinimumSize(350,110);

    //图标
    QIcon con1("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\BT.png");
    ui->BTreeButton->setIcon(con1);
    QIcon con2("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\TL.png");
    ui->TLButton->setIcon(con2);
    QIcon con3("D:\\DS_design\\DS_design_1\\DS_design1\\DS_design1\\icons\\intro.png");
    ui->IntroButton->setIcon(con3);

    //按键背景色
    ui->BTreeButton->setStyleSheet("background:skyblue");
    ui->TLButton->setStyleSheet("background:skyblue");

    //信号与槽
    connect(ui->IntroButton,SIGNAL(returnPressed()),this,SLOT(on_IntroButton_clicked()));
    connect(&IntroWindow,SIGNAL(intro_back()),this,SLOT(toMenu()));

    connect(ui->BTreeButton,SIGNAL(returnPressed()),this,SLOT(on_BTreeButton_clicked()));
    connect(&BtreeWindow,SIGNAL(BTree_back()),this,SLOT(toMenu()));

    connect(ui->TLButton,SIGNAL(returnPressed()),this,SLOT(on_TLButton_clicked()));
    connect(&TLWindow,SIGNAL(TL_back()),this,SLOT(toMenu()));

}

Menu::~Menu()
{
    //退出提示
    QMessageBox::information(this,"退出演示","数据结构课程设计  演示结束");
    delete ui;
}

//进入题目介绍窗口
void Menu::on_IntroButton_clicked()
{
    this-> hide();
    BtreeWindow.hide();
    TLWindow.hide();
    IntroWindow.show();
}

//进入主菜单窗口
void Menu::toMenu()
{
    IntroWindow.hide();
    BtreeWindow.hide();
    TLWindow.hide();
    this->show();
}

//进入算法实现窗口
void Menu::on_BTreeButton_clicked()
{
    this->hide();
    IntroWindow.hide();
    TLWindow.hide();
    BtreeWindow.show();
}

//进入综合应用窗口
void Menu::on_TLButton_clicked()
{
    this->hide();
    IntroWindow.hide();
    BtreeWindow.hide();
    TLWindow.show();
}

