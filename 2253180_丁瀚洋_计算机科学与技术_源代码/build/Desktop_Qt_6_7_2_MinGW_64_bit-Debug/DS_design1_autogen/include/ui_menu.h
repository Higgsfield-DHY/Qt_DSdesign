/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *BTreeButton;
    QPushButton *TLButton;
    QPushButton *IntroButton;
    QLabel *ID_Name;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(352, 112);
        BTreeButton = new QPushButton(Menu);
        BTreeButton->setObjectName("BTreeButton");
        BTreeButton->setGeometry(QRect(10, 10, 121, 91));
        BTreeButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        BTreeButton->setIconSize(QSize(50, 50));
        BTreeButton->setCheckable(false);
        BTreeButton->setChecked(false);
        BTreeButton->setAutoRepeat(false);
        BTreeButton->setAutoDefault(false);
        BTreeButton->setFlat(false);
        TLButton = new QPushButton(Menu);
        TLButton->setObjectName("TLButton");
        TLButton->setGeometry(QRect(220, 10, 121, 91));
        TLButton->setIconSize(QSize(50, 50));
        IntroButton = new QPushButton(Menu);
        IntroButton->setObjectName("IntroButton");
        IntroButton->setGeometry(QRect(140, 50, 71, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(9);
        IntroButton->setFont(font);
        IntroButton->setIconSize(QSize(15, 15));
        ID_Name = new QLabel(Menu);
        ID_Name->setObjectName("ID_Name");
        ID_Name->setGeometry(QRect(140, 20, 81, 16));
        ID_Name->setFont(font);

        retranslateUi(Menu);

        BTreeButton->setDefault(false);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        BTreeButton->setText(QCoreApplication::translate("Menu", "B-\346\240\221\346\274\224\347\244\272", nullptr));
        TLButton->setText(QCoreApplication::translate("Menu", "\346\240\221\344\270\216\347\272\277\346\200\247\350\241\250", nullptr));
        IntroButton->setText(QCoreApplication::translate("Menu", "\351\242\230\347\233\256\344\273\213\347\273\215", nullptr));
        ID_Name->setText(QCoreApplication::translate("Menu", "2253180\344\270\201\347\200\232\346\264\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
