/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonAdd;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonSub;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonMult;
    QPushButton *pushButtonC;
    QPushButton *pushButton0;
    QPushButton *pushButtonEqual;
    QPushButton *pushButtonDiv;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(304, 353);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 10, 251, 41));
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(20, 70, 41, 41));
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(90, 70, 41, 41));
        pushButton3 = new QPushButton(centralwidget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setGeometry(QRect(160, 70, 41, 41));
        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setGeometry(QRect(240, 60, 41, 41));
        pushButton4 = new QPushButton(centralwidget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setGeometry(QRect(20, 130, 41, 41));
        pushButton5 = new QPushButton(centralwidget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setGeometry(QRect(90, 130, 41, 41));
        pushButton6 = new QPushButton(centralwidget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setGeometry(QRect(160, 130, 41, 41));
        pushButtonSub = new QPushButton(centralwidget);
        pushButtonSub->setObjectName("pushButtonSub");
        pushButtonSub->setGeometry(QRect(230, 130, 41, 41));
        pushButton7 = new QPushButton(centralwidget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setGeometry(QRect(20, 190, 41, 41));
        pushButton8 = new QPushButton(centralwidget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setGeometry(QRect(90, 190, 41, 41));
        pushButton9 = new QPushButton(centralwidget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setGeometry(QRect(160, 190, 41, 41));
        pushButtonMult = new QPushButton(centralwidget);
        pushButtonMult->setObjectName("pushButtonMult");
        pushButtonMult->setGeometry(QRect(230, 190, 41, 41));
        pushButtonC = new QPushButton(centralwidget);
        pushButtonC->setObjectName("pushButtonC");
        pushButtonC->setGeometry(QRect(20, 250, 41, 41));
        pushButton0 = new QPushButton(centralwidget);
        pushButton0->setObjectName("pushButton0");
        pushButton0->setGeometry(QRect(90, 250, 41, 41));
        pushButtonEqual = new QPushButton(centralwidget);
        pushButtonEqual->setObjectName("pushButtonEqual");
        pushButtonEqual->setGeometry(QRect(160, 250, 41, 41));
        pushButtonDiv = new QPushButton(centralwidget);
        pushButtonDiv->setObjectName("pushButtonDiv");
        pushButtonDiv->setGeometry(QRect(230, 250, 41, 41));
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 304, 25));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        pushButton1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButtonSub->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButtonMult->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButtonC->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        pushButton0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButtonEqual->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        pushButtonDiv->setText(QCoreApplication::translate("Calculator", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
