#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double mash, way;

	cout << "Обчислення відстані між населеними пунктами." << endl;
	cout << "Введіть вихідні дані:" << endl;

	cout << "Масштаб карти (кількість кілометрів в одному сантиметрі): ";
	cin >> mash;
	cout << "Відстань між точками, що зображують населені пункти (см): ";
	cin >> way;

	double f_way = way / 100 * mash;

	cout << "Відстань між населеними пунктами " << f_way << " км." << endl;
	return 0;
}