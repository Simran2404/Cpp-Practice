/*Company planning to launch a new newspaper in market conducts a survey. The various parameters considered in the survey
were, the economic status (upper, middle, and lower class) the languages readers prefer (English, Hindi, Regional language) and
category of paper (daily, supplement, tabloid). Write a program, which reads data of 10 respondents through keyboard, and stores
the information in an array of integers. The bit-wise information to be stored in an integer is given below:
Bit Number Information
0  Upper class
1  Middle class
2  Lower class
3  English
4  Hindi
5  Regional Language
6  Daily
7  Supplement
8  Tabloid
At the end give the statistical data for number of persons who read English daily, number of Upper class people who read Tabloid and
number of Regional Language readers.*/

#include <iostream>
using namespace std;

int main()
{
    int x[10] = {0b101001001, 0b100000001, 0b100100001, 4, 5, 6, 7, 8, 9, 10};
    int count = 0;

    int count_upper_class_tabloid = 0;
    int count_english_daily = 0;
    int count_regional = 0;

    for (int j = 0; j < 10; j++)
    {
        int check1 = (1 | (1 << 8));
        if ((check1 & x[j]) == check1)
        {
            count_upper_class_tabloid++;
            // cout << "Upper Class people who read Tabloids" << endl;
        }

        int check2 = (1 << 3) | (1 << 6);
        if ((check2 & x[j]) == check2)
        {
            count_english_daily++;
            //cout << "English Daily" << endl;
        }
        int check3 = (1 << 5);
        if ((check3 & x[j]) == check3)
        {
            count_regional++;
            //cout << "Regional Language Readers" << endl;
        }
    }
    cout << "Upper class people who read tabloids " << count_upper_class_tabloid << endl;
    cout << "English Daily" << count_english_daily << endl;
    cout << "Regional Language Readers" << count_regional << endl;
}
