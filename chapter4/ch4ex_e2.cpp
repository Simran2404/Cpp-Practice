/*Write a program using conditional operators to determine whether
a year entered through the keyboard is a leap year or not.*/

#include <iostream>
using namespace std;

int main() 
{    
    int year;

    cout << "Enter the year: ";
    cin >> year;

   (((year%4 == 0) && (year%100 != 0 ))|| year%400 == 0) ? cout<<"leap\n" : cout<<"not leap\n";
    return 0;
}