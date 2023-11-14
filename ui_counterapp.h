/********************************************************************************
** Form generated from reading UI file 'counterapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTERAPP_H
#define UI_COUNTERAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CounterApp
{
public:
    QWidget *centralwidget;
    QPushButton *down;
    QPushButton *up;
    QLabel *label_2;
    QPushButton *resetInc;
    QPushButton *about;
    QPushButton *exit;
    QPushButton *reset;
    QLCDNumber *numberD;
    QDoubleSpinBox *increment;
    QPushButton *modify;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CounterApp)
    {
        if (CounterApp->objectName().isEmpty())
            CounterApp->setObjectName(QString::fromUtf8("CounterApp"));
        CounterApp->resize(280, 304);
        centralwidget = new QWidget(CounterApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        down = new QPushButton(centralwidget);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(30, 70, 75, 23));
        up = new QPushButton(centralwidget);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(170, 70, 75, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 150, 81, 21));
        resetInc = new QPushButton(centralwidget);
        resetInc->setObjectName(QString::fromUtf8("resetInc"));
        resetInc->setGeometry(QRect(150, 190, 121, 23));
        about = new QPushButton(centralwidget);
        about->setObjectName(QString::fromUtf8("about"));
        about->setGeometry(QRect(30, 240, 75, 23));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(180, 240, 75, 23));
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(100, 110, 75, 23));
        numberD = new QLCDNumber(centralwidget);
        numberD->setObjectName(QString::fromUtf8("numberD"));
        numberD->setGeometry(QRect(10, 10, 261, 41));
        numberD->setStyleSheet(QString::fromUtf8("#number\n"
"{\n"
"background-color: rgb(222, 255, 244)\n"
"}"));
        numberD->setDigitCount(12);
        increment = new QDoubleSpinBox(centralwidget);
        increment->setObjectName(QString::fromUtf8("increment"));
        increment->setGeometry(QRect(150, 150, 62, 22));
        modify = new QPushButton(centralwidget);
        modify->setObjectName(QString::fromUtf8("modify"));
        modify->setGeometry(QRect(10, 190, 121, 23));
        CounterApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CounterApp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 280, 21));
        CounterApp->setMenuBar(menubar);
        statusbar = new QStatusBar(CounterApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CounterApp->setStatusBar(statusbar);

        retranslateUi(CounterApp);

        QMetaObject::connectSlotsByName(CounterApp);
    } // setupUi

    void retranslateUi(QMainWindow *CounterApp)
    {
        CounterApp->setWindowTitle(QApplication::translate("CounterApp", "CounterApp", nullptr));
        down->setText(QApplication::translate("CounterApp", "Down", nullptr));
        up->setText(QApplication::translate("CounterApp", "Up", nullptr));
        label_2->setText(QApplication::translate("CounterApp", "Increment value", nullptr));
        resetInc->setText(QApplication::translate("CounterApp", "Reset increment value", nullptr));
        about->setText(QApplication::translate("CounterApp", "About ?", nullptr));
        exit->setText(QApplication::translate("CounterApp", "Exit", nullptr));
        reset->setText(QApplication::translate("CounterApp", "Reset", nullptr));
        modify->setText(QApplication::translate("CounterApp", "Modify default values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CounterApp: public Ui_CounterApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTERAPP_H
