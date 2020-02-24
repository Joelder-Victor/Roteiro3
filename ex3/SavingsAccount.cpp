#include "SavingsAccount.h"

#include <iostream>
using std::cout;
using std::endl;

SavingsAccount::SavingsAccount(string name, int account, double balance, int variation, double yield)
                :Account(name,account,balance)
{
    setVariation(variation);
    setYieldRate(yield);
}

void SavingsAccount::setVariation(int variation)
{
    this->variation=variation;
}
void SavingsAccount::setYieldRate(double yield)
{
    this->yieldRate=yield;
}

int SavingsAccount::getVariation()
{
    return variation;
}
double SavingsAccount::getYieldRate()
{
    return yieldRate;
}

double SavingsAccount::savingsIncome()
{
    if(getVariation()==51)
        return (getYieldRate()*getBalance());
    if(getVariation()==1)
    {
        double yield=(getYieldRate()*0.05)+getYieldRate();
        return yield*getBalance();
    }
        
}
void SavingsAccount::print()
{
    Account::print();
    cout<<"Variation: "<<getVariation()
    <<"\nYield Rate: "<<getYieldRate()<<endl;
}