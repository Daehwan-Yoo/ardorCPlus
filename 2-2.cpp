//==========================================================
//
// Title:      2-2
// Author:     Daehwan Yoo
// Date:       June/3/2021
// Description: 
//	This program declares "const int num=12", creates pointer
// variables to point this variable. Also, declaring reference
// to refer this pointer. 
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
	const int num = 12;
	const int * pot = &num;
	const int *(&refer) = pot;

	cout << *pot << endl;
	cout << *refer << endl;

	return 0;
}
