/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, ).
Hint: r = sqrt ( x2 + y2 ) and tan-1 ( y / x )*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    int pi = 3.141592;
    cout << "enter the x coordinate:\n";
    cin >> x;
    cout << "enter the y coordinate:\n";
    cin >> y;

    int r = sqrt((x * x) + (y * y));
    int theta = atan(y / x);

    cout << "The polar coordinates are:" << r << theta << endl;
    return 0;
}
