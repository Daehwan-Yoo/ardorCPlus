//==========================================================
//
// Title:      7-1-2
// Author:     Daehwan Yoo
// Date:       June/9/2021
// Description:
//   This program defines the class 'MyFriendInfo' and 
// derived class 'MyFriendDetailInfo'
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(char* n, int a) :age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	void ShowMyFriendInfo()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(char* n, int a, char* ad, char* p):MyFriendInfo(n,a)
	{
		addr = new char[strlen(ad) + 1];
		phone = new char[strlen(p) + 1];
		strcpy(addr, ad);
		strcpy(phone, p);

	}

	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "Address: " << addr << endl;
		cout << "Phone: " << phone << endl << endl;
	}
};

int main()
{
	MyFriendDetailInfo frd("Dan", 16, "Michigan", "490-128-2948");
	frd.ShowMyFriendDetailInfo();
	return 0;
}
