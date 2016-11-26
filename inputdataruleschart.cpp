#include "inputdataruleschart.h"
#include <QList>
#include <QPoint>
#include <QDebug>

InputDataRulesChart::InputDataRulesChart(QWidget *parent) : QWidget(parent)
{
	generalLayout = new QGridLayout();
	this->setLayout(generalLayout);
	chart = new QChart;
	chartView = new QChartView(chart);
	chartView->setRenderHint(QPainter::Antialiasing);
	generalLayout->addWidget(chartView);


}

void InputDataRulesChart::setData(InputDataRules *value)
{
	data = value;
}

void InputDataRulesChart::drawChart()
{
	chart->setTitle(name);
	QMap<QString, QList<QPoint> >::const_iterator i = data->fuzzyficationRules.begin();
	while (i != data->fuzzyficationRules.constEnd()) {
		QLineSeries *series = new QLineSeries();
		QList<QPoint>::const_iterator j = i.value().begin();
		series->setName(i.key());

		for(;j !=i.value().end();++j)
			series->append(*j);

		chart->addSeries(series);
		++i;
	}
	chart->createDefaultAxes();

}

void InputDataRulesChart::setName(const QString &value)
{
	name = value;
}
