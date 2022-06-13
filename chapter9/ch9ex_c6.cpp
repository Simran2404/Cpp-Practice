/*Write a function to compute the distance between two pofloats and
use it to develop another function that will compute the area of the
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
these functions to develop a function which returns a value 1 if the
pofloat (x, y) lines inside the triangle ABC, otherwise returns a value
0.*/

#include <iostream>
#include <math.h>
using namespace std;

float distance(float a, float b, float c, float d)
{
    float dist = sqrt(pow((a - c), 2) + pow((b - d), 2));
    return dist;
}

float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float dist1 = distance(x1, y1, x2, y2);
    float dist2 = distance(x2, y2, x3, y3);
    float dist3 = distance(x1, y1, x3, y3);
    float s = (dist1 + dist2 + dist3) / 2;
    float area = sqrt(s * (s - dist1) * (s - dist2) * (s - dist3));
    return area;
}

float check(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3)
{
    float sum = area(x, y, x1, y1, x2, y2) + area(x, y, x1, y1, x3, y3) + area(x, y, x2, y2, x3, y3);
    if (sum == area(x1, y1, x2, y2, x3, y3))
    {
        cout << "The point lies within the triangle\n";
    }
    else
    {
        cout << "The point lies outside the triangle\n";
    }
}

int main()
{
    float x1, x2, x3, y1, y2, y3, x, y;

    cout << "Enter the points of the position(x, y), (x1, y1), (x2,y2), (x3,y3): " << endl;
    cin >> x >> y >> x1 >> y2 >> x2 >> y2 >> x3 >> y3;

    area(x1, y1, x2, y2, x3, y3);
    check(x, y, x1, y1, x2, y2, x3, y3);
    return 0;
}
