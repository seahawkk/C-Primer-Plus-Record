#include <iostream>

using namespace std;

int main() {
	double invest_Daphne = 100, invest_Cleo = 100;
	double profit_Daphne = 100, profit_Cleo = 100;
	int year = 0;
	do {
		profit_Daphne = profit_Daphne + invest_Daphne * 0.1;
		profit_Cleo = profit_Cleo + profit_Cleo * 0.05;
		year += 1;
	} while (profit_Cleo <= profit_Daphne);

	cout << year << " years ago, " << "\n"
		<< "profit of Cleo is: " << profit_Cleo << "\n"
		<< "profit of Daphne is: " << profit_Daphne
		<< endl;

	return 0;
}