#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int total_days;
    cout << "¬вед≥ть к≥льк≥сть дн≥в: " << endl;
    cin >> total_days;

    int days = total_days % 7;
    int weeks = total_days / 7;
   
    cout << weeks << " тижн≥в " << days << " дн≥в " << endl;
	return 0;
}