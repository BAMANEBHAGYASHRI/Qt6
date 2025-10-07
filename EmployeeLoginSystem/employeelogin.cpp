#include "employeelogin.h"
#include "ui_employeelogin.h"

EmployeeLogin::EmployeeLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EmployeeLogin)
{
    ui->setupUi(this);
}

EmployeeLogin::~EmployeeLogin()
{
    delete ui;
}
