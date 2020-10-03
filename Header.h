#pragma once
using namespace System;

public ref class Point_2D
{
	int x, y;
public:
	Point_2D();
	Point_2D(int, int);
	Point_2D(Point_2D^);
	double Length();
	int operator > (Point_2D^ T);
	virtual String^ ToString()  override
	{
		return String::Format("({0}, {1})", x, y);
	}
	Point_2D ^operator =(Point_2D^ T);
	int operator == (Point_2D^ T);
};
public ref class Point_3D
{
	int x, y, z;
public:
	Point_3D(void);
	Point_3D(int, int, int);
	Point_3D(Point_3D^);
	double Length(void);
	int operator > (Point_3D^ T)
	{
		return Length() > T->Length();
	}
	virtual String^ ToString()  override
	{
		return String::Format("({0}, {1}, {2})", x, y, z);
	}
	Point_3D^ operator =(Point_3D^ T);
	int operator == (Point_3D^ T);
};

