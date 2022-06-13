/*Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions)*/

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{    
    int cx, cy, x ,y, radius, distance;

    cout << "Enter the center points of the circle (cx, cy): "<< endl;
    cin >> cx>>cy;
    cout << "Enter the points of the position to be checked: "<< endl;
    cin >> x>> y;
    cout << "Enter the radius of the circle: "<< endl;
    cin >> radius;

    distance = sqrt(pow((x-cx),2) + pow((y-cy),2));

   if (distance>radius){
       cout<<"The point lies outside the circle!"<<endl;
   }
   else if(distance<radius){
       cout<<"The point lies inside the circle!"<<endl;
   }
   else{
       cout<<"The point lies on the circle!"<<endl;
   }
    return 0;
}