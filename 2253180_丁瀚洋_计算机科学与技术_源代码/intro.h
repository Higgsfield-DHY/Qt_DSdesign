#ifndef INTRO_H
#define INTRO_H

#include <QWidget>

namespace Ui {
class Intro;
}

class Intro : public QWidget
{
    Q_OBJECT

public:
    explicit Intro(QWidget *parent = nullptr);
    ~Intro();

private slots:
    void on_RtnMemuButton_clicked();

private:
    Ui::Intro *ui;

signals:
    void intro_back();
};

#endif // INTRO_H
