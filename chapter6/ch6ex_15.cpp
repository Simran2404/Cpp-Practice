#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        int characters_to_print = n - i;
        char c = 'A';
        for (int j = 0; j < characters_to_print; j++)
        {
            cout << c++ << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        if (i == 0) //special case because we also print 'G'
        {
            c = c - 1;
            characters_to_print = characters_to_print - 1;
        }
        c = c - 1; //we wish to start from the last alphabet at which we stopped
        for (int j = 0; j < characters_to_print; j++)
        {
            cout << c-- << " ";
        }
        cout << endl;
    }
    return 0;
}
