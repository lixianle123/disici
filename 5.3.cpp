#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int *p, i, a = 0, b = 0;
	p = new int[20];
	for (i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] > 0) a++;
		if (p[i] < 0) b++;
	}
	cout << "��������Ϊ" << a << endl;
	cout << "��������Ϊ" << b << endl;
	delete[]p;
	system("pause");
	return 0;
}