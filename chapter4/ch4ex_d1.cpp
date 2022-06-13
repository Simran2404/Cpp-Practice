/*Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||.*/

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