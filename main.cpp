#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double mash, way;

	cout << "���������� ������ �� ���������� ��������." << endl;
	cout << "������ ������ ���:" << endl;

	cout << "������� ����� (������� �������� � ������ ���������): ";
	cin >> mash;
	cout << "³������ �� �������, �� ���������� ������� ������ (��): ";
	cin >> way;

	double f_way = way / 100 * mash;

	cout << "³������ �� ���������� �������� " << f_way << " ��." << endl;
	return 0;
}