#include <iostream>
#include <cmath>

using namespace std;

// 英寸转米
const float inch_to_meter = 0.0254;
// 千克转磅
const float kg_to_lb = 2.2;
// 英尺转英寸
const int foot_to_inch = 12;

int main() {
	float height_foot{ 0 };
	float height_inch{ 0 };
	float weight{ 0 };
	cout << "please input your height in foot: ";
	cin >> height_foot;
	cout << "\nplease input your height in inch: ";
	cin >> height_inch;
	cout << "\nplease input your weight in pound: ";
	cin >> weight;
	float height_in_inch = height_foot * foot_to_inch + height_inch;
	float height_in_meter = height_in_inch * inch_to_meter;
	float weight_in_kg = weight / kg_to_lb;
	cout << "your height in inch is: " << height_in_inch << "\n"
		<< "your height in meter is: " << height_in_meter << "\n";
	cout << "your weight in kg is: " << weight_in_kg << "\n";

	float BMI = weight_in_kg / pow(height_in_meter, 2);
	cout << "your BMI is: " << BMI << endl;

	return 0;
}#include <iostream>
#include <cmath>

using namespace std;

// 英寸转米
const float inch_to_meter = 0.0254;
// 千克转磅
const float kg_to_lb = 2.2;
// 英尺转英寸
const int foot_to_inch = 12;

int main() {
	float height_foot{ 0 };
	float height_inch{ 0 };
	float weight{ 0 };
	cout << "please input your height in foot: ";
	cin >> height_foot;
	cout << "\nplease input your height in inch: ";
	cin >> height_inch;
	cout << "\nplease input your weight in pound: ";
	cin >> weight;
	float height_in_inch = height_foot * foot_to_inch + height_inch;
	float height_in_meter = height_in_inch * inch_to_meter;
	float weight_in_kg = weight / kg_to_lb;
	cout << "your height in inch is: " << height_in_inch << "\n"
		<< "your height in meter is: " << height_in_meter << "\n";
	cout << "your weight in kg is: " << weight_in_kg << "\n";

	float BMI = weight_in_kg / pow(height_in_meter, 2);
	cout << "your BMI is: " << BMI << endl;

	return 0;
}