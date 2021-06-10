//==========================================================
//
// Title:      2-4-2
// Author:     Daehwan Yoo
// Date:       June/3/2021
// Description:
//   This progrma gives five random integer from 0 to 100.
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


int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		cout << "Random Number " << i+1 << ": " << rand() % 100 << endl;
	}

	return 0;
}
