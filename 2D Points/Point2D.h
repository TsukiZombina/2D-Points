#pragma once
#include <iostream>
#include <iterator>
#include <algorithm>
#include <forward_list>

class Point2D
{
public:
	Point2D();
	Point2D(int, int);
	~Point2D();
	int getX() const;
	int getY() const;
	void setX(int);
	void setY(int);
	bool operator == (const Point2D&) const;
	bool operator<(const Point2D& point) const;
private:
	int x, y;
};
void ordenamientoCircular(std::forward_list<Point2D>&);
std::forward_list<Point2D>::iterator findMin(std::forward_list<Point2D>&);


