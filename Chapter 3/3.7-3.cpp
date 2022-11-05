#include <iostream>

using namespace std;

const int deg_to_min = 60;
const int min_to_sec = 60;

int main() {
	float latitude_deg{ 0 };
	float latitude_min{ 0 };
	float latitude_sec{ 0 };
	cout << "Enter a latitude in degrees, minutes, and seconds: \n"
		<< "First enter the degrees: ";
	cin >> latitude_deg;
	cout << "Next, enter the minutes: ";
	cin >> latitude_min;
	cout << "Finally, enter the seconds: ";
	cin >> latitude_sec;
	float latitude_in_deg = latitude_deg + latitude_min / deg_to_min + latitude_sec / (deg_to_min * min_to_sec);
	cout << latitude_deg << "degrees, " << latitude_min << "minutes, " << latitude_sec << "seconds = "
		<< latitude_in_deg << " degress";

	return 0;
}
