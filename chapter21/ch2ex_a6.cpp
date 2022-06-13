/*In order to save disk space, information about student is stored in 
an integer variable. If bit number 0 is on then it indicates Ist year
student, bit number 1 to 3 stores IInd year, IIIrd year and IVth year
student, respectively. Bits 4 to 7 store the stream Mechanical,
Chemical, Electronics and IT. Rest of the bits store room number.
Based on the given data, write a program that asks for the room
number and displays the information about the student, if its data
exists in the array. The contents of array are,
int data[ ] = { 273, 548, 786, 1096 } ;*/

#include <iostream>
using namespace std;

int main()
{
    int data[] = {273, 548, 786, 1096};
    int room;
    cout << "Enter your room number: " << endl;
    cin >> room;

    for (int j = 0; j < 4; j++)
    {
        int roomie = data[j] & 0b11111111111111111111111100000000;
        roomie = roomie >> 8;

        if (roomie == room)
        {
            if ((1 << 0) & data[j])
            {
                cout << "First year" << endl;
            }

            if ((1 << 1) & data[j])
            {
                cout << "Second year" << endl;
            }

            if ((1 << 2) & data[j])
            {
                cout << "Third year" << endl;
            }

            if ((1 << 3) & data[j])
            {
                cout << "Fourth year" << endl;
            }

            if ((1 << 4) & data[j])
            {
                cout << "Mechanical" << endl;
            }

            if ((1 << 5) & data[j])
            {
                cout << "Chemical" << endl;
            }

            if ((1 << 6) & data[j])
            {
                cout << "Electronics" << endl;
            }

            if ((1 << 7) & data[j])
            {
                cout << "Information Technology" << endl;
            }
        }
    }
}