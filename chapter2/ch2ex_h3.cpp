/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int side1, side2, side3, area, s;

    cout << "Enter the side 1 of the triangle: ";
    cin >> side1;
    cout << "Enter the side 2 of the triangle: ";
    cin >> side2;
    cout << "Enter the side 3 of the triangle: ";
    cin >> side3;

    s = (side1 + side2 + side3) / 3;

    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    cout << "\nArea of the triangle is " << area;
    return 0;
}