#include"BankCheckingAccount.h"
#include <iostream>
using std::cout;
using std::endl;
BankCheckingAccount::BankCheckingAccount(string name,int account,double balance,double salary)
                    :Account(name,account,balance)
{
    setMonthSalary(salary);
    setLimit();
}
void BankCheckingAccount::setMonthSalary(double salary)
{
    this->monthSalary=salary;
}

void BankCheckingAccount::setLimit()
{
    this->limit=2*getMonthSalary();
}


double BankCheckingAccount::getMonthSalary() const
{
    return monthSalary;
}

double BankCheckingAccount::getLimit() const
{
    return limit;
}
void BankCheckingAccount::print() const
{
    Account::print();
    cout<<"Salary: "<<getMonthSalary()
    <<"\nLimit: "<<getLimit()<<endl;
}
