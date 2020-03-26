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
    int i;
    QFileDialog dialog(this);

    dialog.setFileMode(QFileDialog::Directory);

    this->pathEntrada = QFileDialog::getExistingDirectory(0, ("Selecciona la carpeta"), QDir::currentPath());
    QStringList listaArchivos = QDir(this->pathEntrada).entryList();
    for (i = 0; i < listaArchivos.size(); i++)
        if(listaArchivos[i].endsWith(".png") || listaArchivos[i].endsWith(".jpg"))
            this->imagenes->push_front(listaArchivos[i]);

    /*
    this->pathEntrada = QFileDialog::getOpenFileName(this, QObject::tr("Open File"), "./", QObject::tr("Images (*.png *.xpm *.jpg)"));
    QFileInfo fileInfo = QFile(this->pathEntrada);
    QString newFile= fileInfo.path()+"/" + fileInfo.completeBaseName();
    QPixmap pix(newFile);
    ui->imagenBonitaFoto->setPixmap(pix);
    */
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
        error.showMessage("Por favor, especifique el directorio de entrada.");
        error.exec();
    }else if(this->imagenes->isEmpty()){
        error.showMessage("No se encuentra ninguna imagen valida en el directorio.");
        error.exec();
    }else{
        //TODO ejecutar el algoritmo

        this->vecesEjecutado++;
    }
}
