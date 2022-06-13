/*Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int input[10] = {45, 67, 89, 56, 43, 23, 90, 14, 11, 12};
    int smallest, largest;
    smallest = input[0];
    largest = input[0];

    for (int i = 0; i < 10; i++)
    {

        if (input[i] > largest)
        {
            largest = input[i];
        }

        if (input[i] < smallest)
        {
            smallest = input[i];
        }
    }

    cout << "The smallest value entered are: " << smallest << endl;
    cout << "The largest value entered are: " << largest << endl;
}