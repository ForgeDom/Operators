#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int s;
	cout << "¬вед≥ть довжину дистанц≥њ (метр≥в): ";
	cin >> s;
	double m,sec;
	cout << "¬вед≥ть час (хв.сек): " << endl;
	cin >> m >> sec;

	int all_sec = m * 60 / sec;

	double v = (s / 1000) / (all_sec / 3600);
	cout << "ƒистанц≥€: " << s << "м" << endl;
	cout << "„ас:" << m << " хв " << sec << " сек= " << all_sec << " сек. " << endl;
	cout << "¬и б≥гли з≥ швидк≥стю" << v << "км/год" << endl;

	return 0;
}