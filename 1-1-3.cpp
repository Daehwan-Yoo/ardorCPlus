//==========================================================
//
// Title:      1-1-3.cpp
// Author:     Daehwan Yoo
// Date:       May/30/2021
// Description:
//   This program gets an integer, shows multiplication table
// for that.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	int num;
	cout << "Enter the integer: ";
	cin >> num;

	for (int i = 1; i < 10; i++)
	{
		cout << num << " * " << i << " = " << num * i<<endl;
	}


}
