#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCount_clicked()
{
    clikkedCount++;
    QString count = QString::number(clikkedCount);
    ui->lineCount->setText(count);
}


void MainWindow::on_btnReset_clicked()
{
    clikkedCount = 0;
    QString count = QString::number(clikkedCount);
    ui->lineCount->setText(count);
}

