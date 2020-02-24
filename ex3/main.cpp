#include <iostream>
using std::cout;
using std::endl;

#include <ostream>
using std::ostringstream;

#include <iomanip>
using std::fixed;
using std::setprecision;

#include "IAccount.h"
#include "Account.h"
#include "SavingsAccount.h"
#include "BankCheckingAccount.h"
#include "SpecialAccount.h"

int main()
{
    cout << setprecision(2) << fixed;

    Account *ptr[3];
    Account c1("Geraldo Bulhosa", 582093621, 250000.0);
    c1.print();

    BankCheckingAccount c2("Pacheco", 5894756, 50000.0, 2500.0);
    SavingsAccount c3("Geraldo Filho", 58926888, 5.0, 51, 0.01);
    SpecialAccount c4("Maria Helena", 58922959, 850000.0, 1);
    ptr[0] = &c2;
    ptr[1] = &c3;
    ptr[2] = &c4;

    for (size_t i = 0; i < 3; i++)
        ptr[i]->print();
}