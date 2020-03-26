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

namespace Ui {
class sepia;
}

class sepia : public QDialog
{
    Q_OBJECT

public:
    explicit sepia(QWidget *parent = 0);
    ~sepia();


private slots:
    void on_seleccionarFotoPushButton_clicked();

    void on_ejecutarPushButton_clicked();

private:
    Ui::sepia *ui;
    QString fileName;
    QString pathEntrada;
    int vecesEjecutado;
    QStringList *imagenes = new QStringList();
    //vector<int> lista;
    //vector<double> tiempos;
};

#endif // SEPIA_H
