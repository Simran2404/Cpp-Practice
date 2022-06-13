/*Twenty - five numbers are entered from the keyboard into an array.The number to be searched is entered through the keyboard by the user.
Write a program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array.*/

#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int key, count = 0;

    cout << "Enter the element you wish to find out:" << endl;

    cin >> key;
    cout << "Enter the elements of the array!" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cin >> num[i];
    }
    for (int j = 1; j <= 10; j++)
    {
        if (num[j] == key)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "The number is not available in the array!" << endl;
    }
    else
    {
        cout << "The number is available " << count << " times " << endl;
    }
    return 0;
}
