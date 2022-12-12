#include <iostream>

using namespace std;

int main() {
	cout << "Enter words (to stop, type the word done): " << endl;
	string words;
	int ret = 0;
	int count = 0;
	do {
		cin >> words;
		if (words != "done") {
			count += 1;
		}
	} while (words != "done");

	cout << "You entered a total of " << count << " words." << endl;
	return 0;

}