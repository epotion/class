#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
    int a=3, b=5;
    int &ra=a;// ra是一个引用变量，它是变量a的别名，二者本质上就是一个
    ra=8;

    int *pa=&a; // pa是一个指针变量，其值为变量a的地址
    (*pa)++; // *pa叫做间接引用变量a，实际上就是变量a，因为指针变量pa指向了整型变量a

    cout << "a=" << a << endl;
    cout << "*pa=" << *pa << endl;
    cout << "&a=" << &a << endl;
    cout << "pa=" << pa << endl;

    bool bl=true;
    bool *pbl = &bl;

    char ch='c';
    char *pch=&ch;

    float f=1.1;
    float *pf=&f;

    double d=1.213333;
    double *pd=&d;

    cout << "sizeof a = " << sizeof a << endl;
    cout << "sizeof pa = " << sizeof pa << endl;
    cout << "sizeof bl = " << sizeof bl << endl;
    cout << "sizeof pbl = " << sizeof pbl << endl;
    cout << "sizeof ch = " << sizeof ch << endl;
    cout << "sizeof pch = " << sizeof pch << endl;
    cout << "sizeof f = " << sizeof f << endl;
    cout << "sizeof pf = " << sizeof pf << endl;
    cout << "sizeof d = " << sizeof d << endl;
    cout << "sizeof pd = " << sizeof pd << endl;

    int arr[10]={1,2,3,4,5,6,7,8,9,10};// 数组名是一个常量指针，也是数组的首地址，也是数组第一个元素的地址
    int *parr=&arr[0];
    parr = arr;
    parr[5]=25;

    parr++; // 实际上内部的运算是（parr当前值+一个int的宽度）
    cout << *parr << endl;
    cout << *(arr+8) << endl;

    int *parr1=arr+9;
    cout <<  parr1-parr << endl;
    //arr++;

//    const int LENGTH = 10;
//    int Myarray[LENGTH];

    int *pa1= new int(3);
    cout << "*pa1=" << *pa1 << endl;
    delete pa1;
    pa1=nullptr;

    int len, value;
    cout << "Input the size of a array and a initial value: ";
    cin >> len >> value;
    int *parr2 = new int [len];
    initializeArray(parr2, len, value);
    printArray(parr2,len);
    cout << endl;
    delete [] parr2;
    parr2=nullptr;

    int twoDimArray[3][3]={{1,2,3},{4,5,6},{7,8,9}}; // 定义一个3行3列的二维数组

    printTwoDimArray(twoDimArray, 3);

    // 二维数组的动态分配



    cout << "Before swap: " << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    swapTwoIntegersByValue(a, b); // 按值传递函数参数并不能改变实际参数的值
    cout << "ByValue After swap: " << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << endl;

    swapTwoIntegersByReference(a, b);
    cout << "ByReference After swap: " << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << endl;

    swapTwoIntegersByPointer(&a, &b);
    cout << "ByPointer After swap: " << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << endl;


    int year,month,day;
    cout << "please input year,month,day:";
    cin >> year >> month >> day;
    cout << getDayth(year,month,day) << endl;

    int c;
    cin >> a >> b >> c;
    cout << "Max: = " << getMax(a, b, c) << endl;



    return 0;
}
