#include "Geometry.h"
#include <iostream>
#include <math.h>

Geometry::Geometry(int h, int sideA)
{
	this->h = h;
	this->sideA = sideA;
}


Geometry::Geometry(int sideA, int sideB, int sideC)
{
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
}


Geometry::Geometry(int sideA, int sideB, int sideC, int sideD)
{
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
	this->sideD = sideD;
}


Geometry::~Geometry()
{
	std::cout << "Square: " << s << std::endl;
}


float Geometry::TriangleSideAndHight()
{
	counter++;
	return s = (h * sideA) * 0.5;
}


float Geometry::TriangleHeron()
{
	float p = (sideA + sideB + sideC) * 0.5;
	counter++;
	return s = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
}


float Geometry::SquareTwoSides()
{
	counter++;
	if (sideA == sideB && sideC == sideD && sideB == sideC)
	{
		return s = sideA * sideB;
	}
	
	else 
	{
		return s = (sideA + sideB) * 2;
	}
}


float Geometry::SquarePerimeter()
{
	float P = sideA + sideB + sideC + sideD;
	counter++;
	return s = P * P / 16;
}


int Geometry::counter = 0;

void Geometry::ShowCounter()
{
	std::cout << "Counter: " << counter << std::endl;
}

int main()
{
	Geometry MyTriangle(10, 20, 20);
	MyTriangle.TriangleHeron();

	Geometry MySquare(5, 15, 5, 15);
	MySquare.SquareTwoSides();

	Geometry::ShowCounter();
}