#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int total_days;
    cout << "������ ������� ���: " << endl;
    cin >> total_days;

    int days = total_days % 7;
    int weeks = total_days / 7;
   
    cout << weeks << " ����� " << days << " ��� " << endl;
	return 0;
}