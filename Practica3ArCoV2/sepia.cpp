#include "sepia.h"
#include "ui_sepia.h"

sepia::sepia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sepia){
    ui->setupUi(this);
    this->vecesEjecutado = 0;
    this->setFixedSize(QSize(1340,603));
}

sepia::~sepia(){
    delete ui;
}

/* Metodo para seleccionar la imagen a usar */
void sepia::on_seleccionarOrigen_clicked(){
    int i, numImagenes = 0;
    QFileDialog dialog(this);

    dialog.setFileMode(QFileDialog::Directory);

    this->pathEntrada = QFileDialog::getExistingDirectory(0, ("Selecciona la carpeta"), QDir::currentPath());
    QStringList listaArchivos = QDir(this->pathEntrada).entryList();
    for (i = 0; i < listaArchivos.size(); i++){
        if(listaArchivos[i].endsWith(".png") || listaArchivos[i].endsWith(".jpg") || listaArchivos[i].endsWith(".jpeg")){
            cout<<"Se añade "<<listaArchivos[i].toStdString()<<endl; //DEBUG
            this->imagenes.push_back(listaArchivos[i]);
            numImagenes++;
        }
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
    }else if(this->pathEntrada.trimmed().isEmpty()){
        error.showMessage("Por favor, especifique el directorio de salida.");
        error.exec();
    }else if(this->imagenes.size() == 0){
        error.showMessage("No se encuentra ninguna imagen valida en el directorio.");
        error.exec();
    }else{
        unsigned t0=0, t1=0;
        t0=clock();

        //TODO ejecutar el algoritmo

        int i;
        double media, time;
        QImage image;
        for (i=0; i<(int)this->imagenes.size(); i++) {
            image = QImage(this->imagenes[i]);

            /*PRUEBA ALGORITMO CAMBIO DE IMAGENES
            if (!image.isNull()){
                QSize sizeImage = image.size();
                int width = sizeImage.width(), height = sizeImage.height();

                QRgb color;
                for (int f1=0; f1<width; f1++) {
                    for (int f2=0; f2<height; f2++) {
                        color = image.pixel(f1, f2);
                        int a = (color>>24)&0xff;
                        int r = (color>>16)&0xff;
                        int g = (color>>8)&0xff;
                        int b = color&0xff;
                        int tr = (int)(0.393*r + 0.769*g + 0.189*b);
                        int tg = (int)(0.349*r + 0.686*g + 0.168*b);
                        int tb = (int)(0.272*r + 0.534*g + 0.131*b);
                        if(tr > 255){
                                  r = 255;
                        }else{
                            r = tr;
                        }

                        if(tg > 255){
                            g = 255;
                        }else{
                            g = tg;
                        }
                        if(tb > 255){
                            b = 255;
                        }else{
                            b = tb;
                        }
                        int sepia = (a<<24) | (r<<16) | (g<<8) | b;
                        image.setPixel(f1, f2, sepia);
                    }
                }
                image.save(this->pathSalida + "imagen");
            }
            */
        }

        t1=clock();
        time = (double(t1-t0)/(CLOCKS_PER_SEC));

        time *= 1000000;

        switch(this->vecesEjecutado){
            case 0:
                this->tiempos.push_back(time);
                ui->tiempo1->setText(QString::number(time) + " microsegundas.");
                break;
            case 1:
                this->tiempos.push_back(time);
                ui->tiempo2->setText(QString::number(time)+ " microsegundas.");
                break;
            case 2:
                this->tiempos.push_back(time);
                ui->tiempo3->setText(QString::number(time)+ " microsegundas.");
                break;
            case 3:
                this->tiempos.push_back(time);
                ui->tiempo4->setText(QString::number(time)+ " microsegundas.");
                break;
            case 4:
                this->tiempos.push_back(time);
                ui->tiempo5->setText(QString::number(time)+ " microsegundas.");
                media = this->calcularMedia();
                ui->media->setText(QString::number(media)+ " microsegundas.");
                break;
        }

        this->vecesEjecutado++;
    }
}

void sepia::on_seleccionarDestino_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::Directory);
    this->pathSalida = QFileDialog::getExistingDirectory(0, ("Selecciona la carpeta"), QDir::currentPath());
}

double sepia::calcularMedia()
{

    double suma = 0;
    int i;
    for(i = 0; i < (int) this->tiempos.size(); i++){
        suma += this->tiempos[i];
    }

    return suma/i+1;
}
