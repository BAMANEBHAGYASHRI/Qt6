#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTableWidget>
#include<QTableWidgetItem>
#include<QHeaderView>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TableWidgetDisplay();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TableWidgetDisplay()
{
    QTableWidget *table=new QTableWidget(this);
    table->setRowCount(4);
    table->setColumnCount(4);


    QStringList hLabels;
    hLabels<<"Id"<<"Name" <<"Surname" <<"Age";
    table->setHorizontalHeaderLabels(hLabels);

    for(int i = 0; i < table->rowCount(); i++){


        for(int j = 0; j < table->columnCount(); j++)
        {
            QTableWidgetItem *item = new QTableWidgetItem;

            if(j==0){
                item->setText("Id" +QString::number(i));
            }
            else if(j==1){
                item->setText("Name" + QString::number(i));
            }
            else if(j==2){
                item->setText("Surname" + QString::number(i));
            }
            else if(j==3){
                item->setText("Age" + QString::number(i));
            }

            table->setItem(i,j,item);
        }
    }

    this->setCentralWidget(table);

    //cell item proprities
    table->setSelectionMode(QAbstractItemView::ExtendedSelection);
    table->setSelectionBehavior(QAbstractItemView::SelectColumns);
    table->setTextElideMode(Qt::ElideMiddle);


    // table proprities
    table->setShowGrid(true);
    table->setGridStyle(Qt::DotLine);
    table->setSortingEnabled(true);
    table->setCornerButtonEnabled(true);


    // header prorities
    table->horizontalHeader()->setVisible(true);
    table->horizontalHeader()->setDefaultSectionSize(150);
    table->horizontalHeader()->setStretchLastSection(false);

    table->setStyleSheet("QTableWidget{"
                         "background-color:#C0C0C0;"
                         "Selection-background-color:#282828;"
                         "}"
        );




}
