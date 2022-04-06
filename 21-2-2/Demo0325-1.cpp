/*
 * Framework Application,  MFC
 */
 #include <iostream>

 using namespace std;

 int main()
 {
     int num;
     int year;
     int choice;
     int select;
     int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
     int dayth=0;
     int month, day;
     int temp, weekth;
     int number;
     int i=0;
     int a, b, c;

     m: (3, 4, 5), (30, 40, 50), ...,

     // (1)在欢迎屏幕添加功能
     // (2)在外层while循环结构内添加一个if语句，你要实现的功能就包含在该if语句体内

     cout << "*************************************************************" << endl;
     cout << "***                                                       ***" << endl;
     cout << "                 Welcome to mystery apps World!              " << endl;
     cout << "                                                             " << endl;
     cout << "           1 to palindromic data app                         " << endl;
     cout << "           2 to Leap year Judge app                          " << endl;
     cout << "           3 to Date Judge app                               " << endl;
     cout << "           4 to prime number Judge app                       " << endl;
     cout << "           5 to odd and even number judge app                " << endl;
     cout << "           6 to Triangle Judge app                           " << endl;
     cout << "           0 to exit!                                        " << endl;
     cout << "           any questions please contact feifanyyh@163.com    " << endl;
     cout << "           made by the greatest programmer yyh in the world  " << endl;
     cout << "*************************************************************" << endl;

     cin >> select;

// 高纳德：计算机程序设计的艺术（1-n卷，高纳德dead）
     while(select)
     {
        if(1==select)
        {
            //palindromic data app
            cout << "Do you want to play palindromic data app again? 1 to yes, 0 to exit: ";
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

                cout << "Do you want to play palindromic data app again? 1 to yes, 0 to exit: ";
                cin >> choice;

                if(1==choice)
                {
                    cout << "Input a num: ";
                    cin >> num;
                }
            }
            cout << "*************************************************************" << endl;
            cout << "***                                                       ***" << endl;
            cout << "                 Welcome to mystery apps World!              " << endl;
            cout << "                                                             " << endl;
            cout << "           1 to palindromic data app                         " << endl;
            cout << "           2 to Leap year Judge app                          " << endl;
            cout << "           3 to Date Judge app                               " << endl;
            cout << "           4 to prime number Judge app                       " << endl;
            cout << "           5 to odd and even number judge app                " << endl;
            cout << "           6 to Triangle Judge app                           " << endl;
            cout << "           0 to exit!                                        " << endl;
            cout << "           any questions please contact feifanyyh@163.com    " << endl;
            cout << "           made by the greatest programmer yyh in the world  " << endl;
            cout << "*************************************************************" << endl;

            cin >> select;

        }
        else if(2==select)
        {
            //Leap year Judge app
            cout << "Do you want to play Leap year Judge app again? 1 to yes, 0 to exit: ";
            cin >> choice;

            if(1==choice)
            {
                cout << "Input a year: ";
                cin >> year;
            }

            while(choice)
            {
                if(year%400==0 ||(year%4==0&&year/100!=0))
                    cout << "Leap year!" << endl;
                else
                    cout << "not a Leap year!" << endl;

                cout << "Do you want to play Leap year Judge app again? 1 to yes, 0 to exit: ";
                cin >> choice;

                if(1==choice)
                {
                    cout << "Input a year: ";
                    cin >> year;
                }
            }

            cout << "*************************************************************" << endl;
            cout << "***                                                       ***" << endl;
            cout << "                 Welcome to mystery apps World!              " << endl;
            cout << "                                                             " << endl;
            cout << "           1 to palindromic data app                         " << endl;
            cout << "           2 to Leap year Judge app                          " << endl;
            cout << "           3 to Date Judge app                               " << endl;
            cout << "           4 to prime number Judge app                       " << endl;
            cout << "           5 to odd and even number judge app                " << endl;
            cout << "           6 to Triangle Judge app                           " << endl;
            cout << "           0 to exit!                                        " << endl;
            cout << "           any questions please contact feifanyyh@163.com    " << endl;
            cout << "           made by the greatest programmer yyh in the world  " << endl;
            cout << "*************************************************************" << endl;

            cin >> select;
        }
        else if(3==select)//Date Judge app
        {
            cout << "Do you want to play Date Judge app again? 1 to yes, 0 to exit: ";
            cin >> choice;

            if(1==choice)
            {
                cout << "Input a date: ";
                cin >> year >> month >> day;
            }

            while(choice)
            {
                if(year%400==0 ||(year%4==0&&year/100!=0))
                    days[2]=29;

                for(int i=1; i<month; i++)
                {
                    dayth+=days[i];
                }
                dayth+=day;
                cout << year << ", " << month << ", " << day << " is the " << dayth << "th day in this year" << endl;

                if(1==month||2==month)
                {
                    month+=12;
                    year--;
                }
                weekth=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7+1;
                switch(weekth)
                {
                    case 1: cout << "Monday!" << endl; break;
                    case 2: cout << "Tuesday!" << endl; break;
                    case 3: cout << "Wednesday!" << endl; break;
                    case 4: cout << "Thursday!" << endl; break;
                    case 5: cout << "Friday!" << endl; break;
                    case 6: cout << "Saturday!" << endl; break;
                    case 7: cout << "Sunday!" << endl; break;
                }

                cout << "Do you want to play Date Judge app again? 1 to yes, 0 to exit: ";
                cin >> choice;

                if(1==choice)
                {
                    cout << "Input a date: ";
                    cin >> year >> month >> day;
                }
            }

            cout << "*************************************************************" << endl;
            cout << "***                                                       ***" << endl;
            cout << "                 Welcome to mystery apps World!              " << endl;
            cout << "                                                             " << endl;
            cout << "           1 to palindromic data app                         " << endl;
            cout << "           2 to Leap year Judge app                          " << endl;
            cout << "           3 to Date Judge app                               " << endl;
            cout << "           4 to prime number Judge app                       " << endl;
            cout << "           5 to odd and even number judge app                " << endl;
            cout << "           6 to Triangle Judge app                           " << endl;
            cout << "           0 to exit!                                        " << endl;
            cout << "           any questions please contact feifanyyh@163.com    " << endl;
            cout << "           made by the greatest programmer yyh in the world  " << endl;
            cout << "*************************************************************" << endl;
            cin >> select;
        }
        else if(4==select)
        {
            //prime number judge app
            cout << "Do you want to play prime number judge app again? 1 to yes, 0 to exit: ";
            cin >> choice;

            if(1==choice)
            {
                cout << "Input a num: ";
                cin >> num;
            }
            int counter = 0;

            while(choice)
            {
                for(int i=2;i<num;i++)
                {
                    if(num%i!=0)
                        counter++;
                }

                if(counter==num-2)
                    cout << "yes!this is prime number." << endl;
                else
                    cout << "no!this is not prime number" << endl;

                cout << "Do you want to play prime number judge app again? 1 to yes, 0 to exit: ";
                cin >> choice;

                if(1==choice)
                {
                    cout << "Input a num: ";
                    cin >> num;
                }
            }
            cout << "*************************************************************" << endl;
            cout << "***                                                       ***" << endl;
            cout << "                 Welcome to mystery apps World!              " << endl;
            cout << "                                                             " << endl;
            cout << "           1 to palindromic data app                         " << endl;
            cout << "           2 to Leap year Judge app                          " << endl;
            cout << "           3 to Date Judge app                               " << endl;
            cout << "           4 to prime number Judge app                       " << endl;
            cout << "           5 to odd and even number judge app                " << endl;
            cout << "           6 to Triangle Judge app                           " << endl;
            cout << "           0 to exit!                                        " << endl;
            cout << "           any questions please contact feifanyyh@163.com    " << endl;
            cout << "           made by the greatest programmer yyh in the world  " << endl;
            cout << "*************************************************************" << endl;

            cin >> select;
        }
        else if(5==select)
        {
            //
            cout << "Do you want to play odd and even number judge app    again? 1 to yes, 0 to exit: ";
            cin >> choice;

            if(1==choice)
            {
                cout << "Input a number: ";
                cin >> number;
            }

            while(choice)
            {
                if (number %2==0)
                    cout << " it is a even" << endl;
                else
                    cout << "it is a odd" << endl;
                while (i<=number)
                {
                    if (i%2!=0)
                    {
                        cout << i;
                        i++;
                    }
                    else
                        i++;
                }
                i=0;
                cout << "Do you want to play odd and even number judge app  again? 1 to yes, 0 to exit: ";
                cin >> choice;

                if(1==choice)
                {
                    cout << "Input a number: ";
                    cin >> number;
                }
            }
            cout << "*************************************************************" << endl;
            cout << "***                                                       ***" << endl;
            cout << "                 Welcome to mystery apps World!              " << endl;
            cout << "                                                             " << endl;
            cout << "           1 to palindromic data app                         " << endl;
            cout << "           2 to Leap year Judge app                          " << endl;
            cout << "           3 to Date Judge app                               " << endl;
            cout << "           4 to prime number Judge app                       " << endl;
            cout << "           5 to odd and even number judge app                " << endl;
            cout << "           6 to Triangle Judge app                           " << endl;
            cout << "           0 to exit!                                        " << endl;
            cout << "           any questions please contact feifanyyh@163.com    " << endl;
            cout << "           made by the greatest programmer yyh in the world  " << endl;
            cout << "*************************************************************" << endl;

            cin >> select;
        }
        else if(6==select)
        {
            // Triangle Judge app
            cout << "Do you want to play Triangle Judge app again? 1 to yes, 0 to exit: ";
            cin >> choice;

            if(1==choice)
            {
                cout << "Input three sides of a triangle: ";
                cin >> a >> b >> c;
            }

            while(choice)
            {
                if(a>0 && b>0 && c>0)
                {
                    if(a+b>c && a+c>b && b+c>a)
                    {
                        cout << "sides: " << a << ", " << b << "and " << c << " can construct a triangle!" << endl;
                    }
                    else
                    {
                        cout << "sides: " << a << ", " << b << "and " << c << " can't construct a triangle!" << endl;
                    }
                }
                else
                {
                    cout << "sides: " << a << ", " << b << "and " << c << " can't construct a triangle!" << endl;
                }

                cout << "Do you want to play Triangle Judge app again? 1 to yes, 0 to exit: ";
                cin >> choice;

                if(1==choice)
                {
                    cout << "Input three sides of a triangle: ";
                    cin >> a >> b >> c;
                }
            }
            cout << "*************************************************************" << endl;
            cout << "***                                                       ***" << endl;
            cout << "                 Welcome to mystery apps World!              " << endl;
            cout << "                                                             " << endl;
            cout << "           1 to palindromic data app                         " << endl;
            cout << "           2 to Leap year Judge app                          " << endl;
            cout << "           3 to Date Judge app                               " << endl;
            cout << "           4 to prime number Judge app                       " << endl;
            cout << "           5 to odd and even number judge app                " << endl;
            cout << "           6 to Triangle Judge app                           " << endl;
            cout << "           0 to exit!                                        " << endl;
            cout << "           any questions please contact feifanyyh@163.com    " << endl;
            cout << "           made by the greatest programmer yyh in the world  " << endl;
            cout << "*************************************************************" << endl;

            cin >> select;
        }
        else
        {
            //exit
            return 0;
        }

    }//while
 }
