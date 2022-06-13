#include <iostream>
using namespace std;

int main()
{
    int n[6] = {8, 3, 5, 1, 4, 2};

    int temp;
    int key;
    int index_to_insert, index_to_extract;

    for (int i = 0; i < 5; i++)
    {
        index_to_extract = i + 1;
        int j;
        for (j = i; j >= 0; j--)
        {
            temp = n[index_to_extract];
            if (temp > n[j])
            {
                break;
            }
        }

        key = n[index_to_extract];
        index_to_insert = j + 1;

        for (int k = index_to_extract; k > index_to_insert; k--)
        {
            n[k] = n[k - 1];
        }

        n[index_to_insert] = key;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << n[i] << " ";
    }
}
