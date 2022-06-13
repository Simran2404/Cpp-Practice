/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
to check if all the three points fall on one straight line.*/

#include <iostream>
using namespace std;

int main() 
{    
    int x1, y1, x2, y2, x3, y3, m,n;

    cout << "Enter the three points (x1, y1): ";
    cin >> x1>> y1;
    cout << "Enter the three points (x2, y2): ";
    cin >> x2>> y2;
    cout << "Enter the three points (x3, y3): ";
    cin >> x3>> y3;

    m = (y2-y1)/(x2-x1);
    n = (y3-y2)/(x3-x2);

   if (m ==n){
       cout<<"All the three points fall on one straight line!"<<endl;
   }
   else{
       cout<<"All the three points do not fall on one straight line!"<<endl;
   }
    return 0;
}