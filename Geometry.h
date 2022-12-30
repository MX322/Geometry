#pragma once
class Geometry
{
private:
	int h;
	int sideA;
	int sideB;
	int sideC;
	int sideD;
	float s;
	static int counter;
	
public:
	Geometry(int h, int sideA);
	Geometry(int sideA, int sideB, int sideC);

	Geometry(int sideA, int sideB, int sideC, int sideD);

	float TriangleSideAndHight();
	float TriangleHeron();

	float SquareTwoSides();
	float SquarePerimeter();

	static void ShowCounter();

	~Geometry();
};

