//==========================================================
//
// Title:      1-1-1.cpp
// Author:     Daehwan Yoo
// Date:       May/30/2021
// Description:
//   This program gets 5 integers from user, prints the result
// of these 5 integers.
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
	int num[5];
	int result=0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter [" << i + 1 << "]'s integer: ";
		cin >> num[i];	
		result = num[i] + result;
	}

	cout << "The result: " << result<<endl;


}
