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
    int i, numImagenes = 0;
    QFileDialog dialog(this);

    dialog.setFileMode(QFileDialog::Directory);

    this->pathEntrada = QFileDialog::getExistingDirectory(0, ("Selecciona la carpeta"), QDir::currentPath());
    QStringList listaArchivos = QDir(this->pathEntrada).entryList();
    for (i = 0; i < listaArchivos.size(); i++)
        if(listaArchivos[i].endsWith(".png") || listaArchivos[i].endsWith(".jpg")){
            cout<<"Se añade "<<listaArchivos[i].toStdString()<<endl; //DEBUG
            this->imagenes[numImagenes] = listaArchivos[i];
            numImagenes++;
        }
    cout<<"El directorio tenia "<<listaArchivos.size()<<" de los cuales "<<this->imagenes.size()<< " son imagenes validas"<<endl; //DEBUG

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
    }else if(this->imagenes.size() == 0){
        error.showMessage("No se encuentra ninguna imagen valida en el directorio.");
        error.exec();
    }else{
        unsigned t0=0, t1=0;
        t0=clock();
        //TODO ejecutar el algoritmo
        int i;
        QImage imagen;
        for (i=0; i<(int)this->imagenes.size(); i++) {
            imagen = QImage(this->imagenes[i]);
        }
        t1=clock();
        this->vecesEjecutado++;
    }
}
