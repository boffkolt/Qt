#include "mywidget.h"
#include "ui_mywidget.h"


MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->MyLabel->setText("My first programm!!!\n Моя первая программа!!!");
    QObject::connect(ui->MyPushButton1,SIGNAL(clicked()),this,SLOT(MyEventHandler()));
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget:: MyEventHandler()
{
    ui->MyLineEdit2->setText(ui->MyLineEdit1->text());
}

