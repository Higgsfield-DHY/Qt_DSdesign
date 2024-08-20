/********************************************************************************
** Form generated from reading UI file 'tlwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLWINDOW_H
#define UI_TLWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TLWindow
{
public:
    QAction *actBack;
    QAction *actTableInsert;
    QAction *actTableDelete;
    QAction *actTreeInsert;
    QAction *actTreeDelete;
    QAction *actToTree;
    QWidget *centralwidget;
    QTableView *tableView;
    QTreeView *treeView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TLWindow)
    {
        if (TLWindow->objectName().isEmpty())
            TLWindow->setObjectName("TLWindow");
        TLWindow->resize(830, 372);
        actBack = new QAction(TLWindow);
        actBack->setObjectName("actBack");
        actBack->setMenuRole(QAction::NoRole);
        actTableInsert = new QAction(TLWindow);
        actTableInsert->setObjectName("actTableInsert");
        actTableInsert->setMenuRole(QAction::NoRole);
        actTableDelete = new QAction(TLWindow);
        actTableDelete->setObjectName("actTableDelete");
        actTableDelete->setMenuRole(QAction::NoRole);
        actTreeInsert = new QAction(TLWindow);
        actTreeInsert->setObjectName("actTreeInsert");
        actTreeInsert->setMenuRole(QAction::NoRole);
        actTreeDelete = new QAction(TLWindow);
        actTreeDelete->setObjectName("actTreeDelete");
        actTreeDelete->setMenuRole(QAction::NoRole);
        actToTree = new QAction(TLWindow);
        actToTree->setObjectName("actToTree");
        actToTree->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(TLWindow);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 311, 341));
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName("treeView");
        treeView->setGeometry(QRect(330, 10, 391, 341));
        TLWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TLWindow);
        statusbar->setObjectName("statusbar");
        TLWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(TLWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setMinimumSize(QSize(100, 350));
        toolBar->setMaximumSize(QSize(100, 350));
        toolBar->setMovable(false);
        TLWindow->addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolBar);

        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actTableInsert);
        toolBar->addSeparator();
        toolBar->addAction(actTableDelete);
        toolBar->addSeparator();
        toolBar->addAction(actToTree);
        toolBar->addSeparator();
        toolBar->addAction(actTreeInsert);
        toolBar->addSeparator();
        toolBar->addAction(actTreeDelete);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actBack);
        toolBar->addSeparator();

        retranslateUi(TLWindow);

        QMetaObject::connectSlotsByName(TLWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TLWindow)
    {
        TLWindow->setWindowTitle(QCoreApplication::translate("TLWindow", "MainWindow", nullptr));
        actBack->setText(QCoreApplication::translate("TLWindow", "back", nullptr));
        actTableInsert->setText(QCoreApplication::translate("TLWindow", "\347\272\277\346\200\247\350\241\250\346\217\222\345\205\245", nullptr));
        actTableDelete->setText(QCoreApplication::translate("TLWindow", "\347\272\277\346\200\247\350\241\250\345\210\240\351\231\244", nullptr));
        actTreeInsert->setText(QCoreApplication::translate("TLWindow", "\346\240\221\346\217\222\345\205\245", nullptr));
        actTreeDelete->setText(QCoreApplication::translate("TLWindow", "\346\240\221\345\210\240\351\231\244", nullptr));
        actToTree->setText(QCoreApplication::translate("TLWindow", "\347\224\261\350\241\250\347\224\237\346\210\220\346\240\221", nullptr));
#if QT_CONFIG(tooltip)
        actToTree->setToolTip(QCoreApplication::translate("TLWindow", "\347\224\261\350\241\250\347\224\237\346\210\220\346\240\221", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("TLWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TLWindow: public Ui_TLWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLWINDOW_H
