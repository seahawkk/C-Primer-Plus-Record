#include <iostream>
#include <vector>

using namespace std;

struct CarInfo {
	char make[64];
	int year;
};

int main() {
	int car = 0;
	cout << "How many cars do you wish to catalog? ";
	cin >> car;
	
	vector<CarInfo> car_info(car);
	for (int i = 0; i < car; i++) {
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		cin.get();
		cin.getline(car_info[i].make, sizeof(car_info[i].make));
		cout << "Please enter the year: ";
		cin >> car_info[i].year;
	}

	cout << "Here is your collection:" << endl;
	for (int j = 0; j < car; j++) {
		cout << car_info[j].year << " " << car_info[j].make << endl;
	}

	return 0;
}
