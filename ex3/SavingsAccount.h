#pragma once

#include "Account.h"

class SavingsAccount:public Account
{
private:
    int variation;
    double yieldRate;

public:
    SavingsAccount(string,int,double,int,double);

    void setVariation(int);
    void setYieldRate(double);

    int getVariation();
    double getYieldRate();

    double savingsIncome();

    void print();
};


