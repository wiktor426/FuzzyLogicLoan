#ifndef FUZZYFICATOR_H
#define FUZZYFICATOR_H

#include <QObject>
#include <QMap>
#include <QPoint>
#include "inputdatarules.h"

class Fuzzyficator : public QObject
{
	Q_OBJECT
public:
	explicit Fuzzyficator(QObject *parent = 0);
	QMap<QString,double> fuzzyfy(InputDataRules *rules,double value);
	double calculateCalueFrom2Points(const QPoint &first, const QPoint &second, double value);
signals:

public slots:
};

#endif // FUZZYFICATOR_H
