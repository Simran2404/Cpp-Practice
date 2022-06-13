/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.*/

#include <iostream>
using namespace std;

int main() 
{    
    int distance, meters, feet, centimeters, inches;
    cout << "Enter the distance between the two cities(in km): ";
    cin >> distance;
    meters = distance * 1000; 
    feet =  distance * 3281;
    inches = distance * 39370;
    centimeters = distance * 100000; 
    cout<<"\nYour distance in meters is "<<meters;
    cout<<"\nYour distance in feet is "<<feet;
    cout<<"\nYour distance in inches is "<<inches;
    cout<<"\nYour distance in centimeters is "<<centimeters;
    return 0;
}