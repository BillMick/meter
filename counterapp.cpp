#include "counterapp.h"
#include "ui_counterapp.h"
#include "QMessageBox"
#include "dialogmodify.h"

CounterApp::CounterApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CounterApp)
{
    ui->setupUi(this);
    ui->increment->setValue(defaultIncrementValue);
}

CounterApp::~CounterApp()
{
    delete ui;
}

void CounterApp::on_about_clicked()
{
    QMessageBox::information(this,"About Counter App","This app is used to count in steps of 'increment value' "
                                                      "that equals 1 by default.\n\nYou can redefine increment value"
                                                      " as a positive non zero value.\n\nThe default value of number "
                                                      "you're going to increment or decrement is 0.\n");
}

void CounterApp::on_exit_clicked()
{
    int answer = QMessageBox::question(this,"Quit App","Do want to quit?",QMessageBox::Yes,QMessageBox::No);
    if (answer == QMessageBox::Yes)
        exit(0);
}

void CounterApp::on_up_clicked()
{
    incrementV = ui->increment->value();
    number+= incrementV;
    ui->numberD->display(number);
}

void CounterApp::on_down_clicked()
{
    incrementV = ui->increment->value();
    number-= incrementV;
    if (number < 0)
    {
        QMessageBox::critical(this,"Non Authorized message","You're not allowed to decrement under 0.");
    }
    else
        ui->numberD->display(number);
}

void CounterApp::on_reset_clicked()
{
    ui->numberD->display(defaultNumberValue);
    number = 0;
}

void CounterApp::on_resetInc_clicked()
{
    ui->increment->setValue(defaultIncrementValue);
}

void CounterApp::on_modify_clicked()
{
    DialogModify fenetre;
    fenetre.setModal(true);
    fenetre.exec();
}

void CounterApp::setInc(double a)
{
    defaultIncrementValue = a;
}
void CounterApp::setNum(double a)
{
    defaultNumberValue = a;
}
