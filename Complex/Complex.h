#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	Complex(int = 0, int = 0);//deflaut construct
	Complex operator+(const Complex &)const; //addition
	Complex operator-(const Complex &)const; //subtraction
	Complex operator*(const Complex &)const; //multiplication
	Complex operator/(const Complex &)const; //division
	friend Complex &operator<<(ostream &, const Complex &);


private:
	int real;
	int imaginary;
};
#endif