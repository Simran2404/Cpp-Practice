/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.*/

#include <iostream>
using namespace std;

int main() 
{    
   int side1, side2, side3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);

   if(side1 == side2 && side2 == side3)
      printf("The Triangle is equilateral\n");
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The Triangle is isosceles\n");
   else
      printf("The Triangle is scalene\n");
   return 0;
}
