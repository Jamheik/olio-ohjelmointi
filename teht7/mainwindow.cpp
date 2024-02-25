#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gameTimer = new QTimer();
    ui->barPlayer1->setRange(0,100);
    ui->barPlayer1->setValue(0);
    ui->barPlayer2->setRange(0,100);
    ui->barPlayer2->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete gameTimer;
}

void MainWindow::updateProgressBar()
{
    int bar1status = player1Time*100/gameTime;
    int bar2status = player2Time*100/gameTime;

    ui->barPlayer1->setValue(bar1status);
    ui->barPlayer2->setValue(bar2status);
}

void MainWindow::updateDisplayText(QString info)
{
    ui->lblinfoText->setText(info);
}

void MainWindow::resetTime()
{
    player1Time = 0;
    player2Time = 0;

}

void MainWindow::timeout()
{
    updateProgressBar();

    if (currentPlayer == 1) {
        player1Time++;

        if (player1Time == gameTime) {
            ui->barPlayer1->setValue(100);
            gameTimer->stop();
            updateDisplayText("player 2 wins");
        }
    }

    else {
        player2Time++;

        if (player2Time == gameTime) {
            ui->barPlayer2->setValue(100);
            gameTimer->stop();
            updateDisplayText("player 1 wins");
        }
    }

}

void MainWindow::on_btn2min_clicked()
{
    gameTime = 120;
    updateDisplayText("2min time selected, press start game");
}


void MainWindow::on_btn5min_clicked()
{
    gameTime = 300;
    updateDisplayText("5min time selected, press start game");
}


void MainWindow::on_btnStartGame_clicked()
{
    resetTime();
    gameTimer->start();
    currentPlayer = 1;

    updateDisplayText("Game ongoing");

    connect(gameTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    gameTimer->start(1000);
}


void MainWindow::on_btnStopGame_clicked()
{
    resetTime();
    updateProgressBar();
    gameTimer->stop();
    updateDisplayText("Select time to play");
}

void MainWindow::on_btnSwitchP2_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_btnSwitcP1_clicked()
{
    currentPlayer = 2;
}

