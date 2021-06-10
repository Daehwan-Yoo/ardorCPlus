//==========================================================
//
// Title:      7-2-1
// Author:     Daehwan Yoo
// Date:       June/9/2021
// Description:
//   This program defines the base class 'Rectangle' and 
// derived class 'Square'
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Rectangle
{
private:
	int length;
	int width;
public:
	Rectangle(int l, int w) :length(l), width(w)
	{}
	void ShowAreaInfo()
	{
		cout << "Area: " << length * width << endl;
	}
};

class Square : public Rectangle
{
public:
	Square(int x) :Rectangle(x, x)
	{}

};

int main()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();

	return 0;
}
