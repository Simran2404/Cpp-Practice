/*Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.*/

#include <iostream>
using namespace std;

int main() 
{    
    int a,b,c;
    cout << "Enter the first angle of the triangle: ";
    cin >> a;
    cout << "Enter the second angle of the triangle: ";
    cin >> b;
    cout << "Enter the third angle of the triangle: ";
    cin >> c;

   if ((a+b+c) == 180 && (a > 0 && b > 0 && c > 0)){
       cout<<"The triangle is valid!"<<endl;
   }
    else{
       cout<<"The triangle is invalid!"<<endl;
   }
    return 0;
}