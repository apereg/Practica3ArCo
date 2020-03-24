#ifndef SEPIA_H
#define SEPIA_H

#include <QDialog>

namespace Ui {
class sepia;
}

class sepia : public QDialog
{
    Q_OBJECT

public:
    explicit sepia(QWidget *parent = 0);
    ~sepia();


private:
    Ui::sepia *ui;
};

#endif // SEPIA_H
