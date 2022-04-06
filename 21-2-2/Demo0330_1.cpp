/*
 *  函数：Function, 构件或者构体

 */

 /*  函数的定义

  数据类型 函数名(参数表)
  {
        函数体
  }

  数据类型：可以为任意内建类型或者用户定义类型，一般作为函数的返回值
  函数名：除了保留字之外的任意合法字符串，一般要求有意义的英文单词
  参数表：可以为任意类型，可以为0个或者多个
  函数体：就是函数具体功能的实现，如果函数有返回类型，最后要有return语句明确返回一个值
  */


#include <iostream>

using namespace std;


int getMax(int a, int b);// 如果函数名出现了多个单词，一般第一个单词首字符小写后续单词首字符大写
int factorial(int n); //函数的声明
// factorial(int n)叫做函数签名 Function Signature
int getMin(int a, int b);
int getDayth(int year, int month, int day);

int main()
{
    int a, b; // 相对于用户定义的函数而言，此处的a和b叫做实际参数
    cout << "Input two integers: ";
    cin >> a >> b;

    cout << "In main: " << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    cout << "In main: " << endl;
    // 在函数调用的过程中完成了实参到形参的值传递
    cout << "The maximum of " << a << " and " << b << " is " << getMax(a, b) << endl;

    int n; // 任意位整数的阶乘，要通过数组来解决？

    while(cin>>n)
    {
        cout << n << "!=" << factorial(n) << endl; // factorial(n) 叫做函数调用
    }

    return 0;
}

int factorial(int n) // 函数的定义
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


//值传递相当于a（形参）=a（实参）， b=b
int getMax(int a, int b) // 此处的a b叫做形参
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

int getMin(int a, int b)
{

}

int getDayth(int year, int month, int day)
{

}

