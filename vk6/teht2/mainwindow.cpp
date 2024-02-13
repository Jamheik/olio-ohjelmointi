#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
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



void MainWindow::resetLineEdits()
{
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
}


void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler(1);
}

void MainWindow::addSubMulDivClickHandler(short op)
{
    operand = op;
    state = 2;
}


void MainWindow::on_clear_clicked()
{
    resetLineEdits();
}


void MainWindow::on_enter_clicked()
{
    float num1 = number1.toFloat();
    float num2 = number2.toFloat();
    switch (operand) {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    }
    QString stringResult = QString::number(result);
    ui->result->setText(stringResult);

    state = 1;
}


void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler(2);
}


void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler(3);
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler(4);
}



void MainWindow::on_N1_clicked()
{
    numberClickedHandler(1);
}

void MainWindow::numberClickedHandler(int num)
{
    if(state == 1){
        QString currentText = ui->num1->text();
        QString stringNum = QString::number(num);
        ui->num1->setText(currentText + stringNum);
        number1 = ui->num1->text();
    }
    else if (state == 2) {
       QString currentText = ui->num2->text();
       QString stringNum = QString::number(num);
       ui->num2->setText(currentText + stringNum);
       number2 = ui->num2->text();
    }

}


void MainWindow::on_N2_clicked()
{
    numberClickedHandler(2);
}


void MainWindow::on_N3_clicked()
{
    numberClickedHandler(3);
}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler(4);
}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler(5);
}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler(6);
}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler(7);
}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler(8);
}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler(9);
}


void MainWindow::on_N0_clicked()
{
    numberClickedHandler(0);
}

