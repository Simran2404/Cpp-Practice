/*If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.*/

#include <iostream>
using namespace std;

int main() 
{    
    int a,b,c;

    cout << "Enter the age of Ram: ";
    cin >> a;
    cout << "Enter the age of Shyam: ";
    cin >> b;
    cout << "Enter the age of Ajay: ";
    cin >> c;

   if (a<b && a<c){
       cout<<"Ram is the youngest!"<<endl;
   }
   else if(b<a && b<c){
       cout<<"Shyam is the youngest!"<<endl;
   }
    else{
       cout<<"Ajay is the youngest!"<<endl;
   }
    return 0;
}