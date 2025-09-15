#include "logindialog.h"
#include "ui_logindialog.h"
#include<QMessageBox>
LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::setdata(const QString &email, const QString &password)
{
    storedEmail=email;
    storedPassword=password;
    ui->EmailEdit->setText(email);
}

void LoginDialog::onLogin()
{
    QString email=ui->EmailEdit->text();
    QString pass=ui->PasswordEdit->text();

    if (email == storedEmail && pass == storedPassword) {
        QMessageBox::information(this, "Success", "Login successful!");
        accept();
    } else {
        QMessageBox::warning(this, "Error", "Invalid email or password!");
    }
}
