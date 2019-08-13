#include"Compl.h"
//////////////////////////////////////////////////////////
Complex::Complex()
{
	real = 0;
	img = 0;
}
//////////////////////////////////////////////////////////
Complex::Complex(double _x, double _y)
{
	real = _x;
	img = _y;
}
//////////////////////////////////////////////////////////
Complex::~Complex()
{
}
//////////////////////////////////////////////////////////
Complex operator+(const Complex& c1, const Complex& c2)
{
	Complex sum;
	sum.real = c1.real + c2.real;
	sum.img = c1.img + c2.img;
	return sum;
}
//////////////////////////////////////////////////////////
Complex operator-(const Complex& c1, const Complex& c2)
{
	Complex diff;
	diff.real = c1.real - c2.real;
	diff.img = c1.img - c2.img;
	return diff;
}
//////////////////////////////////////////////////////////
Complex operator*(const Complex& c1, const Complex& c2)
{
	Complex result;
	result.real = c1.real * c2.real - c1.img * c2.img;
	result.img = c1.real * c2.img + c1.img * c2.real;
	return result;
}
//////////////////////////////////////////////////////////
Complex operator*(double num, const Complex& c)
{
	Complex result;
	result.real = num * c.real;
	result.img = num * c.img;
	return result;
}
//////////////////////////////////////////////////////////
Complex operator~(const Complex& c)
{
	Complex result;
	result.real = c.real;
	result.img = -c.img;
	return result;
}
//////////////////////////////////////////////////////////
std::ostream& operator<<(std::ostream& os, const Complex& c)
{
	os << "( " << c.real << " , " << c.img << "i )";
	return os;
}
//////////////////////////////////////////////////////////
std::istream& operator>>(std::istream& is, Complex& c)
{
	std::cout << "Enter the real part: ";
	is >> c.real;
	std::cout << "Enter the imaginary part: ";
	is >> c.img;
	std::cout << std::endl;
	return is;
}