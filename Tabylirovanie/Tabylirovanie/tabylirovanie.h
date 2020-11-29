#ifndef TABYLIROVANIE_H
#define TABYLIROVANIE_H

#include <QMainWindow>
#include "ui_tabylirovanie.h"
#include <QMessageBox>

namespace Ui {
class Tabylirovanie;
}

class Tabylirovanie : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tabylirovanie(QWidget *parent = nullptr);
    ~Tabylirovanie();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tabylirovanie *ui;
};

#endif // TABYLIROVANIE_H
