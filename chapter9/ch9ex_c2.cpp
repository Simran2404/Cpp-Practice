/*Write a function that receives marks received by a student in 3
subjects and returns the average and percentage of these marks.
Call this function from main( ) and print the results in main( ).*/

#include <iostream>
#include <cmath>
using namespace std;

void func(int num1, int num2, int num3, float *avg, float *percentage)
{
    int sum = num1 + num2 + num3;
    *avg = sum / 3.0;
    *percentage = (sum / 300.0) * 100;
}

int main()
{
    int num1, num2, num3;
    float avg = 0, percentage = 0;

    cout << "Enter the marks in the three subjects: ";
    cin >> num1 >> num2 >> num3;

    func(num1, num2, num3, &avg, &percentage);

    cout << "Average marks are: " << avg << endl;
    cout << "Percentage marks are: " << percentage << endl;
    return 0;
}
