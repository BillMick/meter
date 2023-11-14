#ifndef COUNTERAPP_H
#define COUNTERAPP_H

#include <QMainWindow>
#include "dialogmodify.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CounterApp; }
QT_END_NAMESPACE

class CounterApp : public QMainWindow
{
    Q_OBJECT

public:
    CounterApp(QWidget *parent = nullptr);
    ~CounterApp();
    void setInc(double);
    void setNum(double);

private slots:

    void on_about_clicked();

    void on_exit_clicked();

    void on_up_clicked();

    void on_down_clicked();

    void on_reset_clicked();

    void on_resetInc_clicked();

    void on_modify_clicked();

private:
    Ui::CounterApp *ui;
    double number = 0;
    double incrementV = 1;
    double defaultIncrementValue = 1;
    double defaultNumberValue = 0;
};
#endif // COUNTERAPP_H
