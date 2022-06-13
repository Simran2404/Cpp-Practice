/*If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100.*/

#include <iostream>
using namespace std;

int main() 
{    
    int science, maths, english, korean, computerscience, percentage, agg=0;
    cout << "Enter your marks in the following subjects(out of 100): \n";
    cout << "\nScience: " ;
    cin >> science;
    cout << "\nMathematics: " ;
    cin >> maths;
    cout << "\nEnglish: " ;
    cin >> english;
    cout << "\nKorean: " ;
    cin >> korean;
    cout << "\nComputer science: " ;
    cin >> computerscience;
    agg = science+ maths+ english+ korean+ computerscience;
    percentage = (agg*100)/500;

    cout<<"\nYour aggregate marks are "<<agg;
    cout<<"\nYour overall percentage is "<<percentage<<"%";
    return 0;
}