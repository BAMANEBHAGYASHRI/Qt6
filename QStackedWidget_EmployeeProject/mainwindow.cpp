#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include <QStackedWidget>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    stackedWidget = new QStackedWidget(this);
    log = new Login(this);

    stackedWidget->addWidget(log);
    ui->stackedWidget->addWidget(log);

    connect(ui->NextButton, &QPushButton::clicked, this, [this]() {
        qDebug() << "=> Test";
        stackedWidget->setCurrentIndex(1);
        ui->stackedWidget->setCurrentIndex(1);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
