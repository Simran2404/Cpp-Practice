/*Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.*/

#include <iostream>
using namespace std;

int main() 
{    
    int num1, num2, temp=0;
    cout << "Enter first number: "<< endl;
    cin >> num1;
    cout << "Enter second number: "<< endl;
    cin >> num2;
    cout << "First number: " << num1<< endl;
    cout << "Second number: " << num2<< endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"After reversing:"<<endl;
    cout << "First number: " << num1<< endl;
    cout << "Second number: " << num2<< endl;
    
    return 0;
}
