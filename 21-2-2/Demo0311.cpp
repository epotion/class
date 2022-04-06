//李佳晨
#include <iostream>
#include <string.h>//字符的头文件
#include <algorithm>//反转头文件

using namespace std;//杨昆
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b<c||b+c<a||a+c<b)
    {
        cout<<"不能组成三角形";
    }
    else
    {
        cout<<"能组成三角形";
    }
    if(a==b&&b==c)
    {
        cout<<"，且为等边三角形";
    }
    else if(a==b||a==c||b==c)
    {
        cout<<",且为等腰三角形";
        if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
        cout<<"，该等腰三角形为直角三角形";
    }
    else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    {
        cout<<",且为直角三角形";
    }
    return 0;
}





















/*int main()
{
    string a, b;
    cin >> a;
    b = a;
    reverse( a.begin() , a.end() );
    if(a==b)
    {
        cout << "是回文数" <<endl;
    }
    else
    {
        cout << "不是回文数" <<endl;
    }
    return 0;
}



/* Name：JI

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //付涛
    int const INF = 0x3f3f3f3f;
    int res = 1;
    char pl[INF];

    cin >> pl;

    int i = 0,j = strlen(pl) - 1;
    while(i < j)
         if(pl[i ++ ] != pl[j -- ])
         {
             res = 0;
             break;
         }


    if(res) cout << "Yes";
    else cout << "No";

    cout << endl;

     //李郭宇
    /*
    int a,b,c;
    cin>>a;
    b=a;
    while(a>0){
        c=c*10+a%10;
        a/=10;

    }
    if(c==b)
        cout<<"是回文数";
    else
        cout<<"不是回文数";
        */




    /*//史建宇
    cout<<"请输入一个五位数： "<<endl;
    int num,a,b,c,d;
    cin>>num;
    a=num%10;
    b=num/10%10;
    c=num/1000%10;
    d=num/10000;
    if(a==d&&b==c){cout<<num<<"是回文数"<<endl;}
    else{{cout<<num<<"不是回文数"<<endl;}}

    /*于璠char a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a==e&&b==d)cout<<"是回文数"<<endl;
    else cout<<"不是回文数"<<endl;
    return 0;*/




