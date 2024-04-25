#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Обчислення об'єму паралелепіпеда." << endl;
    cout << "Введіть вихідні дані:" << endl;

    double length, width, height;

    cout << "Довжина:";
    cin >> length;
    cout << "Ширина:";
    cin >> width;
    cout << "Висота:";
    cin >> height;

    double v = length * width * height;
        
    cout << "Об'єм: " << v << " куб.см." << endl;

	return 0;
}