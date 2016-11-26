#ifndef INPUTDATA_H
#define INPUTDATA_H

#include <QObject>
#include <QString>
#include <QPoint>
#include <QMap>
#include <QList>

class InputDataRules : public QObject
{
	Q_OBJECT
public:
	explicit InputDataRules(QObject *parent = 0);
	bool addNewFuzyficationRule(QString name, QList<QPoint> &points);
	QMap<QString, QList<QPoint> > getFuzzyficationRules() const;
	QMap<QString,QList<QPoint> > fuzzyficationRules;//here we store rules for fuzzyfication,
	//QString is fuzzy rule name, vector of QPoints holds next points on graph

signals:

public slots:

private:
	QString name;
	};

#endif // INPUTDATA_H
