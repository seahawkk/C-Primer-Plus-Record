#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> grade(3);

	cout << "Enter threed result of the 40 meters runing time: \n";
	cout << "please input your first grade: ";
	cin >> grade[0];
	cout << "please input your second grade: ";
	cin >> grade[1];
	cout << "please input your third grade: ";
	cin >> grade[2];

	double average_grade = (grade[0] + grade[1] + grade[2]) / grade.size();

	cout << "your average grade is " << average_grade << " in " << grade.size() << " times" << endl;

	return 0;
}