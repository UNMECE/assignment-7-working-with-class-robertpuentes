#include <iostream>
#include "electric_field.h"
#include "magn_field.h"

int main() {
	electric_field E_default;
	E_default.printfield();
	E_default.printmagnitude();
	std::cout << std::endl;	

	electric_field E_components(15.9, 10.9, 7.2);
	E_components.printfield();
	E_components.printmagnitude();
	E_components.printinnerprod(E_default);
	std::cout << std::endl;

	magnetic_field B_components(3.0, 4.0, 12.0);
	B_components.printfield();
	B_components.printmagnitude();
	B_components.printunitV();
	std::cout << std::endl;

	magnetic_field B_default;
	B_default.printfield();
	B_default.printmagnitude();
	B_default.printunitV();
	std::cout << std::endl;

	return 0;
}
