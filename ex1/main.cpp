/***
 O polimorfismo é utilizado quando atraves de uma classe pai eu consigo
acessar métodos da classe filha em tempo de execução.
Para isso eu tenho um método virtualna clase pai que será sobrescrito na classe filha.

*/

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);

int main()
{
    cout << fixed << setprecision(2);

    SalariedEmployee salariedEmployee(
        "Geraldo","Bulhosa","111-11-1111",800);

    HourlyEmployee hourlyEmployee(
        "Pacheco","Costa","222-22-2222",16.75,40);

    CommissionEmployee commissionEmployee(
        "Geraldo", "Filho", "333-33-3333", 10000, .06);

    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Germana", "Lambertini", "444-44-4444", 5000, .04, 300);

    cout<<"Employees processed individually using static binding:\n\n";

    salariedEmployee.print();
    cout<<"\neanerd $"<<salariedEmployee.earnings()<<"\n\n";

    hourlyEmployee.print();
    cout<<"\neanerd $"<<hourlyEmployee.earnings()<<"\n\n";

    commissionEmployee.print();
    cout<<"\neanerd $"<<commissionEmployee.earnings()<<"\n\n";

    basePlusCommissionEmployee.print();
    cout<<"\neanerd $"<<basePlusCommissionEmployee.earnings()<<"\n\n";

    vector<Employee *>employees(4);

    employees[0]=&salariedEmployee;
    employees[1]=&hourlyEmployee;
    employees[2]=&commissionEmployee;
    employees[3]=&basePlusCommissionEmployee;

    cout<<"Employees processed polymorphically via dynamic binding:\n\n";

    cout<<"Virtual function calls made off base-class pointers:\n\n";

    for(size_t i=0; i<employees.size();i++)
        virtualViaPointer(employees[i]);

    for (size_t i = 0; i < employees.size(); i++)
         virtualViaReference(*employees[i]);
    return 0;

}
void virtualViaPointer(const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearned $"<<baseClassPtr->earnings()<<"\n\n";
}
void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";
}
