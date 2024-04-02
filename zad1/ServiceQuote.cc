#include "ServiceQuote.hh"

ServiceQuote::ServiceQuote(double p, double l) : partsCharges(p), laborCharges(l) {}

double ServiceQuote::getPartsCharges() { return partsCharges; }
void ServiceQuote::setPartsCharges(double p) { partsCharges = p; }

double ServiceQuote::getLaborCharges() { return laborCharges; }
void ServiceQuote::setLaborCharges(double l) { laborCharges = l; }

double ServiceQuote::getSalesTax(double taxRate) { return taxRate * partsCharges; }
double ServiceQuote::getTotalCharges(double taxRate) { return partsCharges + laborCharges + getSalesTax(taxRate); }