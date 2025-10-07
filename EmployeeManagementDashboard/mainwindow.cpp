#include "mainwindow.h"
#include "emp_login.h"
#include "Employeedata.h"
#include<QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>




MainWindow::MainWindow(QWidget *parent)
{

    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);

    Stackwidget =new QStackedWidget(this);
    login = new emp_login;
    empdata = new Employeedata;

    // Add pages to stacked widget
    Stackwidget->addWidget(login);
    Stackwidget->addWidget(empdata);

    QPushButton *nextButton = new QPushButton("Next Page");
    QPushButton *prevButton = new QPushButton("Previous Page");

    // Layout
    layout->addWidget(Stackwidget);
    layout->addWidget(nextButton);
    layout->addWidget(prevButton);

    setCentralWidget(central);

    connect(nextButton, &QPushButton::clicked, this, [this]() {
        int index = Stackwidget->currentIndex();
        int count = Stackwidget->count();
        Stackwidget->setCurrentIndex((index + 1) % count);
    });

    connect(prevButton, &QPushButton::clicked, this, [this]() {
        int index = Stackwidget->currentIndex();
        int count = Stackwidget->count();
        Stackwidget->setCurrentIndex((index - 1 + count) % count);
    });

}

MainWindow::~MainWindow()
{

}
