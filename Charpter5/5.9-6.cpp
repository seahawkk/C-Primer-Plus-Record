#include <iostream>

using namespace std;

int main() {
	const string months[12] = {
		"Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"
	};

	int books_amount[3][12] = { 0,0,0 };
	int sum_books[3] = { 0 };
	int total_books = 0;

	for (int i = 0; i < 3; i++) {
		cout << "Please input the amount of book in " << i + 1 << " year" << endl;
		for (int j = 0; j < 12; j++) {
			cout << "Please input the amount of book in " << months[j] << ": ";
			cin >> books_amount[i][j];
			sum_books[i] += books_amount[i][j];
		}
		total_books += sum_books[i];
		cout << "The total amount of books in" << i << " year is " << sum_books[i] << endl;
	}

	cout << "The total amount of books in three years is " << total_books << endl;

	return 0;
}