/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QLineEdit *MyLineEdit1;
    QLineEdit *MyLineEdit2;
    QPushButton *MyPushButton1;
    QPushButton *MyPushButton2;
    QLabel *MyLabel;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(400, 300);
        MyLineEdit1 = new QLineEdit(MyWidget);
        MyLineEdit1->setObjectName(QStringLiteral("MyLineEdit1"));
        MyLineEdit1->setGeometry(QRect(170, 80, 113, 27));
        MyLineEdit2 = new QLineEdit(MyWidget);
        MyLineEdit2->setObjectName(QStringLiteral("MyLineEdit2"));
        MyLineEdit2->setGeometry(QRect(170, 130, 113, 27));
        MyPushButton1 = new QPushButton(MyWidget);
        MyPushButton1->setObjectName(QStringLiteral("MyPushButton1"));
        MyPushButton1->setGeometry(QRect(30, 80, 99, 27));
        MyPushButton2 = new QPushButton(MyWidget);
        MyPushButton2->setObjectName(QStringLiteral("MyPushButton2"));
        MyPushButton2->setGeometry(QRect(30, 130, 99, 27));
        MyLabel = new QLabel(MyWidget);
        MyLabel->setObjectName(QStringLiteral("MyLabel"));
        MyLabel->setGeometry(QRect(30, 26, 251, 41));

        retranslateUi(MyWidget);
        QObject::connect(MyPushButton2, SIGNAL(clicked()), MyLineEdit1, SLOT(clear()));
        QObject::connect(MyPushButton2, SIGNAL(clicked()), MyLineEdit2, SLOT(clear()));

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        MyLineEdit1->setText(QApplication::translate("MyWidget", "Source", 0));
        MyLineEdit2->setText(QApplication::translate("MyWidget", "Destination", 0));
        MyPushButton1->setText(QApplication::translate("MyWidget", "Copy", 0));
        MyPushButton2->setText(QApplication::translate("MyWidget", "Clear", 0));
        MyLabel->setText(QApplication::translate("MyWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
