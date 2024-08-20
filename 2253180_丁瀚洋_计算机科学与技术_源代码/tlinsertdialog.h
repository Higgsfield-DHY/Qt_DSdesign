#ifndef TLINSERTDIALOG_H
#define TLINSERTDIALOG_H

#include <QDialog>

namespace Ui {
class TLInsertDialog;
}

class TLInsertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TLInsertDialog(QWidget *parent = nullptr, const bool isTree = 0);
    ~TLInsertDialog();

private slots:
    void on_TLDefualtButton_clicked();

    void on_TLInsertButton_clicked();


private:
    Ui::TLInsertDialog *ui;
    bool isTree;
    void closeEvent(QCloseEvent *event);




};

#endif // TLINSERTDIALOG_H
