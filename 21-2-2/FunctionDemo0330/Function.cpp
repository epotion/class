#include <iostream>
#include "Function.h"

// ֪ʶ���ֵĵط������ܣ�Ҫ�ü��ܱ�������

using namespace std;

void printTwoDimArray(int arr[][3], int row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

//void initializeArray(int *arr, int len, int value)
void initializeArray(int arr[], int len, int value)
{
    for(int i=0; i<len; i++)
        arr[i]=value;
}

//void printArray(int *arr, int len)
void printArray(int arr[], int len)
{
    for(int i=0; i<len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swapTwoIntegersByPointer(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void swapTwoIntegersByReference(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

void swapTwoIntegersByValue(int a, int b)
{
    int temp = a;
    a=b;
    b=temp;
}


// makefile

int factorial(int n) // �����Ķ���
{
    int i, res;
    res=1;
    i=1;

    while(i<=n)
    {
        res*=i;
        i++;
    }
    return res;
}


//ֵ�����൱��a���βΣ�=a��ʵ�Σ��� b=b
int getMax(int a, int b) // �˴���a b�����β�
{
    cout << "\nIn getMax: " << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    cout << "In getMax: " << endl;

    return a>b?a:b;

//    if(a>b)
//        return a;
//    else
//        return b;
}
//������
int getMin(int a, int b)
{
     cout << "\nIn getMin: " << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    cout << "In getMin: " << endl;
    return a<b?a:b;
}


//Ҧ��
int getDayth(int year, int month, int day)
{
    int sum=0;

    int Days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(0==year%4 && 0!=year%100 || 0==year%400)
        Days[2]=29; // Days[2]+=1;
    for(int i=1; i<month; i++)
        sum+=Days[i];

    sum+=day;

//    if(0==year%4 && 0!=year%100 || 0==year%400)
//    {
//        switch(month)
//        {
//            case 1:sum=sum;break;
//            case 2:sum=sum+31;break;
//            case 3:sum=sum+31+29;break;
//            case 4:sum=sum+31+29+31;break;
//            case 5:sum=sum+31+29+31+30;break;
//            case 6:sum=sum+31+29+31+30+31;break;
//            case 7:sum=sum+31+29+31+30+31+30;break;
//            case 8:sum=sum+31+29+31+30+31+30+31;break;
//            case 9:sum=sum+31+29+31+30+31+30+31+31;break;
//            case 10:sum=sum+31+29+31+30+31+30+31+31+30;break;
//            case 11:sum=sum+31+29+31+30+31+30+31+31+30+31;break;
//            case 12:sum=sum+31+29+31+30+31+30+31+31+30+31+30;break;
//
//        }
//        sum=sum+day;
//    }
//    else
//    {
//         switch(month)
//        {
//            case 1:sum=sum;break;
//            case 2:sum=sum+31;break;
//            case 3:sum=sum+31+28;break;
//            case 4:sum=sum+31+28+31;break;
//            case 5:sum=sum+31+28+31+30;break;
//            case 6:sum=sum+31+28+31+30+31;break;
//            case 7:sum=sum+31+28+31+30+31+30;break;
//            case 8:sum=sum+31+28+31+30+31+30+31;break;
//            case 9:sum=sum+31+28+31+30+31+30+31+31;break;
//            case 10:sum=sum+31+28+31+30+31+30+31+31+30;break;
//            case 11:sum=sum+31+28+31+30+31+30+31+31+30+31;break;
//            case 12:sum=sum+31+28+31+30+31+30+31+31+30+31+30;break;
//
//        }
//        sum=sum+day;
//    }
    return sum;
}

int getMax(int a, int b, int c)
{

    return getMax(a, getMax(b, c)); // ������̣����븴�ã����ã�
//    if(a>b)
//    {
//        if(a>c)
//            return a;
//        else
//            return c;
//    }
//    else
//    {
//        if(b>c)
//            return b;
//        else
//            return c;
//    }
}
