//==========================================================
//
// Title:      4-2
// Author:     Daehwan Yoo
// Date:       June/6/2021
// Description:
//   This program defines the class 'Circle'
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point pnt;
	int radius;
public:
	void Init(int x, int y, int r)
	{
		radius = r;
		pnt.Init(x, y);
	}
	void ShowCircleInfo() const
	{
		cout << "radius: " << radius << endl;
		pnt.ShowPointInfo();
	}
};

class Ring
{
	Circle inner;
	Circle outer;
public:
	void Init(int a, int b, int c, int d, int e, int f)
	{
		inner.Init(a, b, c);
		outer.Init(d, e, f);
	}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info...";
		inner.ShowCircleInfo();
		cout << "Outer Circle Info...";
		outer.ShowCircleInfo();
	}
};

int main()
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}
