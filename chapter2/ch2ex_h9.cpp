/*Consider a currency system in which there are notes of seven
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs.
N.*/

#include <iostream>
using namespace std;

int main() 
{    
    int money,temp = 0;
    cout << "Enter the sum of money: ";
    cin >> money;

    temp = money/100; //to obtain the number of 100 rupee notes possible 
    money = money - (temp*100); //to subtract the number of 100 rupee notes from the total 
    cout << temp << '\n'; //temp is the number of notes in a particular denomination 

    temp = money/50; 
    money = money - (temp*50);
    cout << temp  << '\n';

    temp = money/10; 
    money = money - (temp*10);
    cout << temp << '\n';

    temp = money/5; 
     money = money - (temp*5);
    cout << temp  << '\n';

    temp = money/2; 
     money = money - (temp*2);
    cout << temp << '\n';

    temp = money/1; 
    money = money - (temp*1);
    cout << temp << '\n';

    return 0;
}
