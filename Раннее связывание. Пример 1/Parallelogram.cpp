#include <iostream>
#include "Parallelogram.h"
using namespace std;

Parallelogram::Parallelogram(double a, double b, double h)
{
	m_value1 = a;
	m_value2 = b;
	this->h = h;
}

void Parallelogram::ShowArea() const
{
	cout << "Area of Parallelogram: " << m_value2 * h << endl;
}
