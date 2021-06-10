//==========================================================
//
// Title:      4-3
// Author:     Daehwan Yoo
// Date:       June/6/2021
// Description:
//   This program defines the class 'NameCard' using enum
// for some keywords.
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	
	void ShowPosition(int p)
	{
		switch (p)
		{
		case CLERK:
			cout << "Clerk" << endl;
			break;
		case SENIOR:
			cout << "Senior" << endl;
			break;
		case ASSIST:
			cout << "Assist" << endl;
			break;
		case MANAGER:
			cout << "Manager" << endl;
			break;
		}
	}
}

class NameCard
{
private:
	char* name;
	char* companyName;
	char* number;
	int role;
	
public:
	NameCard (char* n, char* cn, char* num, int r)
	{
		name = new char[strlen(n)+1];
		companyName = new char[strlen(cn) + 1];
		number = new char[strlen(num) + 1];
		strcpy(name, n);
		strcpy(companyName, cn);
		strcpy(number, num);
		role = r;
	}
	void ShowNameCardInfo() const
	{
		cout << "Name: " << name << endl;
		cout << "Company Name: " << companyName << endl;
		cout << "Phone Number: " << number << endl;
		cout << "Position: ";
		COMP_POS::ShowPosition(role);

		cout << endl << endl;
	}
	~NameCard()
	{
		delete []name;
		delete []companyName;
		delete []number;
	}

};

int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodC", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}
