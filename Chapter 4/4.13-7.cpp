#include <iostream>
#include <string>

using namespace std;

struct Pizza {
	string company;
	double diameter;
	double weight;
};

int main() {
	Pizza pizza;

	cout << "please enter pizza company: ";
	getline(cin, pizza.company);
	cout << "please enter pizza diameter: ";
	cin >> pizza.diameter;
	cout << "please enter pizza weight: ";
	cin >> pizza.weight;

	cout << "pizza.company: " << pizza.company << "\n"
		<< "pizza.diameter: " << pizza.diameter << "\n"
		<< "pizza.weight: " << pizza.weight;

	return 0;
}