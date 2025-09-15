#include "login.h"

#include <QMessageBox>

Login::Login(QWidget *parent)
    : QDialog(parent), ui(new Ui::Login)
{
    ui->setupUi(this);

}

Login::~Login() {
    delete ui;
}

void Login::setdata(const QString &email, const QString &password) {
    storedEmail = email;
    storedPassword = password;
    ui->EmailEdit->setText(email);

void Login::onLoginClicked() {
    QString email = ui->emailEdit->text();
    QString pass = ui->passwordEdit->text();

    if (email == storedEmail && pass == storedPassword) {
        QMessageBox::information(this, "Success", "Login successful!");
        accept();
    } else {
        QMessageBox::warning(this, "Error", "Invalid email or password!");
    }
}
