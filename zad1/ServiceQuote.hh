#pragma once

#include <string>

using std::string;

/**
 * @brief The ServiceQuote class represents a service quote for parts and labor charges.
 */
class ServiceQuote {
private:
	double partsCharges; /**< The charges for parts. */
	double laborCharges; /**< The charges for labor. */

public:
	/**
	 * @brief Constructs a new ServiceQuote object with the specified parts and labor charges.
	 * @param p The charges for parts.
	 * @param l The charges for labor.
	 */
	ServiceQuote(double p, double l);

	/**
	 * @brief Gets the charges for parts.
	 * @return The charges for parts.
	 */
	double getPartsCharges();
	/**
	 * @brief Sets the charges for parts.
	 * @param p The charges for parts.
	 */
	void setPartsCharges(double p);

	/**
	 * @brief Gets the charges for labor.
	 * @return The charges for labor.
	 */
	double getLaborCharges();
	/**
	 * @brief Sets the charges for labor.
	 * @param l The charges for labor.
	 */
	void setLaborCharges(double l);

	/**
	 * @brief Calculates the sales tax based on the given tax rate.
	 * @param taxRate The tax rate.
	 * @return The sales tax amount.
	 */
	double getSalesTax(double taxRate);
	/**
	 * @brief Calculates the total charges including sales tax based on the given tax rate.
	 * @param taxRate The tax rate.
	 * @return The total charges including sales tax.
	 */
	double getTotalCharges(double taxRate);
};