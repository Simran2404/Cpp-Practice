/*Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.*/

#include <iostream>
using namespace std;

int main() 
{    
    int num;

    cout << "Enter the number: ";
    cin >> num;

   if (num%2 == 0){
       cout<<"Even number"<<endl;
   }
   else{
        cout<<"Odd number"<<endl;
   }
    return 0;
}