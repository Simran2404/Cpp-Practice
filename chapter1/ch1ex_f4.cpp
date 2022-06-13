/*Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.*/

#include <iostream>
using namespace std;

int main() 
{    
    int temp_fahrenheit, temp_celsius;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp_fahrenheit;
    temp_celsius = (temp_fahrenheit-32)/1.8;
    cout<<"\nYour temperature in celsius is "<<temp_celsius;
    return 0;
}