//complex.cpp
///////////////////////////////////////////////
#include "complex.h"
#include <iostream>
#include <sstream>

using namespace std;

complex::complex()
{
	x = 0;
	y = 0;
}
complex::complex(double x = 0, double y = 0)
{
	this->x = x;
	this->y = y;
}
complex::complex(const complex& f)
{
	this->x = f.x;
	this->y = f.y;
}
complex::~complex()
{}

complex& complex::operator = (const complex& f)
{
	x = f.x;
	y = f.y;

	return *this;
}

complex::operator string() const
{
	stringstream s;
	s << endl;
	s << "x = " << x << endl;
	s << "y = " << y << endl;
	return s.str();
}

complex operator + (const complex& x, const complex& y)
{
	return complex(x.x + y.x, x.y + y.y);
}
complex operator - (const complex& x, const complex& y)
{
	return complex(x.x - y.x, x.y - y.y);
}
complex operator * (const complex& x, const complex& y)
{
	return complex(x.x * y.x, x.y * y.y);
}
complex operator / (const complex& x, const complex& y)
{
	return complex(x.x / y.x, x.y / y.y);
}

complex& complex::operator +=(const complex& x)
{
	this->x += x.x;
	this->y += x.y;

	return *this;
}
complex& complex::operator -=(const complex& x)
{
	this->x -= x.x;
	this->y -= x.y;

	return *this;
}
complex& complex::operator *=(const complex& x)
{
	this->x *= x.x;
	this->y *= x.y;

	return *this;
}
complex& complex::operator /=(const complex& x)
{
	this->x /= x.x;
	this->y /= x.y;

	return *this;
}
ostream& operator << (ostream& out, const complex& x)
{
	out << string(x);
	return out;
}
istream& operator >> (istream& in, complex& x)
{
	cout << endl;
	cout << "x = "; in >> x.x;
	cout << "y = "; in >> x.y;
	cout << endl;

	return in;
}
complex complex::operator ++()
{
	x++;
	y++;

	return *this;
}
complex complex::operator --()
{
	x--;
	y--;
	return *this;
}

complex complex::operator ++(int)
{
	complex f(*this);
	x++;
	y++;

	return f;
}
complex complex::operator --(int)
{
	complex f(*this);
	x--;
	y--;

	return f;
}