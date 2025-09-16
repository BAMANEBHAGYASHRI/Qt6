#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer=new QTimer(this);
    // connect(timer, &QTimer::timeout , this, &MainWindow::updateTime);
    connect(timer,  &QTimer::timeout ,this, [this](){
        updateTime();
    });

    connect(ui->StartBtn, &QPushButton::clicked , this , &MainWindow::start);
   connect(ui->StopBtn, &QPushButton::clicked , this , &MainWindow::stop);
    QObject::connect(ui->ResetBtn, &QPushButton::clicked , this , &MainWindow::reset);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start()
{
 timer->start(1000);
}

void MainWindow::stop()
{
    timer->stop();
}

void MainWindow::reset()
{
    timer->stop();
    el=0;
    ui->label->setText("Time :00 :00");
}

void MainWindow::updateTime()
{
    el++;
    int minutes = el / 60;
    int seconds = el % 60;
    ui->label->setText(QString("Time: %1:%2")
                       .arg(minutes, 2, 10, QChar('0'))
                       .arg(seconds, 2, 10, QChar('0')));
}
