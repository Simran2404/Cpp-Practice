/*Write a program to find the absolute value of a number entered
through the keyboard.*/

#include<stdio.h>  
#include<stdlib.h>  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive or negative number\n");  
    scanf("%d", &num);  
  
    printf("Absolute Value of |%d| is %d\n", num, abs(num));  
  
    return 0;  
}  