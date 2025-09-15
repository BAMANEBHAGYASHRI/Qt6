#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // using connect();
    // connect(ui->dial  , SIGNAL(valueChanged(int)) , this , SLOT(customeslot(int)));

    TimerObj =new TimerClass;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dial_valueChanged(int value)
{
    // method-1
    // ui->label->setText(QString::number(value));
}

void MainWindow::customeslot(int value)
{
 // ui->label->setText(QString::number(value));
 //    if(value==99){
 //     disconnect(ui->dial  , SIGNAL(valueChanged(int)) , this , SLOT(customeslot(int)));
 //    }
}

