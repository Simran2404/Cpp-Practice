/*Twenty - five numbers are entered from the keyboard into an array. 
Write a program to find out how many of them are positive, how many are negative,
how many are even and how many odd.*/

#include <iostream>
using namespace std;

int main()
{
    int num[25] = {-3, 6, 65, 34, -9, 0, 0, 2, 4, 56, 43, -54, -65, 34, -67, 89, 90, -234, 80, 12, 23, 34, 45, 56};
    int temp = 0;
    int odd, even;
    int positive = 0, negative = 0, zeros = 0;

    for (int i = 0; i < 25; i++)
    {
        if (num[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (num[i] > 0)
        {
            positive++;
        }
        else if (num[i] < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }
    }

    cout << "The number of positive values entered are: " << positive << endl;
    cout << "The number of negative values entered are: " << negative << endl;
    cout << "The number of zero values entered are: " << zeros << endl;
}