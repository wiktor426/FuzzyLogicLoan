#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QList>
#include <QPoint>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	clientQuestionnaire = new ClientQuestionnaire(/*ui->centralWidget*/);
	clientQuestionnaire->setupQuestionnaire();
	testData = new InputDataRules(this);
	testChart = new InputDataRulesChart();
	fuzzyficator = new Fuzzyficator();
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

void MainWindow::on_pushButtonShowFuzzyficationRules_released()
{
	QList<QPoint> testList;
	QPoint testPoint(-5,0);
	testList.append(testPoint);
	testPoint.setX(0);
	testPoint.setY(1);
	testList.append(testPoint);
	testPoint.setX(5);
	testPoint.setY(0);
	testList.append(testPoint);
	QList<QPoint> testList2;
	testPoint.setX(-5);
	testPoint.setY(1);
	testList2.append(testPoint);
	testPoint.setX(0);
	testPoint.setY(0);
	testList2.append(testPoint);
	testPoint.setX(5);
	testPoint.setY(1);
	testList2.append(testPoint);
	QString name("test");
	testData->addNewFuzyficationRule(name,testList);
	name = "test2";
	qDebug()<< testData->addNewFuzyficationRule(name,testList2);
	testChart->setName("Test");
	testChart->setData(testData);
	testChart->drawChart();
	qDebug()<<"4";
	testChart->show();
	QMap<QString,double> testMapFuzzy;
	qDebug()<<"5";
	testMapFuzzy = fuzzyficator->fuzzyfy(testData,6);
	qDebug()<<"6";
	if(testMapFuzzy.size()<1)
		return;
	qDebug()<<"7";
	QMap<QString, double >::const_iterator i = testMapFuzzy.begin();
	while(i != testMapFuzzy.constEnd()){
		qDebug()<<"Rule: "<<i.key()<<" membership: "<<i.value();
		++i;
	}


}
