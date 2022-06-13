/*Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking.
 Whoever is forced to pick up the last matchstick loses the game.*/

#include <iostream>
using namespace std;

int main()
{
    int num = 21;
    int user, computer;

    while (num != 1)
    {
        cout << num << endl;
        cout << "Enter your input(1, 2, 3 or 4)" << endl;
        cin >> user;

        computer = 5 - user;
        cout << computer << endl;
        num = num - user - computer;
    }

    return 0;
}