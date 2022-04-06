
/* vc, dev C++, Borland C++,
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     //算法导论， BAT

     const int length = 10;
     //length = 11;
     int i=1;

     while(i<=10)
     {
         if(5==i) //控制结构的嵌套
         {
             i++;
             break;
             //一旦执行，立即终止整个循环，并跳到循环结构之后的执行开始执行
         }

        // continue一旦执行，立即终止本次循环，这里指continue语句之后一直到}之间的所有指令都将被跳过
         else
            cout << i << endl;
         i++;// ++i; i+=1; i=i+1;
     }

     cout << "break!" << endl;

     //数组：一组同种类型数据的集合
     //数组的声明： 数据类型 数据名[常量（数组元素的个数）];

     int arr[length]={1,2,3};

//     int a={0};
//     cout << "a=" << a << endl;
     //如何访问数组呢？  要使用数组名[下标]，下标的合法范围是0----最大个数-1

     for(int i=0; i<length; i++)
        cout << arr[i] << endl;


    // 数组名本质上就是数组第一个元素的地址，而且是一个常地址，不能改变
    cout << "&arr[0] = " << &arr[0] << endl; //数组第一个元素的地址
    cout << "&arr[0] = " << arr << endl;//数组第一个元素的地址
    cout << "&arr=" << &arr << endl;//数组的地址

    cout << "arr[3]=" << *(arr+3) << endl;

    cout << "sizeof arr = " << sizeof arr << endl;
    cout << "sizeof int = " << sizeof(int) << endl;
    cout << "sizeof int = " << sizeof(arr[0]) << endl;
    cout << "sizeof arr = " << 10*sizeof (4) << endl;
    cout << "sizeof arr = " << 10*sizeof (sizeof(arr[0])) << endl; // ???课后作业

    int scores[] = {3,0,2,0,1,0,9,10,9,8,6,5,3,4,5,7,8,9,3,6,5,4,3,9,1,0,10,3,3,4,2,5,7,8,10,0,1,3,5};

    int len=sizeof scores/ sizeof (int);

    int frequency[11]={0};

    for(int i=0; i<len; i++)
    {
        frequency[scores[i]]++;
    }
    for(int j=0; j<11; j++)
    {
        cout << j << ": " << frequency[j] << "times" << ": ";
        for(int m=0; m<frequency[j]; m++)
            cout << "*";
        cout << endl;
    }

     return 0; // ANSI / ISO C++99, 11,17 21;
 }
