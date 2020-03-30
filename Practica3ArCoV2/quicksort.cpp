#include "quicksort.h"
#include "ui_quicksort.h"

quicksort::quicksort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quicksort)
{
    ui->setupUi(this);
    this->vecesEjecutado = 0;
    this->setFixedSize(QSize(537,597));
}

quicksort::~quicksort(){
    delete ui;
}



void quicksort::leeNums(string path){
    ifstream ficheroEntrada (path); //Apertura del archivo en modo lectura
    int numero = 0;
    if(ficheroEntrada.is_open()){
        while (ficheroEntrada >> numero){
            this->lista.push_back(numero);
        }
    }
    ficheroEntrada.close();
}


void quicksort::quickSort(int izquierda, int derecha){
    int pivote;
    int valorPivote;
    int aux;
    int i = izquierda;
    int j = derecha;
    pivote = (izquierda + derecha)/2;
    valorPivote = this->lista[pivote];
    while(i < j) {
        while(this->lista[i] < valorPivote)
            i++;
        while(this->lista[j] > valorPivote)
            j--;
        if(i <= j) {
            aux = this->lista[j];
            this->lista[j] = this->lista[i];
            this->lista[i] = aux;
            i++;
            j--;
        }
    }
    if(izquierda < j)
        quickSort(izquierda, j);
    if(derecha > i)
        quickSort(i, derecha);
}


void quicksort::escribeNums(string path){

    ofstream ficheroSalida;

    ficheroSalida.open(path);

    //ficheroSalida << setiosflags(ios::trunc);

    for(int i = 0; i < (int) this->lista.size(); i++){
        ficheroSalida << this->lista[i];
        ficheroSalida << " ";
    }
    ficheroSalida.close();
}


void quicksort::on_seleccionarArchivoPushButton_clicked(){

    this->pathEntrada = QFileDialog::getOpenFileName(this,
    tr("Open File"), "/home", tr("Text Files (*.txt)"));

}

void quicksort::on_seleccionarArchivoPushButton_2_clicked(){

    this->pathSalida = QFileDialog::getOpenFileName(this,
    tr("Open File"), QDir::currentPath(), tr("Text Files (*.txt)"));

}

void quicksort::on_pushButton_clicked(){
    QErrorMessage error;
    unsigned t0,t1;
    double time, media;

    if(this->vecesEjecutado == 5){
        error.showMessage("El algoritmo ya se ha ejecutado el numero maximo de veces.");
        error.exec();
    }else if(this->pathEntrada.trimmed().isEmpty()){
        error.showMessage("Por favor, especifique el archivo de entrada.");
        error.exec();
    }else if(this->pathSalida.trimmed().isEmpty()){
        error.showMessage("Por favor, especifique el archivo de salida.");
        error.exec();
    }else{

        this->lista.clear();

        this->leeNums(this->pathEntrada.toStdString());

        t0 = clock();

        quickSort(0, (int) lista.size()-1);

        t1 = clock();

        time = (double(t1-t0)/(CLOCKS_PER_SEC));

        time *= 1000;

        switch(this->vecesEjecutado){
            case 0:
                this->tiempos.push_back(time);
                ui->tiempo1->setText(QString::number(time) + " milisegundos.");
                break;
            case 1:
                this->tiempos.push_back(time);
                ui->tiempo2->setText(QString::number(time)+ " milisegundos.");
                break;
            case 2:
                this->tiempos.push_back(time);
                ui->tiempo3->setText(QString::number(time)+ " milisegundos.");
                break;
            case 3:
                this->tiempos.push_back(time);
                ui->tiempo4->setText(QString::number(time)+ " milisegundos.");
                break;
            case 4:
                this->tiempos.push_back(time);
                ui->tiempo5->setText(QString::number(time)+ " milisegundos.");
                media = this->calcularMedia();
                ui->media->setText(QString::number(media)+ " milisegundos.");
                break;
        }

        this->vecesEjecutado++;

        this->escribeNums(this->pathSalida.toStdString());
    }
}

double quicksort::calcularMedia(){
    double suma = 0;
    int i;
    for(i = 0; i < (int) this->tiempos.size(); i++)
        suma += this->tiempos[i];
    return suma/this->tiempos.size();
}


void quicksort::on_resetear_clicked(){

    this->vecesEjecutado = 0;

    ui->tiempo1->setText("");
    ui->tiempo2->setText("");
    ui->tiempo3->setText("");
    ui->tiempo4->setText("");
    ui->tiempo5->setText("");
    ui->media->setText("");

    this->tiempos.clear();

}
