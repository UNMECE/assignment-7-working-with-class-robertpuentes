#include "electric_field.h"
#include <iostream>
#include <cmath>

electric_field::electric_field(){
	E = new double[3];
	E[0] = 0.0;
	E[1] = 0.0;
	E[2] = 0.0;
}

electric_field::electric_field(double x, double y, double z){
	E = new double[3];
	E[0] = x;
	E[1] = y;
	E[2] = z;
}

electric_field::~electric_field(){
	delete[] E;
}

double electric_field::magnitude() const {
	double sumsq = E[0]*E[0] + E[1]*E[1] + E[2]*E[2];
	return std::sqrt(sumsq);
}

double electric_field::innerprod(const electric_field &other) const {
	return (E[0]*other.E[0] + E[1]*other.E[1] + E[2]*other.E[2]);
}

void electric_field::printfield() const {
	std:: cout <<"electric field vector: (" << E[0] << ", " << E[1] << ", " << E[2] << ")\n";
}

void electric_field::printmagnitude() const {
	std::cout << "magnitude of E: " << magnitude() << std::endl;
}

void electric_field::printinnerprod(const electric_field &other) const {
	std::cout << "inner product with E: " << innerprod(other) << std::endl;
}
