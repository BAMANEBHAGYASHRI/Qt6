#include "emp_login.h"
#include "ui_emp_login.h"
#include "mainwindow.h"
#include<QMessageBox>
#include<QTimer>
#include<QRegularExpression>
#include<QRegularExpressionMatch>
Emp_Login::Emp_Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Emp_Login)
{
    ui->setupUi(this);
   connect(ui->btn , &QPushButton::clicked, this , &Emp_Login::Mybtn);


   timer=new QTimer(this);
    connect(timer, &QTimer::timeout , this ,  &Emp_Login::Updater);
   timer->start(1000);

   //  connect(this, &Emp_Login::timerupdated , this, [=](int value){
   //     ui->timer_label->setText(QString::number(value));
   // });
}
Emp_Login::~Emp_Login()
{
    delete ui;
}

void Emp_Login::Mybtn()
{
    QString uname=ui->username->text();
    QString pass=ui->lineEdit_2->text();

    if(uname.isEmpty() || pass.isEmpty()){
        QMessageBox::warning(this , "login" ,"userid or password is not found");
        return;
    }


    QRegularExpression usernameRegex("^[a-zA-Z0-9_]{3,20}$");
    QRegularExpression passwordRegex("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{8,}$");


    if(uname.isEmpty() || pass.isEmpty()){
        QMessageBox::warning(this,"Input Error","Fields are Empty");
        return;
    }
    if(pass.isEmpty()){
        QMessageBox::warning(this,"register","enter your Confirm Password");
        return;
    }


    if (!usernameRegex.match(uname).hasMatch()) {
        QMessageBox::warning(this, "Error", "Invalid username! (only letters, numbers, underscore, min 3 chars)");
        return;
    }


    if (!passwordRegex.match(pass).hasMatch()) {
        QMessageBox::warning(this, "Error", "Password must be at least 8 chars with uppercase, lowercase, digit, special char.");
        return;
    }

    MainWindow *mainwindow=new MainWindow(this);
    connect(this, &Emp_Login::timerupdated, mainwindow, &MainWindow::updateTimerLabel);
    mainwindow->show();



    // this->hide();

    // QMessageBox::information(this, "Success", "Registration successful!");

}

void Emp_Login::Updater()
{
    // seconds++;
    // ui->timer_label->setText(QString::number(seconds));
    QTime time = QTime::currentTime();
    QString TimeText = time.toString("hh::mm::ss");
    ui->timer_label->setText(TimeText);

    emit timerupdated(TimeText);

}
