#include "clientquestionnaire.h"

ClientQuestionnaire::ClientQuestionnaire(QWidget *parent) : QWidget(parent)
{


}

void ClientQuestionnaire::setupQuestionnaire()
{
	generalLayout = new QVBoxLayout();
	setupPersonal();
	setupIncomeJob();
	setupObligations();
	setupPartnership();
	this->setLayout(generalLayout);
}

void ClientQuestionnaire::setupIncomeJob()
{
	vBoxIncomeJob = new QVBoxLayout();
	hBoxIncome = new QHBoxLayout();
//	hBoxAgreement = new QHBoxLayout();


//	vBoxIncomeJob->addWidget(); TODO dodać linie przed i po tytule
	QLabel *title = new QLabel("Zarobki i praca: ");
	title->setStyleSheet("font-weight: bold;");
	title->setAlignment(Qt::AlignCenter);

	vBoxIncomeJob->addWidget(title);

	labelAverageIncome = new QLabel("Średni dochód: ");
	hBoxIncome->addWidget(labelAverageIncome);
	dSpinBoxAverageIncome = new QDoubleSpinBox();
	dSpinBoxAverageIncome->setValue(0.0);
	hBoxIncome->addWidget(dSpinBoxAverageIncome);

//	labelAgreementType = new QLabel("Główne źródło dochodów: ");
//	hBoxAgreement->addWidget(labelAgreementType);
//	cBoxAgreementType = new QComboBox;
//	cBoxAgreementType->addItem("Umowa o pracę");
//	cBoxAgreementType->addItem("Umowa cywilnoprawna");
//	cBoxAgreementType->addItem("Własna działalność");
//	hBoxAgreement->addWidget(cBoxAgreementType);

	vBoxIncomeJob->addLayout(hBoxIncome);
//	vBoxIncomeJob->addLayout(hBoxAgreement);
	generalLayout->addLayout(vBoxIncomeJob);
}

void ClientQuestionnaire::setupObligations()
{
	vBoxObligations = new QVBoxLayout();
	hBoxNumOfDependents = new QHBoxLayout();
	hBoxSumOfCharges = new QHBoxLayout();
	hBoxLoansHistory = new QHBoxLayout();
	hBoxSumOfCurrentLoanCharges = new QHBoxLayout();
	QLabel *title = new QLabel("Zobowiązania i obciążenia: ");
	title->setAlignment(Qt::AlignCenter);
	title->setStyleSheet("font-weight: bold;");
	vBoxObligations->addWidget(title);

	labelNumOfDependents = new QLabel("Liczba osób na utrzymaniu: ");
	hBoxNumOfDependents->addWidget(labelNumOfDependents);
	spinBoxNumOfDependents = new QSpinBox();
	spinBoxNumOfDependents->setMinimum(1);
	spinBoxNumOfDependents->setValue(1);
	hBoxNumOfDependents->addWidget(spinBoxNumOfDependents);

	labelSumOfCharges = new QLabel("Suma obciążeń, bez kredytów: ");
	hBoxSumOfCharges->addWidget(labelSumOfCharges);
	dSpinBoxSumOfCharges = new QDoubleSpinBox();
	dSpinBoxSumOfCharges->setMinimum(0);
	dSpinBoxSumOfCharges->setValue(0);
	hBoxSumOfCharges->addWidget(dSpinBoxSumOfCharges);

	labelLoansHistory = new QLabel("Historia kredytowa: ");
	hBoxLoansHistory->addWidget(labelLoansHistory);
	spinBoxLoansWithProblems = new QSpinBox();
	spinBoxLoansWithProblems->setMinimum(0);
	spinBoxLoansWithProblems->setValue(0);
//	cBoxLoansHistory = new QComboBox();
//	cBoxLoansHistory->addItem("Brak problemów ze spłatą zobowiązań");
//	cBoxLoansHistory->addItem("<=5 wpisów");
//	cBoxLoansHistory->addItem("5> wpisów");
//	hBoxLoansHistory->addWidget(cBoxLoansHistory);

	labelSumOfCurrentLoanCharges = new QLabel("Bieżące zobowiązania kredytowe: ");
	hBoxSumOfCurrentLoanCharges->addWidget(labelSumOfCurrentLoanCharges);
	dSpinBoxSumOfCurrentLoanCharges = new QDoubleSpinBox();
	dSpinBoxSumOfCurrentLoanCharges->setMinimum(0);
	dSpinBoxSumOfCurrentLoanCharges->setValue(0);
	hBoxSumOfCurrentLoanCharges->addWidget(dSpinBoxSumOfCurrentLoanCharges);

	vBoxObligations->addLayout(hBoxNumOfDependents);
	vBoxObligations->addLayout(hBoxSumOfCharges);
	vBoxObligations->addLayout(hBoxLoansHistory);
	vBoxObligations->addLayout(hBoxSumOfCurrentLoanCharges);

	generalLayout->addLayout(vBoxObligations);
}

void ClientQuestionnaire::setupPartnership()
{
	vBoxPartnership = new QVBoxLayout();
	hBoxAveragePartnershipIncome = new QHBoxLayout();
//	hBoxSeparateProperty = new QHBoxLayout();
	QLabel *title = new QLabel("Związek: ");
	title->setAlignment(Qt::AlignCenter);
	title->setStyleSheet("font-weight: bold;");
	vBoxPartnership->addWidget(title);

	labelAveragePartnershipIncome = new QLabel("Średnie dochody z partnerem/partnerką: ");
	hBoxAveragePartnershipIncome->addWidget(labelAveragePartnershipIncome);
	dSpinBoxAveragePartnerShipIncome = new QDoubleSpinBox();
	dSpinBoxAveragePartnerShipIncome->setMinimum(0);
	dSpinBoxAveragePartnerShipIncome->setValue(0);
	hBoxAveragePartnershipIncome->addWidget(dSpinBoxAveragePartnerShipIncome);

//	labelSeparateProperty = new QLabel("Rozdzielność majątkowa: ");
//	cBoxSeparateProperty = new QComboBox();
//	cBoxSeparateProperty->addItem("Tak");
//	cBoxSeparateProperty->addItem("Nie");

	vBoxPartnership->addLayout(hBoxAveragePartnershipIncome);
//	vBoxPartnership->addLayout(hBoxSeparateProperty);

	generalLayout->addLayout(vBoxPartnership);
}

void ClientQuestionnaire::setupPersonal()
{
	vBoxPersonal = new QVBoxLayout();
	hBoxAge = new QHBoxLayout();
	QLabel *title = new QLabel("Personalne: ");
	title->setAlignment(Qt::AlignCenter);
	title->setStyleSheet("font-weight: bold;");
	vBoxPersonal->addWidget(title);

	labelAge = new QLabel("Wiek: ");
	hBoxAge->addWidget(labelAge);
	spinBoxAge = new QSpinBox();
	spinBoxAge->setMinimum(0);
	spinBoxAge->setMaximum(150);
	spinBoxAge->setValue(0);
	hBoxAge->addWidget(spinBoxAge);

	vBoxPersonal->addLayout(hBoxAge);
	generalLayout->addLayout(vBoxPersonal);

}
