#include "func.h"

double rotate(Point a, Point b, Point c)
{
	return (b.x - a.x) * (c.y - b.y) - (b.y - a.y) * (c.x - b.x);
}

std::vector<Point> convex(std::vector<Point> points)
{
	if (points.size() < 3)
		return {};
	else if (points.size() < 4)
		return points;

	std::vector<int> P;
	for (int i = 0; i < points.size(); i++)
	{
		P.push_back(i);
	}

	for (int i = 1; i < points.size(); i++)
	{
		if (points[P[i]].x < points[P[0]].x)
			std::swap(P[i], P[0]);
	}

	int j = 0;
	for (int i = 2; i < points.size(); i++)
	{
		j = i;
		while (j > 1 && rotate(points[P[0]], points[P[j - 1]], points[P[j]]) < 0)
		{
			std::swap(P[j], P[j - 1]);
			j--;
		}
	}

	std::vector<int> S;
	S.push_back(P[0]);
	S.push_back(P[1]);

	for (int i = 3; i < points.size(); i++) {
		while (rotate(points[S[S.size() - 2]], points[S.back()], points[i]) < 0) 
		{
			S.pop_back();
		}
		S.push_back(i);
	}

	std::vector<Point> result;
	for (int i = 0; i < S.size(); i++)
	{
		result.push_back(points[S[i]]);
	}

	return result;
}

void calculateConvexHull()
{	std::vector<Point> points = inputPoints();
	std::vector<Point> result = convex(points);
	int i = 0;
	std::cout << "\n";
	for (Point point : result)
	{
		if(i % 10 == 0 && i != 0)
			std::cout << "(" << point.x << ", " << point.y << ")\n";
		else
			std::cout << "(" << point.x << ", " << point.y << ") ";
	}

	std::cout << std::endl << std::endl;

	system("pause");
}