#include "Car.hh"
#include "Customer.hh"
#include "ServiceQuote.hh"

/**
 * @class Service
 * @brief Represents a service for a car.
 * 
 * This class contains information about the car, customer, service quote, and cost of the service.
 */
class Service {
private:
	Car car; /**< The car being serviced. */
	Customer customer; /**< The customer requesting the service. */
	ServiceQuote serviceQuote; /**< The quote for the service. */

public:
	/**
	 * @brief Constructs a Service object with the given car, customer, and service quote.
	 * 
	 * @param car The car being serviced.
	 * @param customer The customer requesting the service.
	 * @param serviceQuote The quote for the service.
	 */
	Service(Car car, Customer customer, ServiceQuote serviceQuote);

	/**
	 * @brief Gets the car being serviced.
	 * 
	 * @return The car being serviced.
	 */
	Car getCar();
	/**
	 * @brief Sets the car being serviced.
	 * 
	 * @param car The car being serviced.
	 */
	void setCar(Car car);

	/**
	 * @brief Gets the customer requesting the service.
	 * 
	 * @return The customer requesting the service.
	 */
	Customer getCustomer();
	/**
	 * @brief Sets the customer requesting the service.
	 * 
	 * @param customer The customer requesting the service.
	 */
	void setCustomer(Customer customer);

	/**
	 * @brief Gets the quote for the service.
	 * 
	 * @return The quote for the service.
	 */
	ServiceQuote getServiceQuote();
	/**
	 * @brief Sets the quote for the service.
	 * 
	 * @param serviceQuote The quote for the service.
	 */
	void setServiceQuote(ServiceQuote serviceQuote);

	/**
	 * @brief Gets the cost of the service.
	 * 
	 * @return The cost of the service.
	 */
	double getCost();
};