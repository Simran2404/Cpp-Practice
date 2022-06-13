/*Write a program to find the greatest of the three numbers entered
through the keyboard. Use conditional operators.*/

#include <iostream>
#include<stdio.h>
using namespace std;

int main() 
{    
    int a,b,c;

    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;

    (a>b && a>c)? cout<<"a" :((b>a && b>c) ? cout<<"b" : ((c>a && c>b) ? cout<<"c" : cout<<"Invalid"));
    return 0;
}