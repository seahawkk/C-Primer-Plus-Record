#include <iostream>

struct CandyBar {
	char logo[64];
	float weight;
	int64_t cal;
};

int main() {
	using namespace std;

	CandyBar* snack = new CandyBar [3] 
	{
		{"Mocha Munch1", 2.3, 350},
		{"Mocha Munch2", 2.4, 360},
		{"Mocha Munch3", 2.5, 370}
	};

	cout << "snack[0].logo: " << snack[0].logo << " snack[0].weight: " << snack[0].weight << " snack[0].cal: " << snack[0].cal << "\n"
		<< "snack[1].logo: " << snack[1].logo << " snack[1].weight: " << snack[1].weight << " snack[1].cal: " << snack[1].cal << "\n"
		<< "snack[2].logo: " << snack[2].logo << " snack[2].weight: " << snack[2].weight << " snack[2].cal: " << snack[2].cal << "\n";

	delete [] snack;

	return 0;
}