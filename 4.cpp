#include <iostream>

using namespace std;

int main() {

	double Dafna = 100;
	double Kleo = 100;
	const double DafnaProfit = Dafna * 0.1;
	int YearsCounter = 0;

	while (Kleo <= Dafna) {
		Kleo *= 1.05;
		Dafna += DafnaProfit;
		YearsCounter += 1;
	}
	cout << YearsCounter << endl;
	cout << "Dafna = " << Dafna << " ; " << "Kleo = " << Kleo;
	return 0;
}
