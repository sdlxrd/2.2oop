//source.cpp
//////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include "complex.h"

using namespace std;

int main()
{
	complex f;
	complex x, y;


	cout << "first: "; cin >> x;
	cout << "second: "; cin >> y;
	cout << endl;
	cout << "first + second: " << x + y << endl;
	cout << "first - second: " << x - y << endl ;
	cout << "first * second: " << x * y << endl;
	cout << "first / second: " << x / y << endl;
	cin.get();
	cin.get();
	system("cls");
	f = (x += y);
	cout << "first += second: " << f << endl;

	f = (x -= y);
	cout << "first -= second: " << f << endl;

	f = (x *= y);
	cout << "first *= second: " << f << endl;

	f = (x /= y);
	cout << "first /= second: " << f << endl;

	cin.get();
	system("cls");
	cout << "x++ : " << x++ << endl;
	cout << x << endl;
	cout << "++x : " << endl << ++x << endl;

	cout << "x-- : " << x-- << endl;
	cout << x << endl;
	cout << "--x : " << --x;
}