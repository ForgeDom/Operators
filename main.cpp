#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

    int year;
    cout << "������ ����� ����: ";
    cin >> year;

    int leap_year = (year % 4 == 0);
    int days = 365 + leap_year;

    cout << "� " << year << " ���� " << days << " ���." << endl;

    return 0;
	
}