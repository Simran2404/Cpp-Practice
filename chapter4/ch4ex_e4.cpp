/*Write a program to receive value of an angle in degrees and check
whether sum of squares of sine and cosine of this angle is equal to 1.*/

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{    
    int angle,check;

    cout << "Enter the angle: "<< endl;
    cin >> angle;

    check  = pow(sin(angle), 2) + pow(cos(angle), 2);

   if (check == 1){
       cout<<"The sum is equal to 1!"<<endl;
   }
   else{
       cout<<"The sum is not equal to 1!"<<endl;
   }
    return 0;
}