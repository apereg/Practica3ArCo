#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "quicksort.h"
#include "sepia.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    this->setFixedSize(QSize(750,400));
}

MainWindow::~MainWindow(){
    delete ui;
}



void MainWindow::on_Algoritmo1_2_clicked(){
    quicksort *miejc = new quicksort();
     miejc->show();

}

void MainWindow::on_Algoritmo1_clicked(){
    sepia *foto = new sepia();
    foto->show();
}





