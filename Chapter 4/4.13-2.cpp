#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const int ArSize = 20;
	string name, dessert;
	
	cout << "Enter your name: \n";
	getline(cin, name);
	cout << "Enter your favorite dessert: \n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << "for you, " << name << ".\n";
	return 0;
}