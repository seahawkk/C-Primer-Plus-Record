#include <iostream>
#include <array>

const int ArSize = 100;

using namespace std;

int main() {
	array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = long double(1);
	for (int i = 2; i < ArSize; i++) {
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < ArSize; i++) {
		std::cout << i << "!" << factorials[i] << std::endl;
	}
	return 0;
}