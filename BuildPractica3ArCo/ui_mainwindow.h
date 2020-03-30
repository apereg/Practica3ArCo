/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Algoritmo1;
    QPushButton *Algoritmo1_2;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(775, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 174, 108);\n"
"background-color: rgb(157, 152, 141);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Algoritmo1 = new QPushButton(centralwidget);
        Algoritmo1->setObjectName(QString::fromUtf8("Algoritmo1"));
        Algoritmo1->setGeometry(QRect(410, 210, 241, 61));
        Algoritmo1->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"background-color: rgb(226, 224, 217);"));
        Algoritmo1_2 = new QPushButton(centralwidget);
        Algoritmo1_2->setObjectName(QString::fromUtf8("Algoritmo1_2"));
        Algoritmo1_2->setGeometry(QRect(70, 210, 241, 61));
        Algoritmo1_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"background-color: rgb(226, 224, 217);\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 721, 61));
        label->setStyleSheet(QString::fromUtf8("font: 26pt \"Palatino Linotype\";\n"
"border-bottom-color: rgb(113, 113, 113);"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 110, 681, 20));
        line->setStyleSheet(QString::fromUtf8("color: rgb(63, 63, 63);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 150, 531, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Palatino Linotype\";"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(-30, 320, 831, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 11, 11);"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(-30, 0, 841, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 11, 11);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 775, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BenchMark", nullptr));
        Algoritmo1->setText(QCoreApplication::translate("MainWindow", "Cambio de im\303\241genes a Sepia", nullptr));
        Algoritmo1_2->setText(QCoreApplication::translate("MainWindow", "Ordenaci\303\263n por Quicksort", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Bienvenido al c\303\241lculo de BenchMarks", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\302\267 Seleccione uno de los siguientes algoritmos a ejecutar:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
