#include "registration.h"
#include "logindialog.h"
#include "ui_registration.h"
#include<QRegularExpression>
#include<QRegularExpressionMatch>
#include<QMessageBox>
Registration::Registration(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Registration)
{
    ui->setupUi(this);
    connect(ui->SubmitBtn , &QPushButton::clicked , this , &Registration::SubmitClicked);

    connect(ui->LoginLabel, &QLabel::linkActivated, this, [=]() {
        this->close();
    });

    // connect(ui->LoginLabel, &QLabel::linkActivated, this, &Registration::close);
}

Registration::~Registration()
{
    delete ui;
}

void Registration::SubmitClicked()
{
    QString name=ui->NameEdit->text();
    QString email=ui->EmaiEdit->text();
    QString currentpass=ui->CurrentpassEdit->text();
    QString confirmpass=ui->ConfirmPassEdit->text();

    QRegularExpression usernameRegex("^[a-zA-Z0-9_]{3,20}$");
    QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    QRegularExpression passwordRegex("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{8,}$");


    if(name.isEmpty()){
        QMessageBox::warning(this,"register","enter your name");
        return;
    }
    if(email.isEmpty()){
        QMessageBox::warning(this,"register","enter your Email");
        return;
    }

    if(currentpass.isEmpty()){
        QMessageBox::warning(this,"register","enter your Current Password");
        return;
    }

    if(confirmpass.isEmpty()){
        QMessageBox::warning(this,"register","enter your Confirm Password");
        return;
    }


    if (!usernameRegex.match(name).hasMatch()) {
        QMessageBox::warning(this, "Error", "Invalid username! (only letters, numbers, underscore, min 3 chars)");
        return;
    }

    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Error", "Invalid email address!");
        return;
    }

    if (!passwordRegex.match(currentpass).hasMatch()) {
        QMessageBox::warning(this, "Error", "Password must be at least 8 chars with uppercase, lowercase, digit, special char.");
        return;
    }

    if (currentpass != confirmpass) {
        QMessageBox::warning(this, "Error", "Passwords do not match!");
        return;
    }
    if(!ui->checkBox->isChecked()) {
        QMessageBox::warning(this, "Error", "CheckBox Error!");
        return;
    }
    QMessageBox::information(this, "Success", "Registration successful!");
    emit registercompleted(email,currentpass);

    close();

}
