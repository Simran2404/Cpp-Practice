/*Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol. The following table shows the range of ASCII values for various characters:
Characters              ASCII Values
A – Z                   65 – 90
a – z                   97 – 122
0 – 9                   48 – 57
special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127 */

#include <iostream>
using namespace std;

int main() 
{    
    char value;
    cout << "Enter the character: ";
    cin >> value;

   if ((65<=value) && (value<=90))
   {
       cout<<"The character you entered is an uppercase character!"<<endl;
   }
   else if((97<=value) && (value<=122))
   {
       cout<<"The character  you entered is a lowercase character!"<<endl;
   }
   else if((48<=value) && (value<=57))
   {
       cout<<"The character  you entered is a digit!"<<endl;
   }
   else if((0<=value) && (value<=47) || (58<=value) && (value<=64) || (91<=value) && (value<=96) || (123<=value) && (value<=127))
   {
       cout<<"The character  you entered is a special symbol!"<<endl;
   }
    else
   {
       cout<<"Invalid Entry!"<<endl;
   }
    return 0;
}




