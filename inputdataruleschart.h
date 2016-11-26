#ifndef INPUTDATARULESCHART_H
#define INPUTDATARULESCHART_H
#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include "inputdatarules.h"
#include <QGridLayout>

using namespace QtCharts;
class InputDataRulesChart : public QWidget
{
	Q_OBJECT
public:
	InputDataRulesChart(QWidget *parent = 0);
	QGridLayout *generalLayout;
	QChartView *chartView;
	QChart *chart;
	void setData(InputDataRules *value);
	void drawChart();
	void setName(const QString &value);

private:
	InputDataRules *data;
	QString name;

};

#endif // INPUTDATARULESCHART_H
