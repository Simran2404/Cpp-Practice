/*Bubble Sort*/

#include <iostream>
using namespace std;

int main()
{
    int num[5] = {23, 56, 12, 90, 45};
    int temp = 0;

    for (int i = 0; i < 5; i++)
    {

        for (int i = 0; i < 5; i++)
        {
            if (num[i] > num[i + 1])
            {
                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}
