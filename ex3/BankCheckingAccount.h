#pragma once

#include "Account.h"

class BankCheckingAccount:public Account
{
protected:
    double monthSalary;
    double limit;
public:
    BankCheckingAccount(string,int,double,double);
    

    void setMonthSalary(double);
    void setLimit();

    double getMonthSalary() const;
    double getLimit() const;

    void print() const;
};

