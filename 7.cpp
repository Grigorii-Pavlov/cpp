#include <iostream>
#include <string>

using namespace std;

struct car {
	string nameCar;
	int yearCar;
};

int main() {

	setlocale(LC_ALL, "Russian");
	cout << "Сколько автомобилей поместить в каталог? ";
	int quantity;
	cin >> quantity;
	cin.get();
	car* quanCar = new car[quantity];

	for (int i = 0; i < quantity; ++i) {
		cout << "Автомобиль #" << i+1 << endl;
		cout << "Введите производителя: ";
		
		//cin.ignore(); // пропуск символа новой строки/n которая осталась после первого ввода cin 
		getline(cin, quanCar[i].nameCar);  // написано вроде правильно, но пропускает эту строчку
		//и не даёт ввести строку

		cout << "Введите год выпуска: ";
		cin >> quanCar[i].yearCar;
		cin.get();
	}
	cout << "Вот ваша коллекция:\n";
	for (int j = 0; j < quantity; j++) {
		cout << quanCar[j].yearCar << " ";
		cout << quanCar[j].nameCar << endl;
	}
	delete[] quanCar;
	return 0;
}