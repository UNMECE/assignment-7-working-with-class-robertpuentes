#ifndef MAGN_FIELD_H
#define MAGN_FIELD_H

class magnetic_field {
	private:
		double* B;
	public:
		magnetic_field();
		magnetic_field(double x, double y, double z);
		~magnetic_field();
		double magnitude() const;
		void printfield() const;
		void printmagnitude() const;
		void printunitV() const;
};

#endif
