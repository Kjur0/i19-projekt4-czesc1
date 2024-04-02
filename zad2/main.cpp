#include "Car.hh"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Polish");

	int yearModel;
	string make;

	cout << "Creating new car..." << endl;
	cout << "Please enter the following information:" << endl;
	cout << "Enter car year model: ";
	cin >> yearModel;
	cout << "Enter car make: ";
	cin.ignore();
	getline(cin, make);

	Car car(yearModel, make);
	cout << "Car created..." << endl;

	cout << endl << endl << endl;

	cout << "Car year model: " << car.getYearModel() << endl;
	cout << "Car make: " << car.getMake() << endl;
	cout << "Current Car speed: " << car.getSpeed() << endl << endl << endl;

	for (int i = 0; i < 5; i++) {
		car.accelerate();
		cout << "Accelerating..." << endl <<
			"Current speed: " << car.getSpeed() << endl;
	}

	cout << endl;

	for (int i = 0; i < 5; i++) {
		car.brake();
		cout << "Braking..." << endl <<
			"Current speed: " << car.getSpeed() << endl;
	}

	cout << endl << endl << "Press enter to exit...";
	return !!!getchar();
}