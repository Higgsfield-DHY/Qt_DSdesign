/********************************************************************************
** Form generated from reading UI file 'btreewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTREEWINDOW_H
#define UI_BTREEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BTreeWindow
{
public:
    QTreeView *treeView;
    QLineEdit *lineKey;
    QPushButton *InsertButton;
    QPushButton *DeleteButton;
    QPushButton *SearchButton;
    QLabel *label_1;
    QLabel *labelDegree;
    QLabel *label_2;
    QLabel *labelDepth;
    QPushButton *BT_RtnButton;
    QPushButton *ClearButton;
    QPushButton *ShowButton;
    QPushButton *CloseButton;

    void setupUi(QWidget *BTreeWindow)
    {
        if (BTreeWindow->objectName().isEmpty())
            BTreeWindow->setObjectName("BTreeWindow");
        BTreeWindow->resize(622, 332);
        treeView = new QTreeView(BTreeWindow);
        treeView->setObjectName("treeView");
        treeView->setGeometry(QRect(90, 10, 521, 311));
        lineKey = new QLineEdit(BTreeWindow);
        lineKey->setObjectName("lineKey");
        lineKey->setGeometry(QRect(10, 60, 71, 21));
        lineKey->setAlignment(Qt::AlignCenter);
        InsertButton = new QPushButton(BTreeWindow);
        InsertButton->setObjectName("InsertButton");
        InsertButton->setGeometry(QRect(10, 90, 71, 21));
        DeleteButton = new QPushButton(BTreeWindow);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setGeometry(QRect(10, 120, 71, 21));
        SearchButton = new QPushButton(BTreeWindow);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(10, 150, 71, 21));
        label_1 = new QLabel(BTreeWindow);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(10, 10, 51, 21));
        labelDegree = new QLabel(BTreeWindow);
        labelDegree->setObjectName("labelDegree");
        labelDegree->setGeometry(QRect(50, 10, 41, 20));
        labelDegree->setFrameShape(QFrame::NoFrame);
        labelDegree->setFrameShadow(QFrame::Plain);
        labelDegree->setMidLineWidth(0);
        labelDegree->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(BTreeWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 51, 21));
        labelDepth = new QLabel(BTreeWindow);
        labelDepth->setObjectName("labelDepth");
        labelDepth->setGeometry(QRect(50, 30, 41, 20));
        labelDepth->setAlignment(Qt::AlignCenter);
        BT_RtnButton = new QPushButton(BTreeWindow);
        BT_RtnButton->setObjectName("BT_RtnButton");
        BT_RtnButton->setGeometry(QRect(10, 290, 61, 31));
        ClearButton = new QPushButton(BTreeWindow);
        ClearButton->setObjectName("ClearButton");
        ClearButton->setGeometry(QRect(10, 250, 71, 21));
        ShowButton = new QPushButton(BTreeWindow);
        ShowButton->setObjectName("ShowButton");
        ShowButton->setGeometry(QRect(10, 190, 71, 20));
        CloseButton = new QPushButton(BTreeWindow);
        CloseButton->setObjectName("CloseButton");
        CloseButton->setGeometry(QRect(10, 220, 71, 20));

        retranslateUi(BTreeWindow);

        QMetaObject::connectSlotsByName(BTreeWindow);
    } // setupUi

    void retranslateUi(QWidget *BTreeWindow)
    {
        BTreeWindow->setWindowTitle(QCoreApplication::translate("BTreeWindow", "Form", nullptr));
        lineKey->setPlaceholderText(QCoreApplication::translate("BTreeWindow", "\350\276\223\345\205\245\346\225\264\346\225\260", nullptr));
        InsertButton->setText(QCoreApplication::translate("BTreeWindow", "\346\217\222  \345\205\245", nullptr));
        DeleteButton->setText(QCoreApplication::translate("BTreeWindow", "\345\210\240  \351\231\244", nullptr));
        SearchButton->setText(QCoreApplication::translate("BTreeWindow", "\346\237\245  \346\211\276", nullptr));
        label_1->setText(QCoreApplication::translate("BTreeWindow", "\302\267\346\240\221  \351\230\266\357\274\232", nullptr));
        labelDegree->setText(QCoreApplication::translate("BTreeWindow", "3", nullptr));
        label_2->setText(QCoreApplication::translate("BTreeWindow", "\302\267\346\267\261  \345\272\246\357\274\232", nullptr));
        labelDepth->setText(QCoreApplication::translate("BTreeWindow", "0", nullptr));
        BT_RtnButton->setText(QCoreApplication::translate("BTreeWindow", "back", nullptr));
        ClearButton->setText(QCoreApplication::translate("BTreeWindow", "\346\270\205  \347\251\272", nullptr));
        ShowButton->setText(QCoreApplication::translate("BTreeWindow", "\345\261\225  \345\274\200", nullptr));
        CloseButton->setText(QCoreApplication::translate("BTreeWindow", "\346\224\266  \350\265\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BTreeWindow: public Ui_BTreeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTREEWINDOW_H
