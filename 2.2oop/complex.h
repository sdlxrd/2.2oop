#pragma once

#include <iostream>
#include <string>

using namespace std;

class complex
{
private:
	double x;
	double y;
public:
	complex();
	complex(double x, double y);
	complex(const complex&);
	~complex();

	void setx(double x) { this->x = x; }
	void sety(double y) { this->y = y; }
	double getx() { return x; }
	double gety() { return y; }

	complex& operator = (const complex&);
	operator string() const;

	friend complex operator +(const complex&, const complex&);
	friend complex operator -(const complex&, const complex&);
	friend complex operator *(const complex&, const complex&);
	friend complex operator /(const complex&, const complex&);

	complex& operator +=(const complex&);
	complex& operator -=(const complex&);
	complex& operator *=(const complex&);
	complex& operator /=(const complex&);

	friend ostream& operator << (ostream&, const complex&);
	friend istream& operator >> (istream&, complex&);

	complex& operator ++();
	complex& operator --();
	complex& operator ++(int);
	complex& operator --(int);

};

