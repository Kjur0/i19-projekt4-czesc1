#pragma once

#include <string>

using std::string;

/**
 * @class Customer
 * @brief Represents a customer with name, address, and phone number.
 */
class Customer {
private:
	string name; /**< The name of the customer. */
	string address; /**< The address of the customer. */
	string phone; /**< The phone number of the customer. */

public:
	/**
	 * @brief Constructs a new Customer object.
	 * @param n The name of the customer.
	 * @param a The address of the customer.
	 * @param p The phone number of the customer.
	 */
	Customer(string n, string a, string p);
	
	/**
	 * @brief Gets the name of the customer.
	 * @return The name of the customer.
	 */
	string getName();
	/**
	 * @brief Sets the name of the customer.
	 * @param n The new name of the customer.
	 */
	void setName(string n);

	/**
	 * @brief Gets the address of the customer.
	 * @return The address of the customer.
	 */
	string getAddress();
	/**
	 * @brief Sets the address of the customer.
	 * @param a The new address of the customer.
	 */
	void setAddress(string a);

	/**
	 * @brief Gets the phone number of the customer.
	 * @return The phone number of the customer.
	 */
	string getPhone();
	/**
	 * @brief Sets the phone number of the customer.
	 * @param p The new phone number of the customer.
	 */
	void setPhone(string p);
};