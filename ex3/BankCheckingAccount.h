#pragma once

#include "Account.h"

class BankCheckingAccount:public Account
{
private:
    double monthSalary;
    double limit;
public:
    BankCheckingAccount(string,int,double,double);
    

    void setMonthSalary(double);
    void setLimit();

    double getMonthSalary();
    double getLimit();

    void print();
};

