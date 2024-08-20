#ifndef TLDELETEDIALOG_H
#define TLDELETEDIALOG_H

#include <QDialog>

namespace Ui {
class TLDeleteDialog;
}

class TLDeleteDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TLDeleteDialog(QWidget *parent = nullptr, const bool isTree = 0);

    ~TLDeleteDialog();

private slots:
    void on_TLClearButton_clicked();

    void on_TLDeleteButton_clicked();

    void on_spinBox_valueChanged(int id);

private:
    Ui::TLDeleteDialog *ui;

    bool isTree;
    void closeEvent(QCloseEvent *event);

};

#endif // TLDELETEDIALOG_H
