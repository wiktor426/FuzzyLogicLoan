#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clientquestionnaire.h"
#include "inputdatarules.h"
#include "inputdataruleschart.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
	ClientQuestionnaire *clientQuestionnaire;
	InputDataRules *testData;
	InputDataRulesChart *testChart;

private slots:
	void on_pushButtonQuestionnaire_released();

	void on_pushButtonCalculateAnShow_released();

	void on_pushButtonInference_released();

	void on_pushButtonEditParameters_released();

	void on_pushButtonShowFuzzyficationRules_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
