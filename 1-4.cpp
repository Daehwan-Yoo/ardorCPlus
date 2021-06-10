//==========================================================
//
// Title:      1-4
// Author:     Daehwan Yoo
// Date:       June/1/2021
// Description:
//   'Practice: separating source file to header and source file"
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
#include "1-4 header.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}
