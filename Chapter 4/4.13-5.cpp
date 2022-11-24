#include <iostream>

using namespace std;

struct CandyBar {
	char logo[64];
	float weight;
	int64_t cal;
};

int main() {
	CandyBar snack{ "Mocha Munch", 2.3, 350 };
	cout << "snack.logo: " << snack.logo << "\n"
		<< "snack.weight: " << snack.weight << "\n"
		<< "snack.cal: " << snack.cal << endl;

	return 0;
}