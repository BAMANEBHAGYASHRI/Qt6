#include "registration.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Registration w;
    LoginDialog l;

    QObject::connect(&w, &Registration::registercompleted, &l, &LoginDialog::setdata);

    w.show();

    if ( w.show() == QDialog::Accepted) {
        l.exec();
    }

    // w.show();
    // l.show();
    return a.exec();
}
