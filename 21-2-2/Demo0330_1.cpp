/*
 *  ������Function, �������߹���

 */

 /*  �����Ķ���

  �������� ������(������)
  {
        ������
  }

  �������ͣ�����Ϊ�����ڽ����ͻ����û��������ͣ�һ����Ϊ�����ķ���ֵ
  �����������˱�����֮�������Ϸ��ַ�����һ��Ҫ���������Ӣ�ĵ���
  ����������Ϊ�������ͣ�����Ϊ0�����߶��
  �����壺���Ǻ������幦�ܵ�ʵ�֣���������з������ͣ����Ҫ��return�����ȷ����һ��ֵ
  */


#include <iostream>

using namespace std;


int getMax(int a, int b);// ��������������˶�����ʣ�һ���һ���������ַ�Сд�����������ַ���д
int factorial(int n); //����������
// factorial(int n)��������ǩ�� Function Signature
int getMin(int a, int b);
int getDayth(int year, int month, int day);

int main()
{
    int a, b; // ������û�����ĺ������ԣ��˴���a��b����ʵ�ʲ���
    cout << "Input two integers: ";
    cin >> a >> b;

    cout << "In main: " << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    cout << "In main: " << endl;
    // �ں������õĹ����������ʵ�ε��βε�ֵ����
    cout << "The maximum of " << a << " and " << b << " is " << getMax(a, b) << endl;

    int n; // ����λ�����Ľ׳ˣ�Ҫͨ�������������

    while(cin>>n)
    {
        cout << n << "!=" << factorial(n) << endl; // factorial(n) ������������
    }

    return 0;
}

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

int getMin(int a, int b)
{

}

int getDayth(int year, int month, int day)
{

}

