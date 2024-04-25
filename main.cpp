#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    int year;
    cout << "Введіть номер року: ";
    cin >> year;

    int days = 365; 

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days = 366;
    }

    cout << "У " << year << " році " << days << " днів." << endl;

    return 0;
	
}