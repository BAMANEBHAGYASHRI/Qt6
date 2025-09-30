#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QStandardItem>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    model=new QStandardItemModel(0,6,this);
    model->setHorizontalHeaderLabels({"Employee id" ,"Company" ,"Name" ,"Department", "Joining Date", "Designation"});

    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->setAlternatingRowColors(true);

     ui->comboBoxDept->addItems({"HR", "Sales", "IT", "Marketing", "Finance"});

      connect(ui->AddBtn, &QPushButton::clicked, this , &MainWindow::addEmployee);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::addEmployee()
{
    QString id=ui->lineEditid->text();
    QString company_name=ui->lineEdit_2cname->text();
    QString Emp_Name=ui->lineEdit_3ename->text();
    QString dept=ui->comboBoxDept->currentText();
    QString JDate=ui->lineEdit_5Jdate->text();
    QString des=ui->lineEdit_6designation->text();


    if(id.isEmpty() || company_name.isEmpty() || Emp_Name.isEmpty() || JDate.isEmpty() || des.isEmpty()){
        QMessageBox::warning(this, "Input Error" , "Please fill the data");
        return;
    }


    QList<QStandardItem*> row;
    row << new QStandardItem(id)
        << new QStandardItem(company_name)
        << new QStandardItem(Emp_Name)
        << new QStandardItem(dept)
        << new QStandardItem(JDate)
        << new QStandardItem(des);


    model->appendRow(row);

    ui->lineEditid->clear();
    ui->lineEdit_2cname->clear();
    ui->lineEdit_3ename->clear();
    ui->lineEdit_5Jdate->clear();
    ui->lineEdit_6designation->clear();
    ui->comboBoxDept->setCurrentIndex(0);


}



