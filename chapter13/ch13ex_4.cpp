/*Implement in a program the following procedure to generate prime numbers from 1 to 100. This procedure is called sieve of 
Eratosthenes.
Step 1 Fill an array num[100] with numbers from 1 to 100. 
Step 2 Starting with the second entry in the array, set all its multiples to zero.
Step 3 Proceed to the next non - zero element and set all its multiples to zero.
Step 4 Repeat Step 3 till you have set up the multiples of all the non-zero elements to zero.
Step 5 At the conclusion of Step 4, all the non - zero entries left in the array would be prime numbers so print out these numbers.*/

#include <iostream>
using namespace std;

int main()
{
    int num[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                    31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58,
                    59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
                    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};

    for (int i = 1; i < 100; i++)
    {
        if (num[i] == 0)
        {
            continue;
        }
        for (int j = 2 * i + 1; j < 100; j += num[i])
        {
            num[j] = 0;
        }

        cout << num[i] << endl;
    }
}
