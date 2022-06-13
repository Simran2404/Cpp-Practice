/*Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.*/

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{    
    int num1, num2, power1, power2;

    cout << "Enter the two numbers: "<< endl;
    cin >> num1>>num2;

    power1 = pow(num1, num2);
    cout<<"When num1 has the power as num2!"<<power1<<endl;

    power2 = pow(num2, num1);
    cout<<"When num2 has the power as num1!"<<power2<<endl;

    return 0;
}