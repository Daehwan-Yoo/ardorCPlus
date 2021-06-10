//==========================================================
//
// Title:      2-1-1
// Author:     Daehwan Yoo
// Date:       June/2/2021
// Description:
//   This program defines two function using "reference".
// 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

void Add(int &ref)
{
	ref++;
}

void switchPro(int& ref)
{
	ref *= -1;
}


int main()
{
	int num1 = 10;
	Add(num1);
	cout << "After calling 'Add' function: " << num1 << endl;
	switchPro(num1);
	cout << "After calling 'switchPro' function: " << num1 << endl;

	return 0;
}
