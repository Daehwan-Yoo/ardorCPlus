//==========================================================
//
// Title:      1-2.cpp
// Author:     Daehwan Yoo
// Date:       May/30/2021
// Description:
//   This program uses function overload.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

void swap(int *n1, int *n2) 
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void swap(char* c1, char* c2)
{
	char temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

void swap(double* c1, double* c2)
{
	double temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2 << endl;

	return 0;

}
