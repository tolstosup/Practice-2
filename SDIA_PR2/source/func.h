#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
//#include <Windows.h>
#include <stack>
#include <chrono>
#include <map>
#include <ctime>
#include <fstream>

typedef unsigned int uint;
typedef struct Point
{
	int x, y;
}Point;

std::vector <Point> inputPoints();

bool compareX(Point a, Point b);
bool compareY(Point a, Point b);
uint defMin(uint d1, uint d2);
uint distance(std::pair<Point, Point> a);
uint distance(Point a, Point b);
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

std::string LCS(const std::string text1, const std::string text2);
void findLargestCommonSubstring();
//

double rotate(Point a, Point b, Point c);
std::vector<Point> convex(std::vector<Point> points);
void calculateConvexHull();
//

void output(std::vector<int> a);
bool compare(int a, int b);
std::pair<std::vector<int>, std::vector<int>> divide(std::vector<int> arr);
void divideArrayMinDiffSum();
//

bool compareVal(int a, int b);
std::vector<std::vector<int>> segments(std::vector<int> arr, unsigned int n);
void divideArraySegmentsMinDiffSum();
//

std::map<uint, double> test_1();
std::map<uint, double> test_2();
std::map<uint, double> test_3();
std::map<uint, double> test_4();
std::map<uint, double> test_5();
std::map<uint, double> test_6();
std::map<uint, double> test_7();
std::map<uint, double> test_8();
void asimpCompl();
//