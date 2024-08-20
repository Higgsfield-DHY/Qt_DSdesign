/********************************************************************************
** Form generated from reading UI file 'tldeletedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLDELETEDIALOG_H
#define UI_TLDELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TLDeleteDialog
{
public:
    QPushButton *TLClearButton;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *TLDeleteButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *TLDeleteDialog)
    {
        if (TLDeleteDialog->objectName().isEmpty())
            TLDeleteDialog->setObjectName("TLDeleteDialog");
        TLDeleteDialog->resize(199, 104);
        TLClearButton = new QPushButton(TLDeleteDialog);
        TLClearButton->setObjectName("TLClearButton");
        TLClearButton->setGeometry(QRect(10, 70, 81, 20));
        TLClearButton->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(TLDeleteDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 91, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(9);
        font.setBold(false);
        label->setFont(font);
        spinBox = new QSpinBox(TLDeleteDialog);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(110, 10, 61, 21));
        TLDeleteButton = new QPushButton(TLDeleteDialog);
        TLDeleteButton->setObjectName("TLDeleteButton");
        TLDeleteButton->setGeometry(QRect(110, 70, 81, 21));
        TLDeleteButton->setFocusPolicy(Qt::StrongFocus);
        lineEdit = new QLineEdit(TLDeleteDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 40, 181, 21));
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setReadOnly(false);

        retranslateUi(TLDeleteDialog);

        QMetaObject::connectSlotsByName(TLDeleteDialog);
    } // setupUi

    void retranslateUi(QDialog *TLDeleteDialog)
    {
        TLDeleteDialog->setWindowTitle(QCoreApplication::translate("TLDeleteDialog", "Dialog", nullptr));
        TLClearButton->setText(QCoreApplication::translate("TLDeleteDialog", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        label->setText(QCoreApplication::translate("TLDeleteDialog", "\351\200\211\346\213\251\345\210\240\351\231\244\346\225\260\346\215\256id", nullptr));
        TLDeleteButton->setText(QCoreApplication::translate("TLDeleteDialog", "\345\210\240  \351\231\244", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("TLDeleteDialog", "id pid data(int) data(string)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TLDeleteDialog: public Ui_TLDeleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLDELETEDIALOG_H
