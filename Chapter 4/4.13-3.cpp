#include <iostream>
#include <cstring>

#ifdef _WIN32
#include <Windows.h>
#endif // _WIN32

using namespace std;

int main() {
	char first_name[50]{ 0 };
	char last_name[50]{ 0 };
	char full_name[50]{ 0 };

	cout << "Enter your first name: ";
	cin.getline(first_name, 40);
	cout << "Enter your last name: ";
	cin.getline(last_name, 40);
#ifdef _WIN32
	strcat_s(full_name, first_name);
	strcat_s(full_name, ", ");
	strcat_s(full_name, last_name);
#else
	strcat(full_name, first_name);
	strcat(full_name, ", ");
	strcat(full_name, last_name);
#endif // _WIN32

	cout << "Here's the information in a single string: " << full_name << endl;

	return 0;
}