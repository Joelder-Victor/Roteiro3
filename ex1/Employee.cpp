#include <iostream>
using std::cout;

#include "Employee.h"

Employee::Employee(const string &first, const string &last, const string &ssn)
    : firstName(first), lastName(last), socialSecurityNumber(ssn)
{
}
void Employee::setFirstName(const string &first)
{
    firstName = first;
}
void Employee::setLastName( const string &last )
{
    lastName = last;
}
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}
void Employee::print() const
{
    cout<<getFirstName()<<' '<<getLastName()
        <<"\nsocial security number: "<<getSocialSecurityNumber();
}
string Employee::getFirstName() const
{
    return firstName;
}
string Employee::getLastName()const
{
    return lastName;
}
string Employee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}