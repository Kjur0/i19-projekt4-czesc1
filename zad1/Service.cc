#include "Service.hh"

Service::Service(Car car, Customer customer, ServiceQuote serviceQuote) : car(car), customer(customer), serviceQuote(serviceQuote) {}

Car Service::getCar() { return car; }
void Service::setCar(Car car) { this->car = car; }

Customer Service::getCustomer() { return customer; }
void Service::setCustomer(Customer customer) { this->customer = customer; }

ServiceQuote Service::getServiceQuote() { return serviceQuote; }
void Service::setServiceQuote(ServiceQuote serviceQuote) { this->serviceQuote = serviceQuote; }

double Service::getCost() {
	double taxRate = 0.23;
	return serviceQuote.getTotalCharges(taxRate);
}