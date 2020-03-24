#include "sepia.h"
#include "ui_sepia.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QString>
#include <QGraphicsScene>
#include <ctime>

sepia::sepia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sepia){
    ui->setupUi(this);
}

sepia::~sepia(){
    delete ui;
}
