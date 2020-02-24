#pragma once

#include "BankCheckingAccount.h"
class SpecialAccount:public BankCheckingAccount
{
private:
    /* data */
public:
    SpecialAccount( string,int,double,double);
    double getLimit();

    void print();
};


