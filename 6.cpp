#include <iostream>
#include <string>

using namespace std;

int main() {

	const int yearsCount = 3;
	const int monthsCount = 12;

	const char* months[monthsCount] = { "January", "February", "March", // вариант инициализации указателя символьного массива
							 "April",   "May",      "June",
							 "July",    "August",   "September",
							 "October", "November", "December" };

	//char month[mon]       { "January", "February", "March", // вариант инициализации символьного массива
	//					       "April",   "May",      "June",
	//						   "July",    "August",   "September",
	//						   "October", "November", "December" };

   //const string month[mon]{ "January", "February", "March", // вариант инициализации строчного массива
   //						 "April",   "May",      "June",
   //						 "July",    "August",   "September",
   //						 "October", "November", "December" };

	int books[yearsCount][monthsCount];
	int yearsResult = 0;
	cout << "Enter the number of books sold per month:\n";
	for (int year = 0; year < yearsCount; ++year) {
		cout << year + 1 << " year:\n";
		int yearResult = 0;
		for (int month = 0; month < monthsCount; month++) {
			cout << months[month] << ": ";
			cin >> books[year][month];
			yearResult += books[year][month];
		}
		cout << "The sales volume for the year was: " << yearResult << endl;
		yearsResult += yearResult;
	}
	cout << "The sales volume for the three years was: " << yearsResult << endl;


	return 0;
}