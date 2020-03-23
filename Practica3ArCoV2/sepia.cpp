#include "sepia.h"
#include "ui_sepia.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Sepia::Sepia(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sepia){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

AlgoritmoFoto::AlgoritmoFoto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlgoritmoFoto)
{
    ui->setupUi(this);
}

AlgoritmoFoto::~AlgoritmoFoto()
{
    delete ui;
}
