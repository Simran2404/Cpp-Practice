/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour
worked above 40 hours. Assume that employees do not work for
fractional part of an hour.*/

#include <iostream>
using namespace std;

int main() 
{    
    int worktime[10] = { 42, 34, 56, 76, 89, 76, 56, 45, 34, 42};
    int i=0, pay=0; 

    while(i<10)
    {
        if(worktime[i]>40)
        {
            pay = (worktime[i]-40)*12.00;
            cout << "Your overtime pay is: "<<pay<<endl;
        }
        else{
            cout <<"You did not work overtime!\n";
        }
        i++;
    }
    return 0;
}