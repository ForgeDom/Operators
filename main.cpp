#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    int year;
    cout << "������ ����� ����: ";
    cin >> year;

    int days = 365; 

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days = 366;
    }

    cout << "� " << year << " ���� " << days << " ���." << endl;

    return 0;
	
}