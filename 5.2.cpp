#include<iostream>
#include<windows.h>
using namespace std;
const double  pi = 3.14159;
void main()
{
	double R, c, s;     /*RΪԲ�İ뾶,cΪԲ���ܳ���sΪԲ�����*/
	cout << " Please input �뾶:" << endl;
	cin >> R;
	c = 2 * pi*R;
	s = pi * R*R;
	cout << " �ܳ������Ϊ:" << c << "��" << s << endl;  /*������*/
	system("pause");
}