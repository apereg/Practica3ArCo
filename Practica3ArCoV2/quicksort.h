#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <QDialog>
#include <stdlib.h>
#include <iostream>

namespace Ui {
    class quicksort;
}

class quicksort : public QDialog
{
    Q_OBJECT

public:
    explicit quicksort(QWidget *parent = 0);
    ~quicksort();

private:
    Ui::quicksort *ui;
};

#endif // QUICKSORT_H
