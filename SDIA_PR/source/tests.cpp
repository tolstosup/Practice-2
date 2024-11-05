#include "func.h"

void asimpCompl()
{
	std::cout << "Тестирование\n\n";
	std::ofstream out;
	out.open("output.txt");

	std::map<uint, double> res;
	std::map<uint, double>(*func[8])() = { test_1, test_2, test_3, test_4, test_5, test_6, test_7, test_8 };

	int j = 0;

	auto start = std::chrono::high_resolution_clock::now();

	for (auto f : func)
	{
		auto start2 = std::chrono::high_resolution_clock::now();
		res = f();

		for (auto i : res)
		{
			out << i.first << " " << std::fixed << i.second << "\n";
		}
		out << "endOfTest #" << j + 1 << "\n\n";

		auto end2 = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration2 = end2 - start2;

		std::cout << "На выполнение теста #" << j + 1 << " было затрачено " << duration2.count() << " секунд\n";

		j++;
	}

	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> duration = end - start;
	std::cout << "\nНа тестирование было затрачено " << duration.count() << " секунд" << "\n\n";

	out.close();

	system("DataToGraph.exe");
	system("pause");
}

std::map<uint, double> test_1()
{
	std::map<uint, double> data;

	for (uint i = 1; i <= 1000; i += 1) 
	{

		std::vector<Point> points;
		srand(time(NULL));
		for (int j = 0; j < i; j++)
		{
			int x = rand();
			int y = rand();
			Point point = { x, y };
			points.push_back(point);
		}

		std::vector<Point> Px = points, Py = points;

		auto start = std::chrono::high_resolution_clock::now();

		std::sort(Px.begin(), Px.end(), &compareX);
		std::sort(Py.begin(), Py.end(), &compareY);

		closestPair(Px, Py);

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		data.insert({ i, duration.count() });
	}

	return data;
}

std::map<uint, double> test_2()
{
	std::map<uint, double> data;

	for (uint i = 1; i <= 1000; i += 1)
	{

		srand(time(NULL));
		long long val1 = 0, val2 = 0;
		for (int j = 0; j < i; j++)
		{
			val1 += (rand() % 9 + 1) * std::pow(10, j);
			val2 += (rand() % 9 + 1) * std::pow(10, j);
		}

		auto start = std::chrono::high_resolution_clock::now();

		multiply(val1, val2);

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		data.insert({ i, duration.count() });
	}

	return data;
}

std::map<uint, double> test_3()
{
	std::map<uint, double> data;

	for (uint i = 1; i <= 1000; i += 1)
	{

		std::vector<int> array;
		srand(time(NULL));
		for (int j = 0; j < i; j++)
		{
			int val = rand();
			array.push_back(val);
		}

		auto start = std::chrono::high_resolution_clock::now();

		median(array, array.size() / 2);

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		data.insert({ i, duration.count() });
	}

	return data;
}

std::map<uint, double> test_4()
{
	std::map<uint, double> data;

	for (uint i = 1; i <= 1000; i += 1)
	{

		long double val = rand();
		unsigned int exp = rand() % 100 + 1;

		auto start = std::chrono::high_resolution_clock::now();

		power(val, exp);

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		data.insert({ i, duration.count() });
	}

	return data;
}

std::map<uint, double> test_5()
{
	std::map<uint, double> data;

	for (uint i = 1; i <= 1000; i += 1)
	{
		std::string str1, str2;
		srand(time(NULL));
		for (int j = 0; j < i; j++)
		{
			char c = rand();
			str1 += c;
			c = rand();
			str2 += c;
		}

		auto start = std::chrono::high_resolution_clock::now();

		LCS(str1, str2);

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		data.insert({ i, duration.count() });
	}

	return data;
}

std::map<uint, double> test_6()
{
	std::map<uint, double> data;

	for (uint i = 1; i <= 1000; i += 1)
	{

		std::vector<Point> points, Px, Py;
		srand(time(NULL));
		for (int j = 0; j < i; j++)
		{
			int x = rand();
			int y = rand();
			Point point = { x, y };
			points.push_back(point);
		}

 		auto start = std::chrono::high_resolution_clock::now();

		convex(points);

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		data.insert({ i, duration.count() });
	}

	return data;
}

std::map<uint, double> test_7()
{
	std::map<uint, double> data;

	for (uint i = 1; i <= 1000; i += 1)
	{

		std::vector<int> array;
		srand(time(NULL));
		for (int j = 0; j < i; j++)
		{
			int val = rand();
			array.push_back(val);
		}

		auto start = std::chrono::high_resolution_clock::now();

		divide(array);

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		data.insert({ i, duration.count() });
	}

	return data;
}

std::map<uint, double> test_8()
{
	std::map<uint, double> data;

	for (uint i = 1; i <= 1000; i += 1)
	{

		std::vector<int> array;
		srand(time(NULL));
		for (int j = 0; j < i; j++)
		{
			int val = rand();
			array.push_back(val);
		}
		unsigned int k = rand() % 10 + 2;
		auto start = std::chrono::high_resolution_clock::now();

		segments(array, k);

		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double> duration = end - start;

		data.insert({ i, duration.count() });
	}

	return data;
}
