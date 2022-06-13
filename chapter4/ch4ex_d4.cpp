/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of
the three sides.*/

#include <iostream>
using namespace std;

int main() 
{    
    int a,b,c, largest, sum=0;
    cout << "Enter the first side of the triangle: ";
    cin >> a;
    cout << "Enter the second side of the triangle: ";
    cin >> b;
    cout << "Enter the third side of the triangle: ";
    cin >> c;

    if (a>b && a>c){
       largest = a;
   }
   else if(b>a && b>c){
       largest = b;
   }
    else{
        largest = c;
   }
    sum= a+b+c;


   if (largest == (sum-largest)){
       cout<<"The triangle is valid!"<<endl;
   }
    else{
       cout<<"The triangle is invalid!"<<endl;
   }
    return 0;
}
