#include "SpecialAccount.h"

SpecialAccount::SpecialAccount(
     string name, int account,double balance,double salary):
    BankCheckingAccount(name,account,balance,salary)
{
    setLimit();
}
void SpecialAccount::setLimit()
{
    limit=4*getMonthSalary();
}
double SpecialAccount::getLimit()
{
    return limit;
}
void SpecialAccount::print() const
{
    BankCheckingAccount::print();

}