/*Using conditional operators determine:
(1) Whether the character entered through the keyboard is a
lower case alphabet or not.
(2) Whether a character entered through the keyboard is a special
symbol or not.*/

#include <iostream>
using namespace std;

int main() 
{    
    char value;
    cout << "Enter the character: ";
    cin >> value;

  ( (97<=value && value<=122)||((0<=value && value<=47) || (58<=value && value<=64) || (91<=value && value<=96) || (123<=value && value<=127))) ? cout<<"lowercase character!\n" : cout<< "special symbol!\n";

    return 0;
}