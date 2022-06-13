/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.*/

#include <iostream>
using namespace std;

int main() 
{    
    int num, original, digit, rev =0;
    cout << "Enter a five digit number: ";
    cin >> num;
    original =num;


    for(int i=0; i<5; i++)
    {
    digit = num%10; 
    rev = rev*10 + digit; 
    num=num/10;
    }

    cout<<"\nReverse of number is "<<rev<< endl;

    if(rev == original){
        cout<<"The number is a palindrome!";
    }
    else{
        cout<<"The number is not a palindrome!";
    }
    return 0;
}
