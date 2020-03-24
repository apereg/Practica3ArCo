#include "quicksort.h"
#include "ui_quicksort.h"

quicksort::quicksort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quicksort)
{
    ui->setupUi(this);
}

quicksort::~quicksort()
{
    delete ui;
}


void quicksort::ordenarNumeros(string pathEntrada, string pathSalida)
{

    this->leeNums(pathEntrada);
    this->quickSort(0, (int) this->lista.size() -1);
    this->escribeNums(pathSalida);

}


void quicksort::leeNums(string path)
{
    ifstream ficheroEntrada (path); //Apertura del archivo en modo lectura
    int numero = 0;
    if(ficheroEntrada.is_open()){
        while (ficheroEntrada >> numero){
            this->lista.push_back(numero);
        }
    }
    ficheroEntrada.close();
}


void quicksort::quickSort(int izquierda, int derecha)
{
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


void quicksort::escribeNums(string path)
{
    ofstream ficheroSalida(path);

    for(int i = 0; i < (int) this->lista.size(); i++){
        ficheroSalida << this->lista[i];
        ficheroSalida << " ";
    }
}

