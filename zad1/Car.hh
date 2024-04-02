#pragma once

#include <string>

using std::string;

/**
 * @brief The Car class represents a car object.
 * 
 * This class stores information about a car, including its make, model, and year.
 */
class Car {
private:
	string make; /**< The make of the car. */
	string model; /**< The model of the car. */
	int year; /**< The year of the car. */
public:
	/**
	 * @brief Constructs a new Car object.
	 * 
	 * @param carMake The make of the car.
	 * @param carModel The model of the car.
	 * @param carYear The year of the car.
	 */
	Car(string carMake, string carModel, int carYear);
	
	/**
	 * @brief Gets the make of the car.
	 * 
	 * @return The make of the car.
	 */
	string getMake();
	/**
	 * @brief Sets the make of the car.
	 * 
	 * @param carMake The make of the car.
	 */
	void setMake(string carMake);

	/**
	 * @brief Gets the model of the car.
	 * 
	 * @return The model of the car.
	 */
	string getModel();
	/**
	 * @brief Sets the model of the car.
	 * 
	 * @param carModel The model of the car.
	 */
	void setModel(string carModel);

	/**
	 * @brief Gets the year of the car.
	 * 
	 * @return The year of the car.
	 */
	int getYear();
	/**
	 * @brief Sets the year of the car.
	 * 
	 * @param carYear The year of the car.
	 */
	void setYear(int carYear);
};