
/* vc, dev C++, Borland C++,
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     //�㷨���ۣ� BAT

     const int length = 10;
     //length = 11;
     int i=1;

     while(i<=10)
     {
         if(5==i) //���ƽṹ��Ƕ��
         {
             i++;
             break;
             //һ��ִ�У�������ֹ����ѭ����������ѭ���ṹ֮���ִ�п�ʼִ��
         }

        // continueһ��ִ�У�������ֹ����ѭ��������ָcontinue���֮��һֱ��}֮�������ָ���������
         else
            cout << i << endl;
         i++;// ++i; i+=1; i=i+1;
     }

     cout << "break!" << endl;

     //���飺һ��ͬ���������ݵļ���
     //����������� �������� ������[����������Ԫ�صĸ�����];

     int arr[length]={1,2,3};

//     int a={0};
//     cout << "a=" << a << endl;
     //��η��������أ�  Ҫʹ��������[�±�]���±�ĺϷ���Χ��0----������-1

     for(int i=0; i<length; i++)
        cout << arr[i] << endl;


    // �����������Ͼ��������һ��Ԫ�صĵ�ַ��������һ������ַ�����ܸı�
    cout << "&arr[0] = " << &arr[0] << endl; //�����һ��Ԫ�صĵ�ַ
    cout << "&arr[0] = " << arr << endl;//�����һ��Ԫ�صĵ�ַ
    cout << "&arr=" << &arr << endl;//����ĵ�ַ

    cout << "arr[3]=" << *(arr+3) << endl;

    cout << "sizeof arr = " << sizeof arr << endl;
    cout << "sizeof int = " << sizeof(int) << endl;
    cout << "sizeof int = " << sizeof(arr[0]) << endl;
    cout << "sizeof arr = " << 10*sizeof (4) << endl;
    cout << "sizeof arr = " << 10*sizeof (sizeof(arr[0])) << endl; // ???�κ���ҵ

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
