/*Insertion Sort*/

#include <iostream>
using namespace std;

int main()
{
    int n[6] = {8, 3, 5, 1, 4, 2};
    int temp;
    int key = 0;

    for (int i = 0; i < 6; i++)
    {
        temp = n[i];
        for (int j = i + 1; j < 6; j++)
        {
            if (n[j] < temp)
            {
                break;
            }
            else
            {
                key = n[j];
                n[j] = n[i];
                n[i] = key;
            }
        }
        cout << n[i] << " ";
    }
}