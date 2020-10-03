#include "Header.h"
#include <math.h>
using namespace System;
using namespace System :: Threading;


Point_2D::Point_2D(void)
{
    Random^ rand = gcnew Random();
    Threading::Thread::Sleep(6);
    x = rand->Next(0,100);
    y = rand->Next(0, 100);
}

Point_2D::Point_2D(int x, int y)
{
    this->x = x;
    this->y = y;

}

Point_2D::Point_2D(Point_2D^ ot)
{
    this->x = ot->x;
    this->y = ot->y;
}

double Point_2D::Length(void)
{
    return sqrt(pow(x,2) + pow(y, 2));
}

int Point_2D::operator>(Point_2D^ T)
{
    return Length() > T->Length();;
}

Point_2D^ Point_2D::operator=(Point_2D^ T)
{
	this->x = T->x;
	this->y = T->y;
	return this;
}

int Point_2D::operator==(Point_2D^ T)
{
	return this->x == T->x && this->y == T->y;
}

Point_3D::Point_3D(void)
{
    Random^ rand = gcnew Random();
    Threading::Thread::Sleep(6);
    x = rand->Next(0, 100);
    y = rand->Next(0, 100);
    z = rand->Next(0, 100);
}

Point_3D::Point_3D(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Point_3D::Point_3D(Point_3D^ ot)
{
    this->x = ot->x;
    this->y = ot->y;
    this->z = ot->z;
    
}

double Point_3D::Length(void)
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

Point_3D^ Point_3D::operator=(Point_3D^ T)
{
	this->x = T->x;
	this->y = T->y;
	this->z = T->z;
	return this;
}

int Point_3D::operator==(Point_3D^ T)
{
	return this->x == T->x && this->y == T->y && this->z == T->z;

}
