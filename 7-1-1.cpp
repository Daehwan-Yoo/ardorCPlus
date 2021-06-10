//==========================================================
//
// Title:      7-1-1
// Author:     Daehwan Yoo
// Date:       June/9/2021
// Description:
//   This program defines bass class 'Car', derived class-
// 'hybridcar', and derived class 'hybridwatercar'
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <conio.h> // For function getch()
using namespace std; // So "std::cout" may be abbreviated to "cout"

class Car
{
private:
	int gasolineGauge;
public:
	Car(int g):gasolineGauge(g)
	{
	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar :public Car
{
private:
	int electricGauge;
public:
	HybridCar(int g, int e):Car(g), electricGauge(e)
	{
	}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int g, int e, int w) : HybridCar(g, e), waterGauge(w)
	{}
	void ShowCurrentGauge()
	{
		cout << "Remained Gasoline: " << GetGasGauge() << endl;
		cout << "Remain electricity: " << GetElecGauge() << endl;
		cout << "Remain water: " << waterGauge << endl;
	}
};


int main()
{
	HybridWaterCar hwc(30,40,50);
	hwc.ShowCurrentGauge();

	return 0;
}
