#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	int i = 0;

	cout << "������� ����� (��� ���������� ������� ����� done):\n";
	for (string word; word != "done"; i++) {
		cin >> word;
	}
	cout << "�� ����� " << i - 1 << " ����.\n";


	return 0;
}