#include "Service.hh"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Polish");

	string carMake, carModel, customerName, customerAddress, customerPhone;
	int carYear;
	double partsCost, laborCost;

	cout << "Creating new service..." << endl;
	cout << "Please enter the following information:" << endl;
	cout << "Enter car make: ";
	getline(cin, carMake);
	cout << "Enter car model: ";
	getline(cin, carModel);
	cout << "Enter car year: ";
	cin >> carYear;
	cin.ignore(); // Ignore the newline character left by previous input
	cout << "Enter customer name: ";
	getline(cin, customerName);
	cout << "Enter customer address: ";
	getline(cin, customerAddress);
	cout << "Enter customer phone: ";
	getline(cin, customerPhone);
	cout << "Enter parts cost: ";
	cin >> partsCost;
	cout << "Enter labor cost: ";
	cin >> laborCost;

	cout << endl << endl << "Generating new service..." << endl
		<< "Creating new car..." << endl;
	Car car(carMake, carModel, carYear);

	cout << "Car created..." << endl
		<< "Creating new customer..." << endl;
	Customer customer(customerName, customerAddress, customerPhone);

	cout << "Customer created..." << endl
		<< "Creating new service quote..." << endl;

	ServiceQuote serviceQuote(partsCost, laborCost);
	cout << "Service quote created..." << endl;

	Service service(car, customer, serviceQuote);
	cout << "Service created..." << endl;

	cout << "Service cost: " << service.getCost() << endl;

	cout << endl << endl << endl << "Press enter to exit...";
	return !!!getchar();
}