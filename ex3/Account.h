#pragma once
#include <string>
using std::string;
#include <cstring>

#define MAX 100

#include "IAccount.h"

class Account :public IAccount
{
protected:
    char nameClient[MAX];
    int numberAccount;
    double balance;
    void setBalance(double);
public:
    Account(string , int, double);
    void deposit(double);
    void withdrawMoney(double);

    void setNameClient(string );
    void setNumberAccount(int);
    

    string getNameClient() const;
    int getNumberAccount() const;
    double getBalance() const;
   
    

    virtual void print() const;

    
};

