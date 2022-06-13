/*Selection Sort*/

#include <iostream>
using namespace std;

int main()
{
    int num[5] = {23, 56, 12, 90, 45};
    int temp = 0;
    int smallest;

    for (int i = 0; i < 5; i++)
    {
        smallest = num[i];
        for (int j = i; j < 4; j++) //j=i+1 is feasible till j<5 because then it divides the array into sorted and unsorted categories
        {
            if (smallest > num[j + 1])
            {
                smallest = num[j + 1];
                temp = num[i];
                num[i] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}
