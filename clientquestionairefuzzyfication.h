#ifndef CLIENTQUESTIONAIREFUZZYFICATION_H
#define CLIENTQUESTIONAIREFUZZYFICATION_H

#include <QObject>
#include "inputdatarules.h"

class clientQuestionaireFuzzyfication : public QObject
{
	Q_OBJECT
public:
	explicit clientQuestionaireFuzzyfication(QObject *parent = 0);
	InputDataRules *averageIncomeRules;
	InputDataRules *numOfDependantsRules;
	InputDataRules *sumOfChargesRules;
	InputDataRules *loansWithProblemsRules;
	InputDataRules *sumOfCurrentLoanChargesRules;
	InputDataRules *ageRules;

signals:

public slots:
};

#endif // CLIENTQUESTIONAIREFUZZYFICATION_H
