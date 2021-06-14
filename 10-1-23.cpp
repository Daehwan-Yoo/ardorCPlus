//==========================================================
//
// Title:      10-1-23
// Author:     Daehwan Yoo
// Date:       June/11/2021
// Description:
//   This porgram defines the class "Point" that overload 
// '+=', '-=', '==' and '!= operator.
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
	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	
	Point& operator +=(const Point& ref)
	{
		xpos += ref.xpos;
		ypos += ref.ypos;
		return *this;
	}

	Point& operator -=(const Point& ref)
	{
		xpos -= ref.xpos;
		ypos -= ref.ypos;
		return *this;
	}

	friend Point operator+(const Point& pos1, const Point& pos2);
	friend Point operator-(const Point& pos1, const Point& pos2);
	friend bool operator==(const Point&, const Point&);
	friend bool operator!=(const Point&, const Point&);
};

Point operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}

Point operator-(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
	return pos;
}

bool operator==(const Point& pos1, const Point& pos2)
{
	if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
		return true;
	else
		return false;
}

bool operator !=(const Point& pos1, const Point& pos2)
{
	return !(pos1 == pos2);
}

int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1 + pos2;
	Point pos4 = pos2 - pos1;

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}
