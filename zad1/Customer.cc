#include "Customer.hh"

Customer::Customer(string n, string a, string p) : name(n), address(a), phone(p) {}

string Customer::getName() { return name; }
void Customer::setName(string n) { name = n; }

string Customer::getAddress() { return address; }
void Customer::setAddress(string a) { address = a; }

string Customer::getPhone() { return phone; }
void Customer::setPhone(string p) { phone = p; }