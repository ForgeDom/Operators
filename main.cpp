#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "���������� ��'��� �������������." << endl;
    cout << "������ ������ ���:" << endl;

    double length, width, height;

    cout << "�������:";
    cin >> length;
    cout << "������:";
    cin >> width;
    cout << "������:";
    cin >> height;

    double v = length * width * height;
        
    cout << "��'��: " << v << " ���.��." << endl;

	return 0;
}