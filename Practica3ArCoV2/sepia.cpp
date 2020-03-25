#include "sepia.h"
#include "ui_sepia.h"

sepia::sepia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sepia){
    ui->setupUi(this);

     this->setFixedSize(QSize(1340,603));
}

sepia::~sepia(){
    delete ui;
}

/* Metodo para seleccionar la imagen a usar */
void sepia::on_seleccionarFotoPushButton_clicked(){
    QFileDialog dialog(this);

    dialog.setFileMode(QFileDialog::Directory);

    this->pathEntrada = QFileDialog::getExistingDirectory(0, ("Select Output Folder"), QDir::currentPath());
    //this->pathEntrada = QFileDialog::getOpenFileName(this, QObject::tr("Open File"), "./", QObject::tr("Images (*.png *.xpm *.jpg)"));
    QFileInfo fileInfo = QFile(this->pathEntrada);
    QString newFile= fileInfo.path()+"/" + fileInfo.completeBaseName();
    QPixmap pix(newFile);
    ui->imagenBonitaFoto->setPixmap(pix);
    //TODO resizear el pix para que quede bien dentro de la imagen
}

/* Metodo para ejecutar el algoritmo */
void sepia::on_ejecutarPushButton_clicked(){
    QErrorMessage error;
    //unsigned t0,t1;
    //double time, media;

    if(this->vecesEjecutado == 5){
        error.showMessage("El algoritmo ya se ha ejecutado el numero maximo de veces.");
        error.exec();
    }else if(this->pathEntrada.trimmed().isEmpty()){
        error.showMessage("Por favor, especifique el archivo de entrada.");
        error.exec();
    }else{
        //TODO ejecutar el algoritmo

        this->vecesEjecutado++;

    }
}
