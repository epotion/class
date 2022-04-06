#include <iostream>

using namespace std;

int main()
{
    int num;
    int year;
    int choice=1;
    int select;

    cout << "Play Game Now!+++++++++++++++++++++++++++++++++" << endl;
    cout << "1 to palindromic number app" << endl;
    cout << "2 to leap year app" << endl;
    cout << "0 to exit the app" << endl;
    cout << "made by greatest programmer yyh" << endl;
    cout << "Play Game Now!+++++++++++++++++++++++++++++++++" << endl;
    cin >> select;

    while()
    if(1==select)
    {
        cout << "Do you want to play palindromic number app again£¿(1 to yes, 0 to no):";
        cin >> choice;

        if(1==choice)
        {
            cout << "Input a num: ";
            cin >> num;
        }
        while(choice)
        {
            if(num/10000==num%10 && num%10000/1000==num%100/10)
                cout << "yes!" << endl;
            else
                cout << "no!" << endl;

            cout << "Do you want to play palindromic number app again£¿(1 to yes, 0 to no):";
            cin >> choice;

            if(1==choice)
            {
                cout << "Input a num: ";
                cin >> num;
            }
            else
            {
                break;
            }

        }
    }
    else if(2==select)
    {
        choice=1;
        cout << "Do you want to play leap year app again£¿(1 to yes, 0 to no):";
        cin >> choice;

        if(1==choice)
        {
            cout << "Input a year: ";
            cin >> year;
        }
        while(choice)
        {
            if(year%400==0 || (year%4==0&&year/100!=0))
                cout << "leap year!" << endl;
            else
                cout << "not a leap year! " << endl;

            cout << "Do you want to play leap year app again£¿(1 to yes, 0 to no):";
            cin >> choice;

            if(1==choice)
            {
                cout << "Input a year: " << endl;
                cin >> year;
            }
            else
            {
                break;
            }

        }

    }
    else
        return 0;
}
