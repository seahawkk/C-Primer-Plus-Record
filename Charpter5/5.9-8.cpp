#include <iostream>
#include <cstring>

using namespace std;

int main() {
	cout << "Enter words (to stop, type the word done): " << endl;
	char words[128] = { 0 };
	int ret = 0;
	int count = 0;
	do {
		cin >> words;
		ret = strcmp(words, "done");
		if (ret) {
			count += 1;
		}
	} while (ret != 0);

	cout << "You entered a total of " << count << " words." << endl;
	return 0;

}