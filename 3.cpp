#include <iostream>

using namespace std;

int main() {

	int sum = 0;
	int number = 0;
	do {
		cout << "Enter number: ";
		cin >> number;
		sum += number;
		cout << "Sum = " << sum << endl;
	} while (number != 0);

	return 0;
}
