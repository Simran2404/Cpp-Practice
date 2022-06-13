/*Write a program to find the factorial value of any number entered
through the keyboard.*/

#include <iostream>
using namespace std;

int main() 
{    
    int num, fact=1; 
    cout << "Enter the number: \n";
    cin >> num;

    for(int i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial of the number is: \n"<<fact;
    return 0;
}
