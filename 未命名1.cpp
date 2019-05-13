#include "stdafx.h"
#include"iostream"
using namespace std;
class CTestCopy
{
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy &om);
	void setXY(int a, int b);
	void display();
	~CTestCopy();

};
CTestCopy::CTestCopy()
{
	x = 0;
	y = 0;
	cout << "x=" << x << "y=" << y << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy(int a, int b)
{
	x = a;
	y = b;
	cout << "x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy &om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "x=" << x << "y=" << y << endl;
}
void CTestCopy::setXY(int a, int b)
{
	x = a;
	y = b;
}
void CTestCopy::display()
{
	cout << "display   x=" << x << "y=" << y << endl;
}
CTestCopy myTest()
{
	CTestCopy om(600, 700);
	om.display();
	return om;
}



int main()
{
	CTestCopy ot;
	ot.display();
	ot = myTest();
	ot.display();
	return 0;
}
