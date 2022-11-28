#include <iostream>

using namespace std;

int main() {
	int small_int = 0, big_int = 0;
	cout << "Please input two integers, the small int is: ";
	cin >> small_int;
	cout << "the big int is: ";
	cin >> big_int;
	int sum = 0;
	for (int i = small_int; i <= big_int; i++) {
		sum += i;
	}
	cout << "The sum between " << small_int << " and " << big_int << " is " << sum;
	return 0;
}