/*Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( ).*/

#include <iostream>
#include <cmath>
using namespace std;

void func(int num1, int num2, int num3, int num4, int num5, float *avg, float *sd, float *var, float *sum)
{
    *sum = num1 + num2 + num3 + num4 + num5;
    *avg = *sum / 5.0;

    *var += pow((num1 - *avg), 2);
    *var += pow((num3 - *avg), 2);
    *var += pow((num4 - *avg), 2);
    *var += pow((num5 - *avg), 2);
    *var = *var / 5.0;
    *sd = sqrt(*var);
}

int main()
{
    int num1, num2, num3, num4, num5;
    float sum = 0, avg = 0, sd = 0, var = 0;

    cout << "Enter the 5 numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    func(num1, num2, num3, num4, num5, &avg, &sd, &var, &sum);
    cout << "The average is:" << avg << endl;
    cout << "The standard deviation is:" << sd << endl;
    cout << "The variance is:" << var << endl;
    cout << "The sum is:" << sum << endl;
    return 0;
}
