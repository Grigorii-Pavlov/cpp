#include <iostream>
#include <array>
using namespace std;

const int ArSize = 100;
// установил 101 так как при значении 100 он показывает факториал до 99!
int main() {

	array <long double, ArSize> factorials;
	// long long factorials[ArSize];
	factorials[0] = 1LL;

	for (int i = 1; i < ArSize; ++i) {
		factorials[i] = (i + 1) * factorials[i - 1];
	}

	for (int i = 0; i < ArSize; ++i) {
		cout << i + 1 << "! = " << factorials[i] << endl;
	}

	return 0;
}
