/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)*/

#include <iostream>
using namespace std;

int main() 
{    
    int year;

    cout << "Enter the year: ";
    cin >> year;

   if (((year%4 == 0) && (year%100 != 0 ))|| year%400 == 0)
   {
       cout<<"The year you entered is a leap year!"<<endl;
   }
   else{
       cout<<"The year you entered is a not leap year!"<<endl;
   }
    return 0;
}