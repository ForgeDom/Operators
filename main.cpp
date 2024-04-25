#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double drib;
	cout << "" << endl;
	cin >> drib;

	double grn = static_cast<int>(drib);
	double cop = static_cast<int>((drib - grn) * 100);
	cout << grn << " грн." << cop << " коп.";

	return 0;
}