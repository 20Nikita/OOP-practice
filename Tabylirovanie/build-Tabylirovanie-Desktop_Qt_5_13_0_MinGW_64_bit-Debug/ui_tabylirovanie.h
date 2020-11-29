/********************************************************************************
** Form generated from reading UI file 'tabylirovanie.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABYLIROVANIE_H
#define UI_TABYLIROVANIE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tabylirovanie
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Tabylirovanie)
    {
        if (Tabylirovanie->objectName().isEmpty())
            Tabylirovanie->setObjectName(QString::fromUtf8("Tabylirovanie"));
        Tabylirovanie->resize(786, 668);
        centralWidget = new QWidget(Tabylirovanie);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 0, 291, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(320, 0, 451, 601));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(10);
        textEdit->setFont(font);
        textEdit->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 120, 93, 28));
        Tabylirovanie->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Tabylirovanie);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 786, 26));
        Tabylirovanie->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Tabylirovanie);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Tabylirovanie->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Tabylirovanie);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Tabylirovanie->setStatusBar(statusBar);

        retranslateUi(Tabylirovanie);

        QMetaObject::connectSlotsByName(Tabylirovanie);
    } // setupUi

    void retranslateUi(QMainWindow *Tabylirovanie)
    {
        Tabylirovanie->setWindowTitle(QCoreApplication::translate("Tabylirovanie", "Tabylirovanie", nullptr));
        label->setText(QCoreApplication::translate("Tabylirovanie", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\321\207\320\260\320\273\320\276 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\260    \320\220 =", nullptr));
        label_2->setText(QCoreApplication::translate("Tabylirovanie", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\275\320\265\321\206 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\260      \320\222 =", nullptr));
        label_3->setText(QCoreApplication::translate("Tabylirovanie", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262 NInt =", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Tabylirovanie", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Consolas'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Tabylirovanie", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tabylirovanie: public Ui_Tabylirovanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABYLIROVANIE_H
