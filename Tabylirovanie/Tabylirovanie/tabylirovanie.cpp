#include "tabylirovanie.h"

Tabylirovanie::Tabylirovanie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tabylirovanie)
{
    ui->setupUi(this);
}

Tabylirovanie::~Tabylirovanie()
{
    delete ui;
}

void Tabylirovanie::on_pushButton_clicked()
{

    //Инициализация переменных
        double A;				       //концы интервала
        double B;			           //концы интервала
        int    NInt;	   	           //число интервалов
        double h;					   //шаг
        double X;                      //аргумент
        double F;                      //функция F(x) = (x - 1)*(x - 1)*(x - 1)
        double G;                      //функция G(x) = 1 - x * x
        int    i;                      //параметр цикла
        double Time;				   //временная переменная
        bool ok, t = 1;
        QString Nahalo , Koneu, chag, str;
        ui->textEdit->setText("");
        //Ввод А
        Nahalo = ui->lineEdit->text();
        A = Nahalo.toDouble(&ok);
        if (ok == false)
        {
            QMessageBox ::critical(this, "Ошибка ", "В поле ввода А должно быть ввидено число");
            t = t && ok;
        }
        //Ввод B
        Koneu = ui->lineEdit_2->text();
        B = Koneu.toDouble(&ok);
        if (ok == false && t)
        {
            QMessageBox ::critical(this, "Ошибка ", "В поле ввода B должно быть ввидено число");
            t = t && ok;
        }
        //Ввод NInt
        chag = ui->lineEdit_3->text();
        NInt = chag.toInt(&ok);
        if (ok == false && t)
        {
            QMessageBox ::critical(this, "Ошибка ", "В поле ввода NInt должно быть ввидено целое число");
            t = t && ok;
        }
        //Входной контроль

        if (NInt <= 0 && t)
        {
            t = 0;
            QMessageBox ::critical(this, "Ошибка ", " NInt должен быть больше 0 ");
        }
        else if(t)
        {
            if (A > B)//меняем переменные местами
            {
            Time = A;
            A = B;
            B = Time;
            QMessageBox::warning(this, "Внимание", "Наяало и конец интервала были переставленны местами!");
            }//if
         if (NInt >= 10000)
             QMessageBox::warning(this, "Внимание", "Я буду долго думать");

         h = (B - A) / NInt;//Вычисление шага
         if (A == B)
         {
            QMessageBox::warning(this, "Внимание", "Значение NInt было заменено!");
            NInt = 0; //Входной кантроль
         }

        //Шапка
        ui->textEdit->insertPlainText("F = (X - 1)*(X - 1)*(X - 1)\nG = 1 - X*X\n");
        ui->textEdit->insertPlainText("┌──────────────┬──────────────┬──────────────┐\n");
        ui->textEdit->insertPlainText("│       X      │       F      │       G      │\n");
        ui->textEdit->insertPlainText("├──────────────┼──────────────┼──────────────┤\n");
        for (i = 0; i <= NInt; i++)               //Печать середины таблицы
        {
            X = A + i * h;                        //Приращение аргумента
            F = (X - 1)*(X - 1)*(X - 1);          //Вычисление функции F(x)
            G = 1 - X*X;                          //Вычисление функции G(x)
            //Заполняем таблицу
            Nahalo = "              ";
            Nahalo.append(str.setNum(X));
            Nahalo = Nahalo.right(12);

            Koneu = "              ";
            Koneu.append(str.setNum(F));
            Koneu = Koneu.right(12);

            chag = "              ";
            chag.append(str.setNum(G));
            chag = chag.right(12);
            ui->textEdit->insertPlainText("│ " + Nahalo +" │ " + Koneu  + " │ " + chag + " │\n");

            //Отчёркиваем результат
            if (i < NInt)
            {
                ui->textEdit->insertPlainText("├──────────────┼──────────────┼──────────────┤\n");
            }//if
        }//for i
    //
    //	//Конец таблицы
    ui->textEdit->insertPlainText("└──────────────┴──────────────┴──────────────┘\n");
 }
}
