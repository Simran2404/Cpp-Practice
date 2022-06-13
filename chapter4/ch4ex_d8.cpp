/*Write a program that receives month and date of birth as input and
prints the corresponding Zodiac sign based on the following table:
Sun Sign            From - To
Capricorn           December 22 - January 19
Aquarius            January 20 - February 17
Pisces              February 18 - March 19
Aries               March 20 - April 19
Taurus              April 20 - May 20
Gemini              May 21 - June 20
Cancer              June 21 - July 22
Leo                 July 23 - August 22
Virgo               August 23 - September 22
Libra               September 23 - October 22
Scorpio             October 23 - November 21
Sagittarius         November 22 - December 21 */

#include <stdio.h> 
#include<iostream>
  
int main()  
{  
    int m, day;  
    printf("Enter your birth month(1-12)\n");  
    scanf("%d", &m);  
    printf("Enter your birth day\n");  
    scanf("%d", &day);  
  
    if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )  
    {  
        printf("Your Zodiac Sign is Capricorn\n");  
    }  
    else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )  
    {  
        printf("Your Zodiac Sign is Aquarius\n");  
    }  
    else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )  
    {  
        printf("Your Zodiac Sign is Pisces\n");  
    }  
    else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )  
    {  
        printf("Your Zodiac Sign is Aries\n");  
    }  
    else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )  
    {  
        printf("Your Zodiac Sign is Taurus\n");  
    }  
    else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )  
    {  
        printf("Your Zodiac Sign is Gemini\n");  
    }  
    else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) )  
    {  
        printf("Your Zodiac Sign is Cancer\n");  
    }  
    else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )  
    {  
        printf("Your Zodiac Sign is Leo\n");  
    }  
    else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )  
    {  
        printf("Your Zodiac Sign is Virgo\n");  
    }  
    else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )  
    {  
        printf("Your Zodiac Sign is Libra\n");  
    }  
    else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )  
    {  
        printf("Your Zodiac Sign is Scorpio\n");  
    }  
    else if( (m == 11 && day >= 22) || (m == 12 && day <= 21) )  
    {  
        printf("Your Zodiac Sign is Sagittarius\n");  
    }  
    else  
    {  
        printf("Invalid Birth date entered\n");  
    }  
    return 0;  
}  











