#pragma once

#include "BankCheckingAccount.h"
class SpecialAccount:public BankCheckingAccount
{
private:
    /* data */
public:
    SpecialAccount( string,int,double,double);
    void setLimit();
    double getLimit();

    void print() const;
};


