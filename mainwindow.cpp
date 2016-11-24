#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	clientQuestionnaire = new ClientQuestionnaire(/*ui->centralWidget*/);
	clientQuestionnaire->setupQuestionnaire();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonQuestionnaire_released()
{
	clientQuestionnaire->show();

}

void MainWindow::on_pushButtonCalculateAnShow_released()
{

}

void MainWindow::on_pushButtonInference_released()
{

}

void MainWindow::on_pushButtonEditParameters_released()
{

}
