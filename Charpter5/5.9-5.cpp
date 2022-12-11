#include <iostream>
#include <string>

using namespace std;

int main() {
	const string months[12] = {
		"Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"
	};

	int book_amount[13] = { 0 };
	int sum_book = 0;


	for (int i = 0; i < 12; i++) {
		cout << "Please input the amount of book in " << months[i] << ": ";
		cin >> book_amount[i];
		sum_book += book_amount[i];
	}

	cout << "The total amount of books in this year is " << sum_book << endl;

	return 0;
}