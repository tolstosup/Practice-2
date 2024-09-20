#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <conio.h>
#include <string>
#include <Windows.h>
#include <stack>

typedef unsigned int uint;
typedef struct Point
{
	int x, y;
}Point;

std::vector <Point> inputPoints();

uint defMin(uint d1, uint d2);
uint distance(std::pair<Point, Point> a);
uint distance(Point a, Point b);
std::vector<Point> sort(std::vector<Point> points, char axis);
std::vector<Point> partition(std::vector<Point> points, uint start, uint end);
std::vector<Point> xPMDelta(std::vector<Point> points, int mediane, int d);
std::pair<Point, Point> closestSplitPair(std::vector<Point> Px, std::vector<Point> Py, uint d);
std::pair<Point, Point> bestOfThree(std::pair<Point, Point> l, std::pair<Point, Point> r, std::pair<Point, Point> s);
std::pair<Point, Point> closestPair(std::vector<Point> Px, std::vector<Point> Py);
void findClosestPointPair();
//
 
unsigned int numLength(long long value);
long long multiply(long long value1, long long value2);
void multiplyBigValues();
//

int find(std::vector<int> array, int value);
std::pair<std::vector<int>, std::vector<int>> partition(std::vector<int> array, int p);
int median(std::vector<int> array, int index);
void findMedian();
//

long double power(long double value, unsigned int exp);
void quickPowerAlgorithm();
//

std::string LCS(std::string s1, std::string s2);
void findLargestCommonSubstring();
//

double rotate(Point a, Point b, Point c);
void calculateConvexHull();
//

void divideArrayMinDiffSum();
//

void divideArraySegmentsMinDiffSum();
//
