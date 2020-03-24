#include "quicksort.h"
#include "ui_quicksort.h"

quicksort::quicksort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quicksort)
{
    ui->setupUi(this);
}

quicksort::~quicksort()
{
    delete ui;
}
