#include "Account.h"

#include <iostream>
using std::cout;
using std::endl;

Account::Account(string name, int account, double balance)
{
    setBalance(balance);
    setNameClient(name);
    setNumberAccount(account);
}
void Account::deposit(double value)
{
    setBalance(balance+value);
}

void Account::withdrawMoney(double value)
{
    if(value <= balance)
        setBalance(balance-value);
    else
        cout<<"balance not available"<<endl;
    
}

void Account::setNameClient(string name)
{
    const char *nameValue=name.data();
    int length=name.size();
    length=(length==MAX?MAX-1:length);
    strncpy(nameClient,nameValue,length);
    nameClient[length]='\0';
}
void Account::setNumberAccount(int account)
{
    this->numberAccount=account;
}
void Account::setBalance(double balance)
{
    this->balance=balance;
}
string Account::getNameClient()
{
    return nameClient;
}
int Account::getNumberAccount()
{
    return numberAccount;
}
double Account::getBalance()
{
    return balance;
}

void Account::print() 
{
    cout<<"Name: "<<getNameClient()
    <<"\nAccount Number: "<<getNumberAccount()
    <<"\nBalance: "<<getBalance()<<endl;
}