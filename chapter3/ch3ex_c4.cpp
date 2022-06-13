/*According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard. 
Write a program to find out what is the day on 1st January of this year.*/

#include <stdio.h >  
int main()  
{  
    int ref_year = 1900;
    int diff, year, leap = 0, total_days = 0, day = 0;  
  
    printf("Enter a year between 1900 and 2099\n");  
    scanf("%d", &year);  
  
    diff = year - ref_year;  

    while(ref_year < year)  
    {  
        if(((year%4 == 0) && (year%100 != 0 ))|| year%400 == 0)  
            {  
                leap++;  
            }  
        ref_year++;  
    }  
  
    total_days = (diff - leap) * 365 + leap * 366;  
    day = total_days % 7;  
  
    printf("\nThe day on 01 January %d was ", year);  
    switch(day)  
    {  
        case 0: printf("Monday.\n");  
                break;  
        case 1: printf("Tuesday.\n");  
                break;  
        case 2: printf("Wednesday.\n");  
                break;  
        case 3: printf("Thursday.\n");  
                break;  
        case 4: printf("Friday.\n");  
                break;  
        case 5: printf("Saturday.\n");  
                break;  
        case 6: printf("Sunday.\n");  
                break;  
    }  
    return 0;  
} 