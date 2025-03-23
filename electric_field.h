#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

class electric_field {
	private:
		double* E;
	public:
		electric_field();
		electric_field(double x, double y, double z);
		~electric_field();
		double magnitude() const;
		double innerprod(const electric_field &other) const;
		void printfield() const;
		void printmagnitude() const;
		void printinnerprod(const electric_field &other) const;
};

#endif
