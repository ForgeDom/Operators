#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int s;
	cout << "������ ������� ��������� (�����): ";
	cin >> s;
	double m,sec;
	cout << "������ ��� (��.���): " << endl;
	cin >> m >> sec;

	int all_sec = m * 60 / sec;

	double v = (s / 1000) / (all_sec / 3600);
	cout << "���������: " << s << "�" << endl;
	cout << "���:" << m << " �� " << sec << " ���= " << all_sec << " ���. " << endl;
	cout << "�� ���� � ��������" << v << "��/���" << endl;

	return 0;
}