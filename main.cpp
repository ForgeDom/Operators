#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int sec;
    cout << "������ ������� ������: ";
    cin >> sec;

    int h = sec / 3600;
    int m = (sec % 3600) / 60;
    int s = sec % 3600;

    cout << "�������: " << h << " �������: " << m << " �������: " << s;

	return 0;
}