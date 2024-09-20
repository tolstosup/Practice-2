#include "func.h"

std::vector<Point> inputPoints()
{
	std::cout << "¬ведите точки в данном формате (X1, Y1), (X2, Y2), ..., (Xn, Yn)\n>> ";
	std::vector<Point> points;
	std::string data = "", temp = "";
	Point point;
	getline(std::cin, data);
	if (data != "")
	{
		data += " ";
		for (int i = 0; i < data.size(); i++)
		{
			if (data[i] == '(' || data[i] == ')' || data[i] == ',')
			{
				data.erase(i, 1);
				i--;
			}
		}

		temp.clear();
		int k = 0;
		for (int i = 0; i < data.size(); i++)
		{
			if (data[i] >= '0' && data[i] <= '9' || data[i] == '-')
			{
				temp += data[i];
			}
			else
			{
				if (k == 0)
				{
					point.x = stoi(temp);
					k++;
				}
				else if (k == 1)
				{
					point.y = stoi(temp);
					points.push_back(point);
					k = 0;
				}
				temp = "";
			}
		}
	}

	return points;
}

uint defMin(uint d1, uint d2)
{
	return d1 < d2 ? d1 : d2;
}

uint distance(std::pair<Point, Point> a)
{
	return sqrt(pow(a.first.x - a.second.x, 2) + pow(a.first.y - a.second.y, 2));
}

uint distance(Point a, Point b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

std::vector<Point> sort(std::vector<Point> points, char axis)
{
	std::vector<Point> point = points;
	if (axis == 'x')
	{
		for (int i = 0; i < point.size(); i++)
		{
			for (int j = 0; j < point.size(); j++)
			{
				if (point[i].x < point[j].x)
				{
					std::swap(point[i], point[j]);
				}
			}
		}
	}

	else if (axis == 'y')
	{
		for (int i = 0; i < point.size(); i++)
		{
			for (int j = 0; j < point.size(); j++)
			{
				if (point[i].y < point[j].y)
				{
					std::swap(point[i], point[j]);
				}
			}
		}
	}

	return point;
}

std::vector<Point> partition(std::vector<Point> points, uint start, uint end)
{
	std::vector<Point> result;
	for (uint i = start; i < end; i++)
	{
		result.push_back(points[i]);
	}

	return result;
}

std::vector<Point> xPMDelta(std::vector<Point> points, int mediane, int d)
{
	std::vector<Point> result;
	for (Point point : points)
	{
		if (point.x > mediane - d && point.x < mediane + d)
		{
			result.push_back(point);
		}
	}

	return result;
}

std::pair<Point, Point> closestSplitPair(std::vector<Point> Px, std::vector<Point> Py, uint d)
{
	int mediane = Px[((Px.size() - 1) / 2)].x;
	uint best = (uint)mediane;
	std::pair<Point, Point> bestPair;
	std::vector<Point> Sy = sort(xPMDelta(Py, mediane, d), 'y');

	for (uint i = 0; i < (uint)Sy.size(); i++)
	{
		for (uint j = 0; j < Sy.size() - 1; j++)
		{
			if (distance(Sy[i], Sy[j]) < best && i != j)
			{
				best = distance(Sy[i], Sy[j]);
				bestPair = { Sy[i], Sy[j] };
			}
		}
	}

	return bestPair;
}

std::pair<Point, Point> bestOfThree(std::pair<Point, Point> l, std::pair<Point, Point> r, std::pair<Point, Point> s)
{
	std::vector<Point> points;
	points.push_back(l.first);
	points.push_back(l.second);
	points.push_back(r.first);
	points.push_back(r.second);
	points.push_back(s.first);
	points.push_back(s.second);

	uint d = distance({ points[0], points[1] });

	std::pair<Point, Point> result;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (distance({ points[i], points[j] }) < d && i != j && distance({ points[i], points[j] }) != 0)
			{
				d = distance({ points[i], points[j] });
				result = { points[i], points[j] };
			}
		}
	}

	return result;
}

std::pair<Point, Point> closestPair(std::vector<Point> Px, std::vector<Point> Py)
{
	if (Px.size() <= 3)
	{
		std::pair<Point, Point> result = { Px[0], Px[1] };
		uint d = distance({ Px[0], Px[1]});

		for (int i = 0; i < Px.size(); i++)
		{
			for(int j = 0; j < Px.size(); j++)
			{
				if (distance(Px[i], Px[j]) < d && i != j)
				{
					d = distance(Px[i], Px[j]);
					result = { Px[i], Px[j] };
				}
			}
		}

		return result;
	}
	else
	{
		std::vector<Point> Lx, Ly, Rx, Ry;

		Lx = partition(Px, 0, Px.size() / 2);
		Ly = partition(Py, 0, Py.size() / 2);
		Rx = partition(Px, Px.size() / 2, Px.size());
		Ry = partition(Py, Py.size() / 2, Py.size());

		std::pair<Point, Point> l, r, s;

		l = closestPair(Lx, Ly);
		r = closestPair(Rx, Ry);
		uint d = defMin(distance(l), distance(r));

		s = closestSplitPair(Px, Py, d);
		
		return bestOfThree(l, r, s);
	}
}

void findClosestPointPair()
{
	system("cls");
	
	std::vector<Point> points = inputPoints(), Px, Py;
	Px = sort(points, 'x');
	Py = sort(points, 'y');

	std::pair<Point, Point> result = closestPair(Px, Py);
	std::cout << "\nƒве ближайшие точки\n(" << result.first.x << ", " << result.first.y << ") и (" << result.second.x << ", " << result.second.y << ")\n\n";

	system("pause");
}