#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
        // Инициализация переменных
        QString rez;
        double Tsum = 3.141592653 / 4;// Точная сумма
        double Sum = 1;// Текущая сумма
        int N = 1;// Номер слагаемого
        int Znak = 1;// Знак слагаемого
        double Zm = 1;// Знаменатель
        double Slag = 0;// слагаемое
        double Diff = Sum - Tsum;// Разность точной суммы и суммы
        //Ввод данных
        QString Epss = ui->lineEdit->text();
        double Eps = Epss.toDouble ();// Точность
        if (Eps < 0.00000001 && Eps > 0)
        {
            Eps = 0.00000001;
            QMessageBox ::warning(this, "Внимание", "Слишком маленьний Eps\nВведу чего он заменен на 0.00000001");
        }
        if (Eps <= 0)
            QMessageBox ::critical(this, "Ошибка", "Eps должен быть числом больше 0");
        else {
        while (Diff > Eps)
        {
            // Вычисление слогаемого
            N = N + 1;
            Znak = -Znak;
            Zm = (2 * N) - 1;
            Slag = Znak / Zm;

            // Обновление суммы
            Sum = Sum + Slag;

            // Обновление разности
            Diff = Tsum - Sum;
            if (Diff < 0) Diff = -Diff;// Модуль
        }// Конец основных вычислений
        //Печать результата
         ui->lineEdit_2->setText(rez.setNum(Sum));
    }
}















