/*If the lengths of the sides of a triangle are denoted by a, b, and c,
then area of triangle is given by
area  S(S  a)(S  b)(S  c)
where, S = ( a + b + c ) / 2. Write a function to calculate the area of
the triangle.*/

#include <iostream>
#include <cmath>
using namespace std;

void func(int side1, int side2, int side3, float s, float *area)
{
    s = (side1 + side2 + side3) / 3;
    *area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main()
{
    int side1, side2, side3;
    float area = 0, s = 0;

    cout << "Enter the side 1 of the triangle: ";
    cin >> side1;
    cout << "Enter the side 2 of the triangle: ";
    cin >> side2;
    cout << "Enter the side 3 of the triangle: ";
    cin >> side3;

    func(side1, side2, side3, s, &area);
    cout << "\nArea of the triangle is " << area;
    return 0;
}