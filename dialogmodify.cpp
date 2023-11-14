#include "dialogmodify.h"
#include "ui_dialogmodify.h"

DialogModify::DialogModify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModify)
{
    ui->setupUi(this);
}

DialogModify::~DialogModify()
{
    delete ui;
}

void DialogModify::on_ok_clicked()
{
    double d = ui->newValue->value();
    if (ui->radioNumber->isChecked())
        numberM = d;
    else
        incrementM = d;
}

double DialogModify::getNumber()
{
    return numberM;
}

double DialogModify::getIncrement()
{
    return incrementM;
}
