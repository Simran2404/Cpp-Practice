/*The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle.*/

#include <iostream>
using namespace std;

int main() 
{    
    int length, breadth, radius, area_circle, circumferance, area_rectangle, perimeter;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area_rectangle = length*breadth; 
    circumferance = 2*3.14*radius;
    area_circle = 3.14*radius*radius;
    perimeter = 2*(length+breadth);

    cout<<"\nArea of the rectangle is "<<area_rectangle;
    cout<<"\nArea of the circle is "<<area_circle;
    cout<<"\nPerimeter of the rectangle is "<<perimeter;
    cout<<"\nCircumferance of the circle is "<<circumferance;
    return 0;
}