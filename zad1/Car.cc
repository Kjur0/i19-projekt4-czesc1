#include "Car.hh"

Car::Car(string carMake, string carModel, int carYear) : make(carMake), model(carModel), year(carYear) {}

string Car::getMake() { return make; }
void Car::setMake(string carMake) { make = carMake; }

string Car::getModel() { return model; }
void Car::setModel(string carModel) { model = carModel; }

int Car::getYear() { return year; }
void Car::setYear(int carYear) { year = carYear; }