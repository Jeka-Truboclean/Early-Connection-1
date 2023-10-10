#pragma once
#include "Figure.h"
class Parallelogram : public Figure
{
	double h;
public:
	Parallelogram(double a, double b, double h);
	virtual void ShowArea() const;
};

