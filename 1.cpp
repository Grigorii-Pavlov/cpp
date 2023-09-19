#include <iostream>

using namespace std;

int main() {
	cout << "Please enter two natural numbers:\n";
	int one, two;
	cin >> one >> two;
	int sum = 0;
	for (int number = one; number <= two; ++number) {
		sum += number;
    }

	cout << "The sum of the range of common numbers = " << sum << "\n";

	return 0;
}