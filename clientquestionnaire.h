#ifndef CLIENTQUESTIONNAIRE_H
#define CLIENTQUESTIONNAIRE_H

#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QComboBox>

class ClientQuestionnaire : public QWidget
{
    Q_OBJECT
public:
    explicit ClientQuestionnaire(QWidget *parent = 0);
    //questionaire fields:
	void setupQuestionnaire();
	QVBoxLayout *generalLayout;
    //income and job
	void setupIncomeJob();
	QVBoxLayout *vBoxIncomeJob;

	QHBoxLayout *hBoxIncome;
	QLabel *labelAverageIncome;
	QDoubleSpinBox *dSpinBoxAverageIncome;

//	QHBoxLayout *hBoxAgreement;
//	QLabel *labelAgreementType;
//	QComboBox *cBoxAgreementType;


    //obligations
	void setupObligations();
	QVBoxLayout *vBoxObligations;

	QHBoxLayout *hBoxNumOfDependents;
	QLabel *labelNumOfDependents;
	QSpinBox *spinBoxNumOfDependents;

	QHBoxLayout *hBoxSumOfCharges;
	QLabel *labelSumOfCharges;//no loans
	QDoubleSpinBox *dSpinBoxSumOfCharges;

	QHBoxLayout *hBoxLoansHistory;
	QLabel *labelLoansHistory;
//	QComboBox *cBoxLoansHistory;
	QSpinBox *spinBoxLoansWithProblems;

	QHBoxLayout *hBoxSumOfCurrentLoanCharges;
	QLabel *labelSumOfCurrentLoanCharges;
	QDoubleSpinBox *dSpinBoxSumOfCurrentLoanCharges;

    //partnership
	void setupPartnership();
	QVBoxLayout *vBoxPartnership;

	QHBoxLayout *hBoxAveragePartnershipIncome;
	QLabel *labelAveragePartnershipIncome;
	QDoubleSpinBox *dSpinBoxAveragePartnerShipIncome;

//	QHBoxLayout *hBoxSeparateProperty;
//	QLabel *labelSeparateProperty;
//	QComboBox *cBoxSeparateProperty;



    //personal:
	void setupPersonal();
	QVBoxLayout *vBoxPersonal;

	QHBoxLayout *hBoxAge;
	QSpinBox *spinBoxAge;
	QLabel *labelAge;

//	QHBoxLayout hBoxHealth;
//    QLabel labelHealth;
//	QComboBox cBoxHealth;





signals:

public slots:
};

#endif // CLIENTQUESTIONNAIRE_H
