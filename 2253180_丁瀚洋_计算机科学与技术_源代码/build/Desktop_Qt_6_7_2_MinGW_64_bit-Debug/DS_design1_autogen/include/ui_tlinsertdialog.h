/********************************************************************************
** Form generated from reading UI file 'tlinsertdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLINSERTDIALOG_H
#define UI_TLINSERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TLInsertDialog
{
public:
    QPushButton *TLInsertButton;
    QPushButton *TLDefualtButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *TLInsertDialog)
    {
        if (TLInsertDialog->objectName().isEmpty())
            TLInsertDialog->setObjectName("TLInsertDialog");
        TLInsertDialog->resize(307, 92);
        TLInsertButton = new QPushButton(TLInsertDialog);
        TLInsertButton->setObjectName("TLInsertButton");
        TLInsertButton->setGeometry(QRect(210, 60, 81, 21));
        TLInsertButton->setFocusPolicy(Qt::NoFocus);
        TLDefualtButton = new QPushButton(TLInsertDialog);
        TLDefualtButton->setObjectName("TLDefualtButton");
        TLDefualtButton->setGeometry(QRect(20, 60, 91, 21));
        TLDefualtButton->setFocusPolicy(Qt::NoFocus);
        lineEdit = new QLineEdit(TLInsertDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 10, 271, 21));
        label = new QLabel(TLInsertDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 271, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(8);
        font.setBold(false);
        label->setFont(font);

        retranslateUi(TLInsertDialog);

        QMetaObject::connectSlotsByName(TLInsertDialog);
    } // setupUi

    void retranslateUi(QDialog *TLInsertDialog)
    {
        TLInsertDialog->setWindowTitle(QCoreApplication::translate("TLInsertDialog", "Dialog", nullptr));
        TLInsertButton->setText(QCoreApplication::translate("TLInsertDialog", "\346\217\222  \345\205\245", nullptr));
        TLDefualtButton->setText(QCoreApplication::translate("TLInsertDialog", "\350\241\250\345\241\253\345\205\205\351\242\204\350\256\276\345\200\274", nullptr));
        lineEdit->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("TLInsertDialog", "\346\225\260\346\215\256\350\276\223\345\205\245\346\240\274\345\274\217(\347\251\272\346\240\274\345\210\206\351\232\224)\357\274\232id pid data(int) data(string)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TLInsertDialog: public Ui_TLInsertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLINSERTDIALOG_H
