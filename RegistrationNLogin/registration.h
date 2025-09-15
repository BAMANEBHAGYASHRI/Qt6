#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Registration;
}
QT_END_NAMESPACE

class Registration : public QMainWindow
{
    Q_OBJECT

public:
    Registration(QWidget *parent = nullptr);
    ~Registration();

signals:
    void registercompleted(const QString &email , const QString &password);

private slots:
    void  SubmitClicked();
private:
    Ui::Registration *ui;
};
#endif // REGISTRATION_H
