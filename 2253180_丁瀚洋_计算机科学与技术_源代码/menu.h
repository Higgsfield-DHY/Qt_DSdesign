#ifndef MENU_H
#define MENU_H

#include "intro.h"
#include "btreewindow.h"
#include "tlwindow.h"

#include <QWidget>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui {
class Menu;
}
QT_END_NAMESPACE

class Menu : public QWidget
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_IntroButton_clicked();

    void toMenu();

    void on_BTreeButton_clicked();

    void on_TLButton_clicked();

private:
    Ui::Menu *ui;

    Intro IntroWindow;        //题目介绍窗口
    BTreeWindow BtreeWindow;  //B-树演示窗口
    TLWindow TLWindow;       //综合应用演示窗口

};
#endif // MENU_H
