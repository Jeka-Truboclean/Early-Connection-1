#include <iostream>
#include "Trapezoid.h"
using namespace std;

Trapezoid::Trapezoid(double a, double b, double h)
{
	m_value1 = a;
	m_value2 = b;
	this->h = h;
}

void Trapezoid::ShowArea() const
{
	cout << "S: " << (m_value1 + m_value2) * h / 2 << endl;
}
