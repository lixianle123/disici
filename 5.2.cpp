#include<iostream>
#include<windows.h>
using namespace std;
const double  pi = 3.14159;
void main()
{
	double R, c, s;     /*R为圆的半径,c为圆的周长，s为圆的面积*/
	cout << " Please input 半径:" << endl;
	cin >> R;
	c = 2 * pi*R;
	s = pi * R*R;
	cout << " 周长和面积为:" << c << "和" << s << endl;  /*输出结果*/
	system("pause");
}