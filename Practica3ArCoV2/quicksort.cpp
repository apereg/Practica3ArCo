#include "quicksort.h"
#include "ui_quicksort.h"

Quicksort::Quicksort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quicksort)
{
    ui->setupUi(this);

}

Quicksort::~Quicksort()
{
    delete ui;
}







