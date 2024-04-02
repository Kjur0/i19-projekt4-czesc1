#pragma once

#include <string>

using std::string;

/**
 * @class Car
 * @brief Represents a car with its year model, make, and speed.
 */
class Car {
private:
	int yearModel; ///< The year model of the car.
	string make; ///< The make of the car.
	int speed = 0; ///< The current speed of the car.

public:
	/**
	 * @brief Constructs a new Car object.
	 * @param carYearModel The year model of the car.
	 * @param carMake The make of the car.
	 */
	Car(int carYearModel, string carMake);

	/**
	 * @brief Gets the year model of the car.
	 * @return The year model of the car.
	 */
	int getYearModel();

	/**
	 * @brief Sets the year model of the car.
	 * @param carYearModel The year model of the car.
	 */
	void setYearModel(int carYearModel);

	/**
	 * @brief Gets the make of the car.
	 * @return The make of the car.
	 */
	string getMake();

	/**
	 * @brief Sets the make of the car.
	 * @param carMake The make of the car.
	 */
	void setMake(string carMake);

	/**
	 * @brief Gets the current speed of the car.
	 * @return The current speed of the car.
	 */
	int getSpeed();

	/**
	 * @brief Sets the current speed of the car.
	 * @param carSpeed The current speed of the car.
	 */
	void setSpeed(int carSpeed);

	/**
	 * @brief Accelerates the car by increasing its speed.
	 */
	void accelerate();

	/**
	 * @brief Decelerates the car by decreasing its speed.
	 */
	void brake();
};