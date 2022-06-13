/*Wind chill factor is the felt air temperature on exposed skin due to
wind. The wind chill temperature is always lower than the air
temperature, and is calculated as per the following formula:
wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v0.16
where t is the temperature and v is the wind velocity. Write a
program to receive values of t and v and calculate wind chill factor
(wcf).*/


#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    float temp, velocity, wcf;  
    printf("Enter temperature\n");  
    scanf("%f", &temp);  
    printf("Enter velocity\n");  
    scanf("%f%f", &velocity);  
    
    wcf = 35.74 + (0.6215*temp) + ((0.4275*temp) - 35.75) * (velocity*0.16);
    printf("Wind Chill Factor is %f\n", wcf);  
    return 0;  
}  