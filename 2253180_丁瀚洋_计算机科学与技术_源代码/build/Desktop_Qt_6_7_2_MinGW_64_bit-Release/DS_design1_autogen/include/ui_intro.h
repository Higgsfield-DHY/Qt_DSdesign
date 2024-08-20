/********************************************************************************
** Form generated from reading UI file 'intro.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRO_H
#define UI_INTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Intro
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *RtnMemuButton;

    void setupUi(QWidget *Intro)
    {
        if (Intro->objectName().isEmpty())
            Intro->setObjectName("Intro");
        Intro->resize(612, 412);
        textBrowser = new QTextBrowser(Intro);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 50, 291, 351));
        textBrowser_2 = new QTextBrowser(Intro);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(310, 50, 291, 351));
        label = new QLabel(Intro);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 20, 161, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(Intro);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 20, 171, 16));
        label_2->setFont(font);
        RtnMemuButton = new QPushButton(Intro);
        RtnMemuButton->setObjectName("RtnMemuButton");
        RtnMemuButton->setGeometry(QRect(250, 10, 111, 31));

        retranslateUi(Intro);

        QMetaObject::connectSlotsByName(Intro);
    } // setupUi

    void retranslateUi(QWidget *Intro)
    {
        Intro->setWindowTitle(QCoreApplication::translate("Intro", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; font-style:italic; text-decoration: underline; color:#000000;\">\302\267\347\256\227\346\263\225\345\256\236\347\216\260\347\254\2540\351\242\230\302\267</span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; font-style:italic; color:#000000;\"> </span><span style=\" font-family:'\345"
                        "\256\213\344\275\223'; font-size:10pt; color:#000000;\">   </span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; color:#000000;\">B-\346\240\221(BTree)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \350\257\225\344\273\216\347\251\272\346\240\221\345\207\272\345\217\221\346\236\204\351\200\240\344\270\200\346\243\265\346\267\261\345\272\246\350\207\263\345\260\221\344\270\2723(\344\270\215\345\214\205\346\213\254\345\244\261\350\257\257\350\212\202\347\202\271)\347\232\2043\351\230\266B-\346\240\221(\345\217\210\347\247\260 2-3\346\240\221)\357\274\214\345\271\266\345"
                        "\217\257\344\273\245\351\232\217\346\227\266\350\277\233\350\241\214\346\237\245\346\211\276\343\200\201\346\217\222\345\205\245\343\200\201\345\210\240\351\231\244\347\255\211\346\223\215\344\275\234\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \350\246\201\346\261\202: \350\203\275\345\244\237\346\212\212\346\236\204\351\200\240\345\222\214\345\210\240\351\231\244\350\277\207\347\250\213\344\270\255\347\232\204B-\346\240\221\351\232\217\346\227\266\346\230\276\347\244\272\350\276\223\345\207\272\346\235\245\357\274\214\350\203\275\347\273\231\345\207\272\346\237\245\346\211\276\346\230\257\345\220\246\346\210\220\345\212\237\347\232\204\344\277\241\346\201\257\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; text-decoration: underline; color:#000000;\">\346\223\215\344\275\234\347\225\214\351\235\242</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; text-decoration: underline; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">\302\267\347\273\223\347\202\271\346\223\215\344\275\234\357\274\232\346\217\222\345\205\245/\345\210\240\351\231\244/\346"
                        "\237\245\346\211\276</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\234\250\346\226\207\346\234\254\350\276\223\345\205\245\346\241\206\344\270\255\350\276\223\345\205\245\344\270\200\344\270\252\346\225\264\346\225\260\346\225\260\345\200\274\357\274\214\344\271\213\345\220\216\347\224\250\346\210\267\345\217\257\350\277\233\350\241\214\345\246\202\344\270\213\346\223\215\344\275\234\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    1.\346\217\222\345\205\245\357\274\232\345\215\225\345\207\273&lt;\346\217\222\345\205\245&gt;\357\274\214\346\210\226\346\214\211&lt;\345\233\236\350\275\246\351\224\256&gt;\357\274\233</span></p>\n"
"<p style="
                        "\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    2.\345\210\240\351\231\244\357\274\232\345\215\225\345\207\273&lt;\345\210\240\351\231\244&gt;\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    3.\346\237\245\346\211\276\357\274\232\345\215\225\345\207\273&lt;\346\237\245\346\211\276&gt;\357\274\233</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">\302\267\350\247\206\345\233\276\346\223\215\344\275\234\357\274\232\345\261\225\345\274\200/\346\224\266\350\265\267/\346\270\205\347\251\272</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \347\224\250\346\210\267\345\217\257\344\273\245\350\277\233\350\241\214\345\246\202\344\270\213\346\223\215\344\275\234\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    1.\345\261\225\345\274\200\346\240\221\347\273\223\346\236\204\357\274\232\345\215\225\345\207\273&lt;\345\261\225\345\274\200&gt;\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    2.\346\224\266\350\265\267\346\240\221\347\273\223\346\236\204\350\207\263\346\240\271\350\212\202\347\202\271\357\274\232\345\215\225\345\207\273&lt;\346\224\266\350\265\267&gt;\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    3.\346\270\205\347\251\272\350\247\206\345\233\276\344\270\255\347\232\204\346\240\221\357\274\232\345\215\225\345\207\273&lt;\346\270\205\347\251\272&gt;\357\274\233</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bo"
                        "ttom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">\302\267\346\263\250\346\204\217\357\274\232\347\224\250\346\210\267\345\217\257\344\273\245\345\215\225\345\207\273&lt;back&gt;\357\274\214\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\347\225\214\351\235\242\357\274\214\344\270\224\350\277\224\345\233\236\345\220\216\350\276\223\345\205\245\347\232\204\344\277\241\346\201\257\344\270\215\344\274\232\344\270\242\345\244\261\343\200\202</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; font-style:italic; text-decoration: underline; color:#000000;\">\302\267\347\273\274\345\220\210\345\272\224\347\224\250\347\254\2540\351\242\230\302\267</span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">  </span><span style=\" font-family:'\345\256\213\344\275\223"
                        "'; font-size:10pt; font-weight:700; color:#000000;\">\346\240\221\344\270\216\347\272\277\346\200\247\350\241\250(Tree&amp;Linklist)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\234\250\345\205\263\347\263\273\346\225\260\346\215\256\345\272\223\344\270\255\357\274\214\346\211\200\346\234\211\346\225\260\346\215\256\345\257\271\350\261\241\351\203\275\344\273\245\350\241\250\347\232\204\345\275\242\345\274\217\345\255\230\345\202\250\357\274\214\345\246\202\351\234\200\345\234\250\345\205\263\347\263\273\346\225\260\346\215\256\344\270\255\345\255\230\345\202\250\346\240\221\347\273\223\346\236\204\357\274\214\351\234\200\350\256\276\347\275\256\344\270\200\346\214\207"
                        "\345\220\221\347\210\266\350\212\202\347\202\271\347\232\204\345\261\236\346\200\247\346\235\245\345\256\236\347\216\260\357\274\214\350\257\245\350\277\207\347\250\213\345\217\257\344\273\245\351\200\232\350\277\207\345\246\202\344\270\213\347\272\277\346\200\247\350\241\250\350\212\202\347\202\271\347\232\204\345\255\230\345\202\250\347\273\223\346\236\204\346\250\241\346\213\237\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    struct Node { </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">      int id; //\350\257\245\347\272\277\346\200\247\350\241\250\344\270\255\346\211\200\346\234\211\350\212\202\347\202\271\347\232\204 ID \351\203\275\345\224\257"
                        "\344\270\200</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">      ElemType data; //\350\212\202\347\202\271\347\232\204\345\200\274\357\274\214\350\207\252\345\256\232\344\271\211\346\225\260\346\215\256\347\261\273\345\236\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">      int pid; //\350\241\250\347\244\272\350\257\245\350\212\202\347\202\271\347\232\204\347\210\266\350\212\202\347\202\271\357\274\2140\350\241\250\347\244\272\346\240\271\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; co"
                        "lor:#000000;\">               //\345\257\271\345\272\224\347\272\277\346\200\247\350\241\250\344\270\255\345\205\266\344\273\226\350\212\202\347\202\271\347\232\204id\345\200\274</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">      Node *next; // \346\214\207\345\220\221\347\272\277\346\200\247\350\241\250\344\270\213\344\270\200\350\212\202\347\202\271</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \357\275\235</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    (1)\350\257\267\350\256"
                        "\276\350\256\241\344\270\200\347\256\227\346\263\225\357\274\214\346\240\271\346\215\256\347\272\277\346\200\247\350\241\250\344\270\255pid\346\214\207\345\220\221\357\274\214\345\260\206\350\257\245\347\272\277\346\200\247\350\241\250\344\270\255\345\255\230\345\202\250\347\232\204\350\212\202\347\202\271\350\275\254\346\215\242\344\270\272\346\240\221\345\275\242\347\273\223\346\236\204\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    (2)\345\234\250\346\240\221\347\273\223\346\236\204\344\270\255\346\217\222\345\205\245\344\270\200\350\212\202\347\202\271\357\274\214\350\207\252\345\212\250\345\260\206\345\205\266\345\212\240\345\205\245\345\210\260\347\272\277\346\200\247\350\241\250\344\270\255\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    (3)\345\234\250\346\240\221\347\273\223\346\236\204\344\270\255\345\210\240\351\231\244\344\270\200\350\212\202\347\202\271\357\274\214\350\207\252\345\212\250\346\233\264\346\226\260\347\272\277\346\200\247\350\241\250\347\232\204\347\273\223\346\236\204\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; text-decoration: underline; color:#000000;\">\346\223\215\344\275\234\350\257\264\346\230\216</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margi"
                        "n-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; text-decoration: underline; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">  1.\346\234\254\351\242\230\346\225\260\346\215\256\345\255\230\345\202\250\346\240\274\345\274\217\344\270\272\357\274\232id pid int string</span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; font-style:italic; color:#000000;\"> </span><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">(\344\273\245\347\251\272\346\240\274\345\210\206\351\232\224)\343\200\202id\346\230\257\350\212\202\347\202\271\347\232\204\345\224\257\344\270\200\346\240\207\350\257\206(\351\235\2360), pid\346\230\257\350\212\202\347\202\271\347\232\204\347\210\266\350\212\202\347"
                        "\202\271(0\344\270\272\346\240\271), int\346\230\257\350\212\202\347\202\271\347\232\204\346\225\264\345\236\213\346\225\260\346\215\256,string\346\230\257\350\212\202\347\202\271\347\232\204\345\255\227\347\254\246\344\270\262\346\225\260\346\215\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">  2.&lt;\350\241\250\346\217\222\345\205\245&gt;&lt;\350\241\250\345\210\240\351\231\244&gt;&lt;\350\241\250\350\275\254\345\214\226\346\240\221&gt;\346\260\270\344\271\205\345\217\257\347\224\250\357\274\214&lt;\346\240\221\346\217\222\345\205\245&gt;&lt;\346\240\221\345\210\240\351\231\244&gt;\345\234\250"
                        "\346\210\220\345\212\237\346\211\247\350\241\214&lt;\350\241\250\350\275\254\345\214\226\346\240\221&gt;\345\220\216\345\220\257\347\224\250\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">  3.\345\257\271\346\240\221\350\212\202\347\202\271\346\223\215\344\275\234\345\220\216\357\274\214\347\272\277\346\200\247\350\241\250\344\270\255\346\225\260\346\215\256\345\260\206\345\220\214\346\255\245\346\233\264\346\226\260\357\274\214\344\275\206\346\230\257\347\272\277\346\200\247\350\241\250\346\225\260\346\215\256\346\223\215\344\275\234\345\220\216\357\274\214\346\240\221\347\232\204\344\277\241\346"
                        "\201\257\344\270\215\346\233\264\346\226\260\357\274\214\344\270\224\345\257\271\346\240\221\347\232\204\346\223\215\344\275\234\350\242\253\346\232\202\346\227\266\347\246\201\347\224\250\357\274\214\347\233\264\345\210\260\346\210\220\345\212\237\346\211\247\350\241\214&lt;\350\241\250\350\275\254\345\214\226\346\240\221&gt;(\346\211\213\345\212\250\345\220\214\346\255\245\346\240\221\347\232\204\346\225\260\346\215\256\345\220\216\346\211\215\350\203\275\345\257\271\346\240\221\350\277\233\350\241\214\346\223\215\344\275\234)\357\274\233</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">  4.&lt;\347\272\277\346"
                        "\200\247\350\241\250\345\210\240\351\231\244&gt;\345\210\240\351\231\244\345\215\225\350\212\202\347\202\271\357\274\214&lt;\346\240\221\345\210\240\351\231\244&gt;\345\210\240\351\231\244\350\212\202\347\202\271\346\227\266\350\277\236\351\200\232\350\257\245\350\212\202\347\202\271\347\232\204\345\255\220\346\240\221\345\260\206\350\242\253\344\270\200\345\220\214\345\210\240\351\231\244\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; text-decoration: underline; color:#000000;\">\346\223\215\344\275\234\347\225\214\351\235\242</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; ma"
                        "rgin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; font-weight:700; text-decoration: underline; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">\302\267\347\272\277\346\200\247\350\241\250\346\217\222\345\205\245\346\223\215\344\275\234\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\215\225\345\207\273&lt;\347\272\277\346\200\247\350\241\250\346\217\222\345\205\245&gt;\357\274\214\345\234\250\345\257\271\350\257\235\346\241\206\344\270\255\345\217\257\346\214\211\347\205\247\350\246\201\346\261\202\350\276\223\345\205\245\345\276\205\346"
                        "\217\222\345\205\245\350\212\202\347\202\271\347\232\204\344\277\241\346\201\257\357\274\214\345\206\215\345\215\225\345\207\273&lt;\346\217\222\345\205\245&gt;\346\210\226&lt;\345\233\236\350\275\246\351\224\256&gt;\345\256\236\347\216\260\346\225\260\346\215\256\346\217\222\345\205\245\357\274\233\346\217\222\345\205\245\345\220\216\345\217\257\344\273\245\345\206\215\347\273\247\347\273\255\350\277\233\350\241\214\346\255\244\346\223\215\344\275\234\357\274\214\347\233\264\345\210\260\345\205\263\351\227\255\345\257\271\350\257\235\346\241\206\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\234\250\345\257\271\350\257\235\346\241\206\344\270\255\345\215\225\345\207\273&lt;\350\241\250\345\241\253\345\205\205\351\242\204\350\256\276\345\200\274&gt;\357\274\214\347\272\277\346\200\247\350\241\250\346\225\260\346\215"
                        "\256\345\260\206\350\242\253\346\233\277\346\215\242\344\270\272\351\242\204\350\256\276\346\225\260\346\215\256\357\274\214\344\273\245\346\226\271\344\276\277\347\224\250\346\210\267\351\252\214\350\257\201\347\254\254\344\270\200\345\260\217\351\242\230\347\232\204\345\212\237\350\203\275\357\274\233</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">\302\267\347\272\277\346\200\247\350\241\250\345\210\240\351\231\244\346\223\215\344\275\234\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fam"
                        "ily:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\215\225\345\207\273&lt;\347\272\277\346\200\247\350\241\250\345\210\240\351\231\244&gt;\357\274\214\345\234\250\345\257\271\350\257\235\346\241\206\344\270\255\345\217\257\350\276\223\345\205\245\346\210\226\351\200\211\346\213\251\345\276\205\345\210\240\351\231\244\346\225\260\346\215\256\347\232\204id\357\274\214\345\220\214\346\227\266\346\226\207\346\234\254\346\241\206\344\274\232\347\273\231\345\207\272\346\255\244id\345\257\271\345\272\224\346\225\260\346\215\256\347\232\204\344\277\241\346\201\257\357\274\214\345\215\225\345\207\273&lt;\345\210\240\351\231\244&gt;\346\210\226&lt;\345\233\236\350\275\246\351\224\256&gt;\345\256\236\347\216\260\346\225\260\346\215\256\345\210\240\351\231\244\357\274\233\345\210\240\351\231\244\345\220\216\345\217\257\344\273\245\345\206\215\347\273\247\347\273\255\350\277\233\350\241\214\346\255\244\346\223\215\344\275\234\357\274\214\347\233\264\345\210\260\345\205\263\351\227\255\345\257\271\350"
                        "\257\235\346\241\206\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\234\250\345\257\271\350\257\235\346\241\206\344\270\255\345\215\225\345\207\273&lt;\346\270\205\347\251\272\346\225\260\346\215\256&gt;\357\274\214\345\260\206\346\270\205\347\251\272\347\272\277\346\200\247\350\241\250\345\222\214\346\240\221\344\270\255\346\225\260\346\215\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">\302\267\346"
                        "\240\221\346\217\222\345\205\245\346\223\215\344\275\234\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\215\225\345\207\273&lt;\346\240\221\346\217\222\345\205\245&gt;\357\274\214\345\234\250\345\257\271\350\257\235\346\241\206\344\270\255\345\217\257\346\214\211\347\205\247\350\246\201\346\261\202\350\276\223\345\205\245\345\276\205\346\217\222\345\205\245\350\212\202\347\202\271\347\232\204\344\277\241\346\201\257\357\274\214\345\206\215\345\215\225\345\207\273&lt;\346\217\222\345\205\245&gt;\346\210\226&lt;\345\233\236\350\275\246\351\224\256&gt;\345\256\236\347\216\260\350\212\202\347\202\271\346\217\222\345\205\245\357\274\214\345\271\266\344\270\224\347\272\277\346\200\247\350\241\250\344\270\255\346\225\260\346\215\256\345\260\206\345\220\214\346\255\245\346\233\264\346\226\260\357\274\233\346\217\222\345\205"
                        "\245\345\220\216\345\217\257\344\273\245\345\206\215\347\273\247\347\273\255\350\277\233\350\241\214\346\255\244\346\223\215\344\275\234\357\274\214\347\233\264\345\210\260\345\205\263\351\227\255\345\257\271\350\257\235\346\241\206\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\234\250\345\257\271\350\257\235\346\241\206\344\270\255\345\215\225\345\207\273&lt;\350\241\250\345\241\253\345\205\205\351\242\204\350\256\276\345\200\274&gt;\357\274\214\347\272\277\346\200\247\350\241\250\346\225\260\346\215\256\345\260\206\350\242\253\346\233\277\346\215\242\344\270\272\351\242\204\350\256\276\346\225\260\346\215\256\357\274\214\344\273\245\346\226\271\344\276\277\347\224\250\346\210\267\351\252\214\350\257\201\347\254\254\344\270\200\345\260\217\351\242\230\347\232\204\345\212\237\350\203\275\357\274\233</span></p>\n"
""
                        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">\302\267\346\240\221\345\210\240\351\231\244\346\223\215\344\275\234\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\215\225\345\207\273&lt;\346\240\221\345\210\240\351\231\244&gt;\357\274\214\345\234\250\345\257\271\350\257\235\346\241\206\344\270\255\345\217\257\350\276\223\345\205\245\346\210\226\351\200\211\346\213\251\345\276\205\345\210\240\351\231\244\350\212\202\347\202\271\347"
                        "\232\204id\357\274\214\345\220\214\346\227\266\346\226\207\346\234\254\346\241\206\344\274\232\347\273\231\345\207\272\346\255\244id\345\257\271\345\272\224\350\212\202\347\202\271\347\232\204\344\277\241\346\201\257\357\274\214\345\215\225\345\207\273&lt;\345\210\240\351\231\244&gt;\346\210\226&lt;\345\233\236\350\275\246\351\224\256&gt;\345\256\236\347\216\260\350\212\202\347\202\271\345\210\240\351\231\244\357\274\233\345\210\240\351\231\244\345\220\216\345\217\257\344\273\245\345\206\215\347\273\247\347\273\255\350\277\233\350\241\214\346\255\244\346\223\215\344\275\234\357\274\214\347\233\264\345\210\260\345\205\263\351\227\255\345\257\271\350\257\235\346\241\206\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">    \345\234\250\345\257\271\350\257\235\346\241\206\344\270\255\345\215\225\345\207\273&lt;\346\270\205\347\251"
                        "\272\346\225\260\346\215\256&gt;\357\274\214\345\260\206\346\270\205\347\251\272\347\272\277\346\200\247\350\241\250\345\222\214\346\240\221\344\270\255\346\225\260\346\215\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'\345\256\213\344\275\223'; font-size:10pt; color:#000000;\">\302\267\346\263\250\346\204\217\357\274\232\347\224\250\346\210\267\345\217\257\344\273\245\345\215\225\345\207\273&lt;back&gt;\357\274\214\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\347\225\214\351\235\242\357\274\214\350\277\224\345\233\236\345\220\216\350\276\223\345\205\245\347\232\204\344\277\241\346\201\257\344\270\215\344\274\232\344\270\242\345\244\261"
                        "\343\200\202</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Intro", "\347\256\227\346\263\225\345\256\236\347\216\260\347\254\2540\351\242\230\357\274\232B-\346\240\221\346\223\215\344\275\234", nullptr));
        label_2->setText(QCoreApplication::translate("Intro", "\347\273\274\345\220\210\345\272\224\347\224\250\347\254\2540\351\242\230\357\274\232\346\240\221\344\270\216\347\272\277\346\200\247\350\241\250", nullptr));
        RtnMemuButton->setText(QCoreApplication::translate("Intro", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Intro: public Ui_Intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRO_H
