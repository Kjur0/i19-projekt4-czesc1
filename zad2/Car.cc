#include "Car.hh"

Car::Car(int carYearModel, string carMake) : yearModel(carYearModel), make(carMake) { speed = 0; };

int Car::getYearModel() { return yearModel; }
void Car::setYearModel(int carYearModel) { yearModel = carYearModel; }

string Car::getMake() { return make; }
void Car::setMake(string carMake) { make = carMake; }

int Car::getSpeed() { return speed; }
void Car::setSpeed(int carSpeed) { speed = carSpeed; }

void Car::accelerate() { speed += 5; }
void Car::brake() { speed -= 5; }