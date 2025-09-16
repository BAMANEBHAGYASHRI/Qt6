#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->CounterBtn , &QPushButton::clicked , this ,  &MainWindow::increse_counter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::increse_counter()
{
    counter++;
    ui->label->setText( "counter:" + QString::number(counter));
}
