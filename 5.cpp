#include <iostream>
#include <string>

using namespace std;

int main() {
	const char* month[] = {"January","February", "March", "April", 
							 "May", "June", "July", "August", 
							 "September", "October", "November", "December"};

	//char month[mon]       { "January", "February", "March", // вариант инициализации символьного массива
	//					       "April",   "May",      "June",
	//						   "July",    "August",   "September",
	//						   "October", "November", "December" };

   //const string month[mon]{ "January", "February", "March", // вариант инициализации строчного массива
   //						 "April",   "May",      "June",
   //						 "July",    "August",   "September",
   //						 "October", "November", "December" };

	const int mon = 12;
	int books[mon];
	int result = 0;
	cout << "Enter the number of books sold per month:\n";
	for (int i = 0; i < mon; i++) {
		cout << month[i] << ": ";
		cin >> books[i];
		result += books[i];
	}
	cout << "The sales volume for the year was: " << result << endl;
	
	return 0;
}