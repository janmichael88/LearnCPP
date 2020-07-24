#include <iostream>
#include <string>

struct Employee
{
    short id;
    int age;
    double wage;
};
 
struct Company
{
    Employee CEO; // Employee is a struct within the Company struct
    int numberOfEmployees;
};
 
int main(){
Company myCompany;
myCompany.CEO.id = 1;
myCompany.CEO.age = 50;
myCompany.CEO.wage = 100000.0;
myCompany.numberOfEmployees = 5;

std::cout << myCompany.numberOfEmployees << "\n";
std::cout << " The size of company is " << sizeof(myCompany) << "\n";
}