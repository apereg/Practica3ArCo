#ifndef SEPIA_H
#define SEPIA_H

#include <QDialog>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QString>
#include <QGraphicsScene>
#include <QErrorMessage>
#include <ctime>

using namespace std;

namespace Ui {
    class sepia;
}

class sepia : public QDialog{
    Q_OBJECT

    public:
        explicit sepia(QWidget *parent = 0);
        ~sepia();


    private slots:
        void on_seleccionarOrigen_clicked();
        void on_ejecutarPushButton_clicked();
        void on_seleccionarDestino_clicked();

        void on_seleccionarDestino_2_clicked();

private:
        Ui::sepia *ui;
        QString fileName;
        QString pathEntrada;
        QString pathSalida;
        int vecesEjecutado;
        vector<QString> imagenes;
        vector<QString> nombreImagenes;
        vector<int> tiempos;
        double calcularMedia();

};

#endif // SEPIA_H
