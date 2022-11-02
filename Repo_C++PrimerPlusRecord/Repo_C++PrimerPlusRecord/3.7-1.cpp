#include <iostream>

using namespace std;
const int FootToInch = 12;

int main() {
	int intput_height = 0;
	cout << "please input your height in inch: " << "__\b\b";
	cin >> intput_height;
	int foot_in_height = intput_height / FootToInch;
	int inch_in_height = intput_height % FootToInch;

	cout << "your height in inch is: " << intput_height
		<< ", and transform to foot and inch [ "
		<< "foot: " << foot_in_height
		<< "inch: " << inch_in_height << "]";

	return 0;
}