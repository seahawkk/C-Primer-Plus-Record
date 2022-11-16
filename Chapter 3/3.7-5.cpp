#include <iostream>

using namespace std;

int main() {
	long long global_human_num{ 0 };
	long long US_human_num{ 0 };
	cout << "Enter the world's population: ";
	cin >> global_human_num;
	cout << "Enter the population of the US: ";
	cin >> US_human_num;
	double percent = (double)US_human_num / global_human_num * 100;
	cout << "The population of the US is " << percent
		<< "% of the world population" << endl;
	return 0;
}