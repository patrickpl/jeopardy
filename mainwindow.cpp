#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 100
void MainWindow::on_button_100_0_clicked()
{
    this->getAnswer(100,0);
}

void MainWindow::on_button_100_1_clicked()
{
    getAnswer(100,1);
}

void MainWindow::on_button_100_2_clicked()
{
    getAnswer(100,2);
}

void MainWindow::on_button_100_3_clicked()
{
    getAnswer(100,3);
}

void MainWindow::on_button_100_4_clicked()
{
    getAnswer(100,4);
}

// 200
void MainWindow::on_button_200_0_clicked()
{
    getAnswer(200,0);
}

void MainWindow::on_button_200_1_clicked()
{
    getAnswer(200,1);
}

void MainWindow::on_button_200_2_clicked()
{
    getAnswer(200,2);
}

void MainWindow::on_button_200_3_clicked()
{
    getAnswer(200,3);
}

void MainWindow::on_button_200_4_clicked()
{
    getAnswer(200,4);
}

// 300
void MainWindow::on_button_300_0_clicked()
{
    getAnswer(300,0);
}

void MainWindow::on_button_300_1_clicked()
{
    getAnswer(300,1);
}

void MainWindow::on_button_300_2_clicked()
{
    getAnswer(300,2);
}

void MainWindow::on_button_300_3_clicked()
{
    getAnswer(300,3);
}

void MainWindow::on_button_300_4_clicked()
{
    getAnswer(300,4);
}

// 400
void MainWindow::on_button_400_0_clicked()
{
    getAnswer(400,0);
}

void MainWindow::on_button_400_1_clicked()
{
    getAnswer(400,1);
}

void MainWindow::on_button_400_2_clicked()
{
    getAnswer(400,2);
}

void MainWindow::on_button_400_3_clicked()
{
    getAnswer(400,3);
}

void MainWindow::on_button_400_4_clicked()
{
    getAnswer(400,4);
}

// 500
void MainWindow::on_button_500_0_clicked()
{
    getAnswer(500,0);
}

void MainWindow::on_button_500_1_clicked()
{
    getAnswer(500,1);
}

void MainWindow::on_button_500_2_clicked()
{
    getAnswer(500,2);
}

void MainWindow::on_button_500_3_clicked()
{
    getAnswer(500,3);
}

void MainWindow::on_button_500_4_clicked()
{
    getAnswer(500,4);
}

void MainWindow::getAnswer(int value, int category) {
    QString valueString = QString::number(value);
    QString categoryString = QString::number(category);

    // Game NewGame;
    // NewGame.getAnswer(value, category);
    ui->label_answer->setText("foobar:" + valueString + ", " + categoryString);
    ui->stackedWidget->setCurrentWidget(ui->page_answer);
}
