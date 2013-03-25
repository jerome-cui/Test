#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("YDNote");
    this->setDocumentMode(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
