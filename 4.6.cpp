#include <iostream>
#include<windows.h>
using namespace std;
void fun(int x, int &y)
{
	x += y;
	y += x;
}
void main()
{
	int x = 5, y = 10;
	fun(x, y);
	fun(y, x);
	cout << "x=" << x << ",y=" << y << endl;
	system("pause");
   // return 0;
}