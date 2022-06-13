/*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.*/

#include <iostream>
using namespace std;

int main() 
{    
    int salary, da, hra, gross_salary=0;
    cout << "Enter your basic salary: ";
    cin >> salary;
    cout << "\nYou entered "<<salary;
    da = (40*salary)/100;
    hra =  (20*salary)/100;
    gross_salary = salary+da+hra; 
    cout<<"\nYour gross salary is "<<gross_salary;
    return 0;
}
