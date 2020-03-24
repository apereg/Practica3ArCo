#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <QDialog>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;

namespace Ui {
    class quicksort;
}

class quicksort : public QDialog
{
    Q_OBJECT

public:
    explicit quicksort(QWidget *parent = 0);
    ~quicksort();

    void ordenarNumeros(string pathEntrada, string pathSalida);

private:
    Ui::quicksort *ui;
    vector<int> lista;

    void leeNums(string path);
    void quickSort(int izquierda, int derecha);
    void escribeNums(string path);

};

#endif // QUICKSORT_H
