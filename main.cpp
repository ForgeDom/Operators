#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int sec;
    cout << "Введіть кількість секунд: ";
    cin >> sec;

    int h = sec / 3600;
    int m = (sec % 3600) / 60;
    int s = sec % 3600;

    cout << "Годинни: " << h << " Хвилини: " << m << " Секунди: " << s;

	return 0;
}