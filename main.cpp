#include "counterapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CounterApp w;
    w.show();
    return a.exec();
}
