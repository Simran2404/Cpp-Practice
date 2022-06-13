/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.*/

/*A0
width = 1189;
height = 841;

A1
width = 841;
height = 1189/2;

A2
width = 1189/2;
height = 841/2; */


#include<stdio.h>
using namespace std;

int main(){
int width = 1189;
int height = 841;
int temp=0;

for(int i=0;i<9;i++)
{
    printf("A%d %d %d", i, width, height);
    temp = width;
    width = height;
    height = temp/2;
}
}

