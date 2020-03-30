/********************************************************************************
** Form generated from reading UI file 'quicksort.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKSORT_H
#define UI_QUICKSORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quicksort
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *tiempo1;
    QLineEdit *tiempo4;
    QLineEdit *tiempo3;
    QLineEdit *tiempo2;
    QLineEdit *tiempo5;
    QFrame *line;
    QPushButton *pushButton;
    QLabel *label_7;
    QLineEdit *media;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *seleccionarArchivoPushButton;
    QPushButton *seleccionarArchivoPushButton_2;
    QPushButton *resetear;

    void setupUi(QWidget *quicksort)
    {
        if (quicksort->objectName().isEmpty())
            quicksort->setObjectName(QString::fromUtf8("quicksort"));
        quicksort->resize(537, 597);
        quicksort->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 174, 108);\n"
"background-color: rgb(157, 152, 141);"));
        textBrowser = new QTextBrowser(quicksort);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 10, 541, 71));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 11, 11);"));
        label = new QLabel(quicksort);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 361, 51));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"Palatino Linotype\";\n"
"font: 75 italic 18pt \"Palatino Linotype\";"));
        label_2 = new QLabel(quicksort);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        label_3 = new QLabel(quicksort);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 400, 81, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        label_4 = new QLabel(quicksort);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 330, 91, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        label_5 = new QLabel(quicksort);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 260, 81, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        label_6 = new QLabel(quicksort);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 190, 81, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        tiempo1 = new QLineEdit(quicksort);
        tiempo1->setObjectName(QString::fromUtf8("tiempo1"));
        tiempo1->setGeometry(QRect(150, 120, 191, 31));
        tiempo1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo1->setReadOnly(true);
        tiempo4 = new QLineEdit(quicksort);
        tiempo4->setObjectName(QString::fromUtf8("tiempo4"));
        tiempo4->setGeometry(QRect(150, 330, 191, 31));
        tiempo4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo4->setReadOnly(true);
        tiempo3 = new QLineEdit(quicksort);
        tiempo3->setObjectName(QString::fromUtf8("tiempo3"));
        tiempo3->setGeometry(QRect(150, 260, 191, 31));
        tiempo3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo3->setReadOnly(true);
        tiempo2 = new QLineEdit(quicksort);
        tiempo2->setObjectName(QString::fromUtf8("tiempo2"));
        tiempo2->setGeometry(QRect(150, 190, 191, 31));
        tiempo2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo2->setReadOnly(true);
        tiempo5 = new QLineEdit(quicksort);
        tiempo5->setObjectName(QString::fromUtf8("tiempo5"));
        tiempo5->setGeometry(QRect(150, 400, 191, 31));
        tiempo5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo5->setReadOnly(true);
        line = new QFrame(quicksort);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 80, 551, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(quicksort);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 470, 291, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";"));
        label_7 = new QLabel(quicksort);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 530, 81, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Palatino Linotype\";"));
        media = new QLineEdit(quicksort);
        media->setObjectName(QString::fromUtf8("media"));
        media->setGeometry(QRect(150, 530, 191, 31));
        media->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        media->setReadOnly(true);
        radioButton = new QRadioButton(quicksort);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setEnabled(false);
        radioButton->setGeometry(QRect(470, 40, 21, 20));
        radioButton->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 11, 11);"));
        radioButton_2 = new QRadioButton(quicksort);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setEnabled(false);
        radioButton_2->setGeometry(QRect(50, 40, 21, 20));
        radioButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 11, 11);"));
        seleccionarArchivoPushButton = new QPushButton(quicksort);
        seleccionarArchivoPushButton->setObjectName(QString::fromUtf8("seleccionarArchivoPushButton"));
        seleccionarArchivoPushButton->setGeometry(QRect(350, 210, 181, 61));
        seleccionarArchivoPushButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Palatino Linotype\";"));
        seleccionarArchivoPushButton_2 = new QPushButton(quicksort);
        seleccionarArchivoPushButton_2->setObjectName(QString::fromUtf8("seleccionarArchivoPushButton_2"));
        seleccionarArchivoPushButton_2->setGeometry(QRect(350, 350, 181, 61));
        seleccionarArchivoPushButton_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Palatino Linotype\";"));
        resetear = new QPushButton(quicksort);
        resetear->setObjectName(QString::fromUtf8("resetear"));
        resetear->setGeometry(QRect(350, 480, 181, 61));
        resetear->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Palatino Linotype\";"));

        retranslateUi(quicksort);

        QMetaObject::connectSlotsByName(quicksort);
    } // setupUi

    void retranslateUi(QWidget *quicksort)
    {
        quicksort->setWindowTitle(QCoreApplication::translate("quicksort", "Quicksort", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("quicksort", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("quicksort", "  Ordenaci\303\263n por Quicksort  ", nullptr));
        label_2->setText(QCoreApplication::translate("quicksort", "Tiempo 1", nullptr));
        label_3->setText(QCoreApplication::translate("quicksort", "Tiempo 5", nullptr));
        label_4->setText(QCoreApplication::translate("quicksort", "Tiempo 4", nullptr));
        label_5->setText(QCoreApplication::translate("quicksort", "Tiempo 3", nullptr));
        label_6->setText(QCoreApplication::translate("quicksort", "Tiempo 2", nullptr));
        pushButton->setText(QCoreApplication::translate("quicksort", "Ejecutar", nullptr));
        label_7->setText(QCoreApplication::translate("quicksort", "Media:", nullptr));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        seleccionarArchivoPushButton->setText(QCoreApplication::translate("quicksort", "Seleccionar entrada", nullptr));
        seleccionarArchivoPushButton_2->setText(QCoreApplication::translate("quicksort", "Seleccionar salida", nullptr));
        resetear->setText(QCoreApplication::translate("quicksort", "Resetear tiempos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quicksort: public Ui_quicksort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKSORT_H
