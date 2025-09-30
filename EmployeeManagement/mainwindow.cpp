#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QString>
#include<QTime>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this , SLOT(myFunction()));
    timer->start(1000);

    connect(ui->BtnEmployee, &QPushButton::clicked, this , &MainWindow::addEmployee);


    ui->tableWidget->setColumnCount(5);
    QStringList hLabels;
    hLabels<<"Id"<<"Company Name" <<"Employee name" <<"Joining date" <<"Designation";
    ui->tableWidget->setHorizontalHeaderLabels(hLabels);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);


 }


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myFunction()
{
    QTime time=QTime::currentTime();
    QString TimeText=time.toString("hh::mm::ss");
    ui->TimeLabel->setText(TimeText);
}

void MainWindow::addEmployee()
{


    QString id=ui->lineEdit_empid->text();
    QString cname=ui->lineEdit_2Cname->text();
    QString ename=ui->lineEdit_3EName->text();
    QString jdate=ui->lineEdit_4joingdate->text();
    QString post=ui->lineEdit_5Designation->text();


    if(id.isEmpty() || cname.isEmpty() || ename.isEmpty() || jdate.isEmpty() || post.isEmpty()){
        QMessageBox::warning(this, "Input Error" , "Please fill the data");
        return;
    }


    int row=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    ui->tableWidget->setItem(row , 0, new QTableWidgetItem(id));
    ui->tableWidget->setItem(row, 1,new QTableWidgetItem(cname));
    ui->tableWidget->setItem(row , 2 , new QTableWidgetItem(ename));
    ui->tableWidget->setItem(row, 3,new QTableWidgetItem(jdate));
    ui->tableWidget->setItem(row , 4, new QTableWidgetItem(post));






    ui->lineEdit_empid->clear();
    ui->lineEdit_2Cname->clear();
    ui->lineEdit_3EName->clear();
    ui->lineEdit_4joingdate->clear();
    ui->lineEdit_5Designation->clear();









}
