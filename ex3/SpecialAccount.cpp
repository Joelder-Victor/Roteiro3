#include "SpecialAccount.h"

SpecialAccount::SpecialAccount(
     string name, int account,double balance,double salary):
    BankCheckingAccount(name,salary,account,balance)
{
    
}
double SpecialAccount::getLimit()
{
    return (4*getMonthSalary());
}
void SpecialAccount::print()
{
    BankCheckingAccount::print();
    
}