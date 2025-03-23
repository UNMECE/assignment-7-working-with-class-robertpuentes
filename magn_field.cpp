#include "magn_field.h"
#include <iostream>
#include <cmath>

magnetic_field::magnetic_field(){
	B = new double[3];
	B[0] = 0.0;
	B[1] = 0.0;
	B[2] = 0.0;
}

magnetic_field::magnetic_field(double x, double y, double z){
	B = new double[3];
	B[0] = x;
	B[1] = y;
	B[2] = z;
}

magnetic_field::~magnetic_field(){
	delete[] B;
}

double magnetic_field::magnitude() const {
	double sumsq = B[0]*B[0] + B[1]*B[1] + B[2]*B[2];
	return std::sqrt(sumsq);
}

void magnetic_field::printfield() const {
    std::cout << "magnetic field vector: (" << B[0] << ", " << B[1] << ", " << B[2] << ")\n";
}

void magnetic_field::printmagnitude() const {
	std::cout << "magnitude of B: " << magnitude() << std::endl;
}

void magnetic_field::printunitV() const {
	double mag = magnitude();
	if (mag == 0.0) {
		std::cout << "magnetic field is 0.\n";
		return;
	}
	double ux = B[0] / mag;
	double uy = B[1] / mag;
	double uz = B[2] / mag;
	
	std::cout << "unit vector of B: (" << ux << ", " << uy << ", " << uz << ")\n";
}
