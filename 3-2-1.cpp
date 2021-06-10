//==========================================================
//
// Title:      3-2-1
// Author:     Daehwan Yoo
// Date:       June/5/2021
// Description:
//   This program defines the class 'Calculator'
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Calculator
{
private:
	int add;
	int sub;
	int mul;
	int div;
public:
	void Init()
	{
		add = 0;
		sub = 0;
		mul = 0;
		div = 0;
	}
	double Add(double b, double s)
	{
		add++;
		return b + s;
	}
	double Min(double b, double s)
	{
		sub++;
		return b - s;
	}
	double Mul(double b, double s)
	{
		mul++;
		return b * s;
	}
	double Div(double b, double s)
	{
		div++;
		return b / s;
	}
	void ShowOpCount() 
	{
		cout << "Addition: " << add << "  Subtraction: " << sub << "  Mul: " << mul << "  Div: " << div;
	}

};

int main()
{
	Calculator cal;
	cal.Init();
	cout << "3.2+2.4= " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5/1.7= " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2-1.5= " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9/1.2= " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;

}
