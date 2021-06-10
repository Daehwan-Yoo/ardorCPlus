//==========================================================
//
// Title:      8-1
// Author:     Daehwan Yoo
// Date:       June/10/2021
// Description:
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

class Employee
{
private:
	char name[100];
public:
	Employee(char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "Name: " << name << endl;
	}
	virtual int GetPay() const
	{
		return 0;
	}
	virtual void ShowSalaryInfo() const
	{}
};

class PermanentWorker :public Employee
{
private:
	int salary;
public:
	PermanentWorker(char* name, int money) :Employee(name), salary(money)
	{}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "Salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker :public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(char* name, int pay) :Employee(name), workTime(0), payPerHour(pay)
	{}
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "Salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker :public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(char* name, int money, double ratio) :PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{}
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}
	void ShowSalary() const
	{
		ShowYourName();
		cout << "Salary: " << GetPay() << endl << endl;
	}
};


namespace RISK_LEVEL
{
	enum {RISK_A = 30, RISK_B=20,RISK_C=10};
	
}
class ForeignSalesWorker :public SalesWorker
{
private:
	const int riskL;
public:
	ForeignSalesWorker(char* name, int money, double ratio, int risk):SalesWorker(name, money, ratio),riskL(risk)
	{}
	int GetRiskPay() const
	{
		return (int)(SalesWorker::GetPay() * (riskL / 100.00));
	}
	int GetPay() const
	{
		return SalesWorker::GetPay() + GetRiskPay();
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "Salary: " << SalesWorker::GetPay() << endl;
		cout << "Risk Pay:" << GetRiskPay() << endl;
		cout << "Sum: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() :empNum(0)
	{}
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << "Salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};

int main()
{
	EmployeeHandler handler;

	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(700);
	handler.AddEmployee(fseller1);

	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Jin", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(700);
	handler.AddEmployee(fseller2);

	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(700);
	handler.AddEmployee(fseller3);

	handler.ShowAllSalaryInfo();
	return 0;
}
