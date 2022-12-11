#include <iostream>

using namespace std;

int main() {
	long long input_num = 0;
	long long sum_num = 0;

	cout << "Please input a number(0 quit): ";
	cin >> input_num;

	while (input_num) {
		sum_num += input_num;
		cout << "The sum of the numbers: " << sum_num << endl;
		cout << "Please input next number: ";
		cin >> input_num; 
	}

	return 0;
}