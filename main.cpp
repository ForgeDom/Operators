#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int grn, cop;
	cout << "������ ���� � ������� �� �������: " << endl;
	cin >> grn >> cop;
	grn += cop / 100;
	cop %= 100;
	cout << grn << "���. " << cop << "���.";
	return 0;
}