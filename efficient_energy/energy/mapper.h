#pragma once
#include <string>
#include "OOPcode.h"
#include <iostream>

ref class EMmapper {
public:							//name of array of mapper class!
	static array<EnergyMeter^>^ Map_EnergyMeter(array<String^>^ rows)
	{
		array<EnergyMeter^>^ obEM = gcnew array<EnergyMeter^>(rows->Length);
		for (int i = 0; i < rows->Length; i++)
		{
			array<String^>^ temp = rows[i]->Split(',');
			obEM[i] = gcnew EnergyMeter();
			obEM[i]->getter1(Convert::ToInt32(temp[0]));
		}
		return obEM;
	}

};

ref class EMCmapper {
public:
	static array<EnergyUsageCalculator^>^ Map_EMCmapper(array<String^>^ rows) {
		array<EnergyUsageCalculator^>^ ob = gcnew array<EnergyUsageCalculator^>(rows->Length);
		for (int i = 0; i < rows->Length; i++) {
			array<String^>^ temp = rows[i]->Split(',');
			double units = Convert::ToDouble(temp[0]);
			double perunitcost = Convert::ToDouble(temp[1]);

			ob[i] = gcnew EnergyUsageCalculator();
			double bill = ob[i]->getter1(units, perunitcost);
			double bill_taxes = ob[i]->getter2(bill);
		}
		return ob;
	}
};

ref class ALTmapper {
public:
	static array<AlertManager^>^ Map_ALTCmapper(array<String^>^ rows) {
		array<AlertManager^>^ ob = gcnew array<AlertManager^>(rows->Length);
		for (int i = 0; i < rows->Length; i++) {
			array<String^>^ temp = rows[i]->Split(',');

			ob[i] = gcnew AlertManager();
			ob[i]->setAC( Convert::ToInt32(temp[0]));
			ob[i]->setFR(Convert::ToInt32(temp[1]));
			ob[i]->setTV(Convert::ToInt32(temp[2]));
			ob[i]->setUC(Convert::ToInt32(temp[3]));
		}
		return ob;
	}
};

ref class Repomapper {
public:
	static array<ReportGenerator^>^ Map_RPmapper(array<String^>^ rows) {
		array<ReportGenerator^>^ obR = gcnew array<ReportGenerator^>(rows->Length);

		for (int i = 0; i < rows->Length; i++) {
			array<String^>^ temp = rows[i]->Split(',');
			obR[i] = gcnew ReportGenerator();
			obR[i]->setAcPowerReport(Convert::ToDouble(temp[0]));
			obR[i]->setFridgePowerReport(Convert::ToDouble(temp[1]));
			obR[i]->setTvPowerReport(Convert::ToDouble(temp[2]));
			obR[i]->setUnitsConsumed(Convert::ToInt16(temp[3]));
			obR[i]->getAcPowerReport();
			obR[i]->getTvPowerReport();
			obR[i]->getFridgePowerReport();
		}

		return obR;
	}
};

ref class EOmapper {
public:							//name of array of mapper class!
	static array<Optimizer^>^ Map_EOmapper(array<String^>^ rows)
	{
		array<Optimizer^>^ ob = gcnew array<Optimizer^>(rows->Length);
		for (int i = 0; i < rows->Length; i++)
		{
			array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew Optimizer();
			ob[i]->currentUsage = Convert::ToInt16(temp[0]);
			ob[i]->suggestion = temp[1];
			ob[i]->getSuggestion();
		}
		return ob;
	}

};



