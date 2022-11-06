#include <iostream>

using namespace std;

const int day_to_hour = 24;
const int hour_to_min = 60;
const int min_to_sec = 60;

int main() {
	long input_sec{ 0 };
	cout << "Enter the number of seconds: ";
	cin >> input_sec;
	int day = input_sec / (day_to_hour * hour_to_min * min_to_sec);
	int hour = input_sec % (day_to_hour * hour_to_min * min_to_sec) / (hour_to_min * min_to_sec);
	int min = input_sec % (day_to_hour * hour_to_min * min_to_sec) % (hour_to_min * min_to_sec) / min_to_sec;
	int sec = input_sec % (day_to_hour * hour_to_min * min_to_sec) % (hour_to_min * min_to_sec) % min_to_sec;
	cout << input_sec << "seconds = "
		<< day << "days, "
		<< hour << "hours, "
		<< min << "minutes, "
		<< sec << "seconds" << endl;

	return 0;
}