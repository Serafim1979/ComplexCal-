#ifndef COMPL_H_
#define COMPL_H_
#include<iostream>

class Complex
{
private:
	double real;
	double img;
public:
	Complex();
	Complex(double _x, double _y);
	~Complex();

	friend Complex operator+(const Complex& c1, const Complex& c2);
	friend Complex operator-(const Complex& c1, const Complex& c2);
	friend Complex operator*(const Complex& c1, const Complex& c2);
	friend Complex operator*(double num, const Complex& c2);
	friend Complex operator~(const Complex& c);

	friend std::ostream& operator<<(std::ostream& oc, const Complex& c);
	friend std::istream& operator>>(std::istream& is, Complex& c);
};

#endif // !COMPL_H_

