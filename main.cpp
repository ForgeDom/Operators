#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const double p = 3.14;
	double r;
	cout << "����������� ��'��� ���: " << endl;
	cout << "������ R(�����): " << endl;
	cin >> r;

	double v = (4 * p * pow(r, 3) / 3);

	cout << "��'�� ��� - " << v << "��/���.";
	return 0;
}