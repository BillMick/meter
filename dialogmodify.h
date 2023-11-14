#ifndef DIALOGMODIFY_H
#define DIALOGMODIFY_H

#include <QDialog>

namespace Ui {
class DialogModify;
}

class DialogModify : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModify(QWidget *parent = nullptr);
    double getNumber();
    double getIncrement();
    ~DialogModify();

private slots:
    void on_ok_clicked();

private:
    Ui::DialogModify *ui;
    double numberM = 0;
    double incrementM = 1;
};

#endif // DIALOGMODIFY_H
