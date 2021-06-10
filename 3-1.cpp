//==========================================================
//
// Title:      3-1
// Author:     Daehwan Yoo
// Date:       June/3/2021
// Description:
//   This program utilizes the declaration of function in struct
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
#include <stdlib.h>
using namespace std; // So "std::cout" may be abbreviated to "cout"

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	}
	void AddPoint(const Point& pos) 
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}
	void ShowPosition() 
	{
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}
};

int main()
{
	Point pos1 = { 12,4 };
	Point pos2 = { 20,30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();

	return 0;
}
