//��ѳ�
#include <iostream>
#include <string.h>//�ַ���ͷ�ļ�
#include <algorithm>//��תͷ�ļ�

using namespace std;//����
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b<c||b+c<a||a+c<b)
    {
        cout<<"�������������";
    }
    else
    {
        cout<<"�����������";
    }
    if(a==b&&b==c)
    {
        cout<<"����Ϊ�ȱ�������";
    }
    else if(a==b||a==c||b==c)
    {
        cout<<",��Ϊ����������";
        if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
        cout<<"���õ���������Ϊֱ��������";
    }
    else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    {
        cout<<",��Ϊֱ��������";
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
        cout << "�ǻ�����" <<endl;
    }
    else
    {
        cout << "���ǻ�����" <<endl;
    }
    return 0;
}



/* Name��JI

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //����
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

     //�����
    /*
    int a,b,c;
    cin>>a;
    b=a;
    while(a>0){
        c=c*10+a%10;
        a/=10;

    }
    if(c==b)
        cout<<"�ǻ�����";
    else
        cout<<"���ǻ�����";
        */




    /*//ʷ����
    cout<<"������һ����λ���� "<<endl;
    int num,a,b,c,d;
    cin>>num;
    a=num%10;
    b=num/10%10;
    c=num/1000%10;
    d=num/10000;
    if(a==d&&b==c){cout<<num<<"�ǻ�����"<<endl;}
    else{{cout<<num<<"���ǻ�����"<<endl;}}

    /*�ڭ[char a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a==e&&b==d)cout<<"�ǻ�����"<<endl;
    else cout<<"���ǻ�����"<<endl;
    return 0;*/




