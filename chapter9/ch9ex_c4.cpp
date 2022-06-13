/*Given three variables x, y, z write a function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values.*/

#include <iostream>
#include <cmath>
using namespace std;

int func(int *x, int *y, int *z)
{
    int temp = 0;

    temp = *x;
    *x = *y;
    *y = temp;

    temp = *x;
    *x = *z;
    *z = temp;
}

int main()
{
    int x = 5, y = 8, z = 10;

    func(&x, &y, &z);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}