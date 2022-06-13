/*If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.*/

#include <iostream>
using namespace std;

int main() 
{    
    int cp, sp, profit, loss;

    cout << "Enter the cost price of the item: ";
    cin >> cp;
    cout << "Enter the selling price of the item: ";
    cin >> sp;

   if (sp>cp){
       profit = sp-cp;
       cout<<"You have made a profit!"<<endl;
       cout<<"Profit value: "<<profit<<endl;
   }
   else{
       loss = cp-sp;
       cout<<"You have incurred a loss!"<<endl;
       cout<<"Loss value: "<<loss<<endl;
   }
    return 0;
}