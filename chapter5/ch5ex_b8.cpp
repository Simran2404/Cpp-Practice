/*Write a program to receive an integer and find its octal equivalent.
(i) (Hint: To obtain octal equivalent of an integer, divide it continuously
by 8 till dividend doesn’t become zero, then write the remainders
obtained in reverse direction.)*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int digit, octal = 0;
    int num;
    cout << "Enter the number" << endl;
    cin >> num;

    vector<int> output;

    while (num != 0)
    {
        digit = num % 8;
        num = num / 8;
        output.push_back(digit);
    }

    cout << "The octal equivalent of your input is: \n";

    for (int i = output.size() - 1; i >= 0; i--)
    {
        cout << output[i];
    }
    return 0;
}
