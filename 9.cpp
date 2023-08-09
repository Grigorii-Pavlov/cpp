#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int i = 0;

	cout << "Вводите слова (для завершения введите слово done):\n";
	for (string word; word != "done"; i++) {
		cin >> word;
	}
	cout << "Вы ввели " << i - 1 << " слов.\n";


	return 0;
}