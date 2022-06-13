/*Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int positive = 0, negative = 0, zeros = 0;
    vector<int> input;

    cout << "Enter your input" << endl;
    while (true)
    {
        int num;
        cin >> num;
        input.push_back(num);

        cout << "Do you want to continue(Y): " << endl;
        char choice = 'N';
        cin >> choice;

        if (choice != 'Y')
        {
            break;
        }
    }

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] > 0)
        {
            positive++;
        }
        else if (input[i] < 0)
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