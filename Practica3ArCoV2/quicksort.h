#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <QWidget>

using namespace std;


namespace Ui {
class Quicksort;
}




class Quicksort
{

    Q_OBJECT

    public:
        explicit Quicksort(QWidget *parent = 0);
        ~Quicksort();

    private slots:



    private:
        Ui::Quicksort *ui;

};

#endif // QUICKSORT_H
