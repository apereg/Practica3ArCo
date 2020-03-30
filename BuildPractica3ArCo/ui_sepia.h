/********************************************************************************
** Form generated from reading UI file 'sepia.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEPIA_H
#define UI_SEPIA_H

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

class Ui_sepia
{
public:
    QLabel *tiempo3Label;
    QTextBrowser *textBrowser;
    QLabel *tiempo5Label;
    QLineEdit *tiempo2;
    QFrame *line;
    QLabel *tiempo4Label;
    QLineEdit *media;
    QLineEdit *tiempo5;
    QLineEdit *tiempo3;
    QLabel *mediaLabel;
    QLabel *tiempo1Label;
    QLabel *tituloLabel;
    QLineEdit *tiempo1;
    QLineEdit *tiempo4;
    QLabel *tiempo2Label;
    QPushButton *ejecutarPushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QFrame *line_2;
    QPushButton *seleccionarOrigen;
    QPushButton *seleccionarDestino;
    QPushButton *seleccionarDestino_2;

    void setupUi(QWidget *sepia)
    {
        if (sepia->objectName().isEmpty())
            sepia->setObjectName(QString::fromUtf8("sepia"));
        sepia->resize(771, 623);
        sepia->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 174, 108);\n"
"background-color: rgb(157, 152, 141);"));
        tiempo3Label = new QLabel(sepia);
        tiempo3Label->setObjectName(QString::fromUtf8("tiempo3Label"));
        tiempo3Label->setGeometry(QRect(70, 260, 81, 31));
        tiempo3Label->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        textBrowser = new QTextBrowser(sepia);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 20, 1351, 71));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 11, 11);"));
        tiempo5Label = new QLabel(sepia);
        tiempo5Label->setObjectName(QString::fromUtf8("tiempo5Label"));
        tiempo5Label->setGeometry(QRect(70, 410, 81, 21));
        tiempo5Label->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        tiempo2 = new QLineEdit(sepia);
        tiempo2->setObjectName(QString::fromUtf8("tiempo2"));
        tiempo2->setGeometry(QRect(170, 190, 191, 31));
        tiempo2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo2->setReadOnly(true);
        line = new QFrame(sepia);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 90, 1361, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tiempo4Label = new QLabel(sepia);
        tiempo4Label->setObjectName(QString::fromUtf8("tiempo4Label"));
        tiempo4Label->setGeometry(QRect(70, 330, 91, 31));
        tiempo4Label->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        media = new QLineEdit(sepia);
        media->setObjectName(QString::fromUtf8("media"));
        media->setGeometry(QRect(170, 530, 191, 31));
        media->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        media->setReadOnly(true);
        tiempo5 = new QLineEdit(sepia);
        tiempo5->setObjectName(QString::fromUtf8("tiempo5"));
        tiempo5->setGeometry(QRect(170, 400, 191, 31));
        tiempo5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo5->setReadOnly(true);
        tiempo3 = new QLineEdit(sepia);
        tiempo3->setObjectName(QString::fromUtf8("tiempo3"));
        tiempo3->setGeometry(QRect(170, 260, 191, 31));
        tiempo3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo3->setReadOnly(true);
        mediaLabel = new QLabel(sepia);
        mediaLabel->setObjectName(QString::fromUtf8("mediaLabel"));
        mediaLabel->setGeometry(QRect(70, 530, 81, 31));
        mediaLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Palatino Linotype\";"));
        tiempo1Label = new QLabel(sepia);
        tiempo1Label->setObjectName(QString::fromUtf8("tiempo1Label"));
        tiempo1Label->setGeometry(QRect(70, 120, 81, 31));
        tiempo1Label->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        tituloLabel = new QLabel(sepia);
        tituloLabel->setObjectName(QString::fromUtf8("tituloLabel"));
        tituloLabel->setGeometry(QRect(60, 30, 411, 51));
        tituloLabel->setStyleSheet(QString::fromUtf8("font: 18pt \"Palatino Linotype\";\n"
"font: 75 italic 18pt \"Palatino Linotype\";"));
        tiempo1 = new QLineEdit(sepia);
        tiempo1->setObjectName(QString::fromUtf8("tiempo1"));
        tiempo1->setGeometry(QRect(170, 120, 191, 31));
        tiempo1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo1->setReadOnly(true);
        tiempo4 = new QLineEdit(sepia);
        tiempo4->setObjectName(QString::fromUtf8("tiempo4"));
        tiempo4->setGeometry(QRect(170, 330, 191, 31));
        tiempo4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(80, 80, 80);\n"
"gridline-color: rgb(66, 66, 66);\n"
""));
        tiempo4->setReadOnly(true);
        tiempo2Label = new QLabel(sepia);
        tiempo2Label->setObjectName(QString::fromUtf8("tiempo2Label"));
        tiempo2Label->setGeometry(QRect(70, 190, 81, 31));
        tiempo2Label->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";\n"
"color: rgb(6, 6, 6);"));
        ejecutarPushButton = new QPushButton(sepia);
        ejecutarPushButton->setObjectName(QString::fromUtf8("ejecutarPushButton"));
        ejecutarPushButton->setGeometry(QRect(70, 470, 291, 31));
        ejecutarPushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Palatino Linotype\";"));
        radioButton = new QRadioButton(sepia);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setEnabled(false);
        radioButton->setGeometry(QRect(490, 40, 21, 20));
        radioButton->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 11, 11);"));
        radioButton_2 = new QRadioButton(sepia);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setEnabled(false);
        radioButton_2->setGeometry(QRect(30, 40, 21, 20));
        radioButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 11, 11);"));
        line_2 = new QFrame(sepia);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(403, 120, 16, 461));
        line_2->setStyleSheet(QString::fromUtf8(""));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        seleccionarOrigen = new QPushButton(sepia);
        seleccionarOrigen->setObjectName(QString::fromUtf8("seleccionarOrigen"));
        seleccionarOrigen->setGeometry(QRect(430, 170, 281, 61));
        seleccionarOrigen->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Palatino Linotype\";"));
        seleccionarDestino = new QPushButton(sepia);
        seleccionarDestino->setObjectName(QString::fromUtf8("seleccionarDestino"));
        seleccionarDestino->setGeometry(QRect(430, 300, 281, 61));
        seleccionarDestino->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Palatino Linotype\";"));
        seleccionarDestino_2 = new QPushButton(sepia);
        seleccionarDestino_2->setObjectName(QString::fromUtf8("seleccionarDestino_2"));
        seleccionarDestino_2->setGeometry(QRect(430, 480, 281, 61));
        seleccionarDestino_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Palatino Linotype\";"));

        retranslateUi(sepia);

        QMetaObject::connectSlotsByName(sepia);
    } // setupUi

    void retranslateUi(QWidget *sepia)
    {
        sepia->setWindowTitle(QCoreApplication::translate("sepia", "Sepia", nullptr));
        tiempo3Label->setText(QCoreApplication::translate("sepia", "Tiempo 3", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("sepia", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        tiempo5Label->setText(QCoreApplication::translate("sepia", "Tiempo 5", nullptr));
        tiempo4Label->setText(QCoreApplication::translate("sepia", "Tiempo 4", nullptr));
        mediaLabel->setText(QCoreApplication::translate("sepia", "Media:", nullptr));
        tiempo1Label->setText(QCoreApplication::translate("sepia", "Tiempo 1", nullptr));
        tituloLabel->setText(QCoreApplication::translate("sepia", "  Cambio de im\303\241genes a sepia  ", nullptr));
        tiempo2Label->setText(QCoreApplication::translate("sepia", "Tiempo 2", nullptr));
        ejecutarPushButton->setText(QCoreApplication::translate("sepia", "Ejecutar", nullptr));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        seleccionarOrigen->setText(QCoreApplication::translate("sepia", "Seleccionar directorio origen", nullptr));
        seleccionarDestino->setText(QCoreApplication::translate("sepia", "Seleccionar directorio destino", nullptr));
        seleccionarDestino_2->setText(QCoreApplication::translate("sepia", "Resetear tiempos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sepia: public Ui_sepia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEPIA_H
