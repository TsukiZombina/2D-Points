// 2D Points.cpp : Defines the entry point for the console application.
//

#include "Point2D.h"
#include <fstream>

std::forward_list<Point2D>& readflist(std::forward_list<Point2D>& data, const char* filename);

int main()
{
	std::forward_list<Point2D> fl;
	readflist(fl, "points.txt");
	ordenamientoCircular(fl);
	for (auto& puntito : fl) {
		std::cout << puntito.getX() << " " << puntito.getY() << std::endl;
	}
	return 0;
}


std::forward_list<Point2D>& readflist(std::forward_list<Point2D>& data, const char* filename)
{
	std::ifstream ifs(filename);
	int x, y;
	Point2D point;
	if (ifs.is_open())
	{
		while (ifs >> x >> y) 
		{
			point.setX(x);
			point.setY(y);
			data.push_front(point);
		}	
		ifs.close();
		data.reverse();
	}
	else std::cerr << "Unable to open file" << std::endl;
	return data;
}