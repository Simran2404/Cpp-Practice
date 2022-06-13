/*Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )*/

  
#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    float l1, l2, G1, G2, D;  
    const float PI = 3.141592;  
  
    printf("Enter latitude(L1, L2)\n");  
    scanf("%f%f", &l1, &l2);  
  
    printf("Enter longitude(G1, G2)\n");  
    scanf("%f%f", &G1, &G2);  
    
    /* Converting Degrees To Radian */    
    l1 = l1 * ( PI / 180.0 );  
    l2 = l2 * ( PI / 180.0 );  
    G1 = G1 * ( PI / 180.0 );  
    G2 = G2 * ( PI / 180.0 );  
  
    D = 3963 * acos( sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(G2 - G1) );  
  
    printf("Distance in nautical miles is %f\n", D);  
  
    return 0;  
}  