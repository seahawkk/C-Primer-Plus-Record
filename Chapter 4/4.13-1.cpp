#include <iostream>

using namespace std;

int main() {
	char first_name[50]{ 0 };
	char last_name[30]{ 0 };
	char grade{ 0 };
	int age = 0;

	cout << "What is your first name? ";
	cin.getline(first_name, 50);
	cout << "What is your last name? ";

	cin.getline(last_name, 30);
	cout << "What letter grade do you deserve? ";
	cin >> grade;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << "\n"
		<< "Grade: " << grade << "\n"
		<< "Age: " << age << endl;

	return 0;
}