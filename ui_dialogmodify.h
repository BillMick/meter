/********************************************************************************
** Form generated from reading UI file 'dialogmodify.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFY_H
#define UI_DIALOGMODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogModify
{
public:
    QGroupBox *groupBox;
    QDoubleSpinBox *newValue;
    QRadioButton *radioNumber;
    QRadioButton *radioIncrement;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *ok;

    void setupUi(QDialog *DialogModify)
    {
        if (DialogModify->objectName().isEmpty())
            DialogModify->setObjectName(QString::fromUtf8("DialogModify"));
        DialogModify->resize(242, 138);
        groupBox = new QGroupBox(DialogModify);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 80));
        newValue = new QDoubleSpinBox(groupBox);
        newValue->setObjectName(QString::fromUtf8("newValue"));
        newValue->setGeometry(QRect(150, 30, 62, 22));
        radioNumber = new QRadioButton(groupBox);
        radioNumber->setObjectName(QString::fromUtf8("radioNumber"));
        radioNumber->setGeometry(QRect(10, 20, 101, 17));
        radioIncrement = new QRadioButton(groupBox);
        radioIncrement->setObjectName(QString::fromUtf8("radioIncrement"));
        radioIncrement->setGeometry(QRect(10, 50, 101, 17));
        horizontalLayoutWidget = new QWidget(DialogModify);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(13, 100, 221, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ok = new QPushButton(horizontalLayoutWidget);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout->addWidget(ok);


        retranslateUi(DialogModify);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogModify, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogModify);
    } // setupUi

    void retranslateUi(QDialog *DialogModify)
    {
        DialogModify->setWindowTitle(QApplication::translate("DialogModify", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("DialogModify", "Default values", nullptr));
        radioNumber->setText(QApplication::translate("DialogModify", "Number value", nullptr));
        radioIncrement->setText(QApplication::translate("DialogModify", "Increment value", nullptr));
        pushButton->setText(QApplication::translate("DialogModify", "Finish", nullptr));
        ok->setText(QApplication::translate("DialogModify", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogModify: public Ui_DialogModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFY_H
