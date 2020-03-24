#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <QFileDialog>
#include <QErrorMessage>
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


private slots:
    void on_seleccionarArchivoPushButton_clicked();

    void on_seleccionarArchivoPushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::quicksort *ui;
    vector<int> lista;
    vector<double> tiempos;
    int vecesEjecutado;

    QString pathEntrada;
    QString pathSalida;

    void leeNums(string path);
    void quickSort(int izquierda, int derecha);
    void escribeNums(string path);
    double calcularMedia();

};

#endif // QUICKSORT_H
