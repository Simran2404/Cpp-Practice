/*Write a program to print the multiplication table of the number
entered by the user. The table should get displayed in the
following form:
29 * 1 = 29
29 * 2 = 58*/

#include <iostream>
#include <cmath>
using namespace std;

int fact(int n, int answer)
{
    for (int i = 1; i <= 10; i++)
    {
        answer = n * i;
        cout << n << " "
             << "*" << i << " "
                            "="
             << answer << endl;
    }
    return 0;
}

int main()
{
    int n = 7;
    int answer = 0;
    fact(n, answer);
    return 0;
}
