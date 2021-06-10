//==========================================================
//
// Title:      7-2-2
// Author:     Daehwan Yoo
// Date:       June/9/2021
// Description:
//   This program defines the base class 'Book' and derived
// class 'Ebook'
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(char* t, char* i, int p) :price(p)
	{
		title = new char [strlen(t+1)];
		isbn = new char [strlen(i+1)];
		strcpy(title, t);
		strcpy(isbn, i);
	}
	void ShowBookInfo() 
	{
		cout << "Name: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "Price: " << price << endl;
	}
};

class EBook :public Book
{
private:
	char* DRMKey;
public:
	EBook(char* t, char* i, int p, char* D) :Book(t, i, p)
	{
		DRMKey = new char[strlen(D + 1)];
		strcpy(DRMKey, D);
	}
	void ShowEBookInfo()
	{
		Book::ShowBookInfo();
		cout << "DRM Key: " << DRMKey << endl;
	}
};

int main()
{
	Book book("GOOD C++", "555-1234-456-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("Better C++", "456-789-1231", 30000, "lkajsdlkfj");
	ebook.ShowEBookInfo();

	return 0;
}
