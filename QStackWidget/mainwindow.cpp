#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>
#include<QPushButton>
#include<QVBoxLayout>
#include<QLabel>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{

    QWidget *page1=new QWidget;
    QVBoxLayout *layout1=new QVBoxLayout(page1);
    layout1->addWidget(new QLabel("this is page 1"));
    QPushButton *btnNext= new QPushButton("Goto page 2");
    layout1->addWidget(btnNext);

    QWidget *page2=new QWidget;
    QVBoxLayout *layout2=new QVBoxLayout(page2);
    layout2->addWidget(new QLabel("this is page 2"));
    QPushButton *btnBack= new QPushButton("Back go to page 1");
    layout2->addWidget(btnBack);


    stackwidgets =new QStackedWidget;
    stackwidgets->addWidget(page1);
    stackwidgets->addWidget(page2);
    setCentralWidget(stackwidgets);

    connect(btnNext , &QPushButton::clicked, this , [this](){
        stackwidgets->setCurrentIndex(1);
    } );

    connect(btnBack, &QPushButton::clicked , this, [this](){
        stackwidgets->setCurrentIndex(0);
    });




    // ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    // delete ui;
}
