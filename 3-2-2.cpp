//==========================================================
//
// Title:      3-2-2
// Author:     Daehwan Yoo
// Date:       June/5/2021
// Description:
//   This program defines the class 'Printer'
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
#include <cstring>
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Printer
{
private:
	char str[30];
public:
	void SetString(char* arr);
	void ShowString();
};

void Printer::SetString(char* arr)
{
	strcpy(str, arr);
}

void Printer::ShowString()
{
	cout << str << endl;
}

int main(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love c++");
	pnt.ShowString();

	return 0;
}
