#pragma once
#include "MyForm.h"
using namespace System;
using namespace System::IO;
using namespace System::Text;
using namespace System::Windows::Forms;
DatabaseOperations crud;


ref class EnergyMeter {
    private:
    int units_consume;

public:
    virtual int getter1(int uni) {
        units_consume = uni;
        return units_consume;
    }
    virtual int getter2() {
        return units_consume;
    }


};


ref class EnergyUsageCalculator : public EnergyMeter {
public:
    double getter1 (double units, double perunitcost) override {
        double bill = units * perunitcost;
        return bill;
    }
    double getter2(double bill) override {
        double bill_taxes = bill + (bill * 0.20) + 35;
        return bill_taxes;
    }

};


ref class AlertManager : public EnergyMeter {
private:
    int tv, fr, ac, uc;
public:
    void setTV(int t) {
        tv = t;
    }
    void setAC(int a) {
        ac = a;
    }
    void setFR(int f) {
        fr = f;
    }
    void setUC(int u) {
        uc = u;
    }
    String^ alertmessage() {
        String^ message = nullptr;
        if (tv <= 3 && fr <= 2 && ac <= 2 && uc <=600) {
            message = "Your usage is satisfactory";
        }
        else {
            message = "Please reduce your usage";
        }
        return message;
    }
};

ref class ReportGenerator : public AlertManager {
private:
    double tvPowerLimit;
    double fridgePowerLimit;
    double acPowerLimit;
    int unitConsumed;
    String^ retrieve;

public:
    // Constructor removed

    // Setter methods
    void setTvPowerReport(double limit) {
        tvPowerLimit = limit;
    }

    void setFridgePowerReport(double limit) {
        fridgePowerLimit = limit;
    }

    void setAcPowerReport(double limit) {
        acPowerLimit = limit;
    }
    void setUnitsConsumed(int uc) {
        unitConsumed = uc;
    }

    // Getter methods
    String^ getTvPowerReport() {
        if (tvPowerLimit <= unitConsumed)
        {
            retrieve = "Withinlimit";
            return retrieve;
        }
        else
        {
            retrieve = "Overlimit";
            return retrieve;
        }
    }

    String^ getFridgePowerReport() {
        if (fridgePowerLimit <= unitConsumed)
        {
            retrieve = "Withinlimit";
            return retrieve;
        }
        else
        {
            retrieve = "Overlimit";
            return retrieve;
        }
    }

    String^ getAcPowerReport() {
        if (acPowerLimit <= unitConsumed)
        {
            retrieve = "Withinlimit";
            return retrieve;
        }
        else
        {
            retrieve = "Overlimit";
            return retrieve;
        }
    }

};


ref class Optimizer :public AlertManager {
public:
    int currentUsage;
    String^ suggestion;
    String^ getSuggestion() {
        if (currentUsage == 100) {
            suggestion = "High energy usage detected! Consider:\n- Turning off unused appliances\n- Adjusting thermostat settings\n- Using energy-efficient alternatives";
            return suggestion;
        }
        else
        {
            suggestion = "Great! You're using energy efficiently.\nHere are some tips to maintain efficiency:\n- Continue monitoring your usage\n- Research energy-saving habits\n";
            return suggestion;
        }
    }
};

ref class UserInterface  {
public:
    // Contains methods for implementing user interface
    void display_user_interface() {
        // Code to display user interface
    }
};

ref class Predictor : public EnergyMeter {
public:
    // Suggests user to increase or restrict their energy usage according to future trends
    void predict_energy_usage_trends() {
        // Code to predict energy usage trends
    }
};