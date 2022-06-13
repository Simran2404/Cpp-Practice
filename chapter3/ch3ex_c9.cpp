/*Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.*/

#include <iostream>
using namespace std;

int main() 
{    
    int length, breadth, radius, area_rectangle, perimeter;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area_rectangle = length*breadth; 
    perimeter = 2*(length+breadth);

    cout<<"\nArea of the rectangle is "<<area_rectangle;
    cout<<"\nPerimeter of the rectangle is "<<perimeter<< endl;

   if (area_rectangle > perimeter){
       cout<<"The area of triangle is greater than it's perimeter!"<<endl;
   }
   else{
       cout<<"The perimeter of the triangle is greater than it's area!"<<endl;
   }
    return 0;
}