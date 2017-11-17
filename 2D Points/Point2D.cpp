#include "Point2D.h"

Point2D reference;

Point2D::Point2D()
{
	x = 0;
	y = 0;
}

Point2D::Point2D(int x, int y):x(x), y(y)
{
}

Point2D::~Point2D()
{
}

std::forward_list<Point2D>::iterator findMin(std::forward_list<Point2D>& pointlist)
{
	auto min = pointlist.begin();
	for (auto jt = pointlist.begin()++; jt != pointlist.end(); jt++)
	{
		if (jt->getY() < min->getY())
			min = jt;
		else if (jt->getY() == min->getY() && jt->getX() < min->getX())
			min = jt;
	}
	return min;
}

void ordenamientoCircular(std::forward_list<Point2D>& pointlist)
{
	int min = 0, size = std::distance(pointlist.begin(), pointlist.end());

	// Busco el punto con y m�nima, si hay varios de ellos
	// encuentro el punto con x m�nima:
	auto it = findMin(pointlist);

	// Intercambio el punto[minimo] con punto[0]
	std::swap(*it, *pointlist.begin());

	reference = *pointlist.begin();

	// Ordenamos los puntos!
	//pointlist.pop_front();
	pointlist.sort();
	//qsort((void *)&ptos[1], size - 1, sizeof(Point2D), compare);
}

int Point2D::getX() const
{
	return x;
}

int Point2D::getY() const
{
	return y;
}

void Point2D::setX(int x)
{
	this->x = x;
}

void Point2D::setY(int y)
{
	this->y = y;
}

bool Point2D::operator==(const Point2D & point) const
{
	if (this->x == point.getX() && this->y == point.getY())
		return true;
	else
		return false;
}

bool Point2D::operator<(const Point2D& point) const
{
	Point2D v1(this->x - reference.getX(), this->y - reference.getY());
	Point2D v2(point.getX() - reference.getX(), point.getY() - reference.getY());
	int area2, d1, d2;

	area2 = v1.getX() * v2.getY() - v1.getY() * v2.getX();

	if (area2 > 0) 
		return true;
	else if (area2 < 0) 
		return false;
	else {
		d1 = v1.getX() * v1.getX() + v1.getY() * v1.getY();
		d2 = v2.getX() * v2.getX() + v2.getY() * v2.getY();

		if (d1 < d2) 
			return true;
		else 
			return false;
	}
}
