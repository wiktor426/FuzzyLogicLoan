#include "fuzzyficator.h"
#include <QDebug>

Fuzzyficator::Fuzzyficator(QObject *parent) : QObject(parent)
{

}

QMap<QString, double> Fuzzyficator::fuzzyfy(InputDataRules *rules, double value)
{
	QMap<QString, double> map;
	QMap<QString, QList<QPoint> >::const_iterator i = rules->fuzzyficationRules.begin();
	//for each rule calculate membership and insert to map
	while (i != rules->fuzzyficationRules.constEnd()) {
		if(i.value().size()<2){
			continue;
		}

		QList<QPoint>::const_iterator j = i.value().begin();
		QList<QPoint>::const_iterator last = j;
		QList<QPoint>::const_iterator leftBound = 0;
		QList<QPoint>::const_iterator rightBound = 0;
		j++;

		//searching for closest point on left and right to value
		for(;j !=i.value().end();++j){
			if(value>=last->x() && value<=j->x()){
				leftBound = last;
				rightBound = j;
				break;
			}

			last=j;
		}
		if(leftBound == 0 || rightBound == 0){
			++i;
			continue;
		}
		//using bound calculate membership to rule
		double value_to_return = calculateCalueFrom2Points(*leftBound,*rightBound,value);
		map.insert(i.key(),value_to_return);
		++i;
	}
	return map;
}

double Fuzzyficator::calculateCalueFrom2Points(const QPoint &first, const QPoint &second,double value)
{
	qDebug()<<"first.x: "<<first.x()<<" first y: "<<first.y();
	if(value == first.x())
		return first.y();
	qDebug()<<"second.x: "<<second.x()<<" second.y: "<<second.y();
	if(value == second.x())
		return second.y();
	qDebug()<<"before main return";
	double x1 = first.x();
	double x2 = second.x();
	double y1 = first.y();
	double y2 = second.y();
	double to_return= ((y2-y1)/(x2-x1))*(value-x1)+y1;
	qDebug()<<to_return;
	return to_return;
}
