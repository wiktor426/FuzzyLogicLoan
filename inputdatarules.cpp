#include "inputdatarules.h"

InputDataRules::InputDataRules(QObject *parent) : QObject(parent)
{

}

bool InputDataRules::addNewFuzyficationRule(QString name, QList<QPoint> &points)
{
	QList<QPoint>::iterator last = points.begin();
	for(QList<QPoint>::iterator it = points.begin() + 1;it != points.end();it++){
		if(last->x() > it->x())
			return false;

		last = it;
		it++;
	}
	fuzzyficationRules.insert(name,points);
	return true;
}

QMap<QString, QList<QPoint> > InputDataRules::getFuzzyficationRules() const
{
	return fuzzyficationRules;
}
