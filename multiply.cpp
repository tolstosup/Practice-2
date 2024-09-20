#include "func.h"

unsigned int numLength(long long value)
{
	if (value == 0)
		return 1;

	unsigned int result = 0;
	while (value)
	{
		result++;
		value /= 10;
	}

	return result;
}

long long multiply(long long value1, long long value2)
{
	long long length = numLength(value1);

	if (length <= 2)
		return value1 * value2;
	else
	{
		long long a = 0, b = 0, c = 0, d = 0;

		int m = length / 2;
		long long exp = pow(10, m);

		a = value1 / exp;
		b = value1 % exp;
		c = value2 / exp;
		d = value2 % exp;

		long long z2 = 0, z1 = 0, z0 = 0;
		if (m > 2)
		{
			z2 = multiply(a, c);
			z0 = multiply(b, d);
			z1 = ((a + b) * (c + d)) - z2 - z0;
		}
		else
		{
			z2 = a * c;
			z0 = b * d;
			z1 = ((a + b) * (c + d)) - z2 - z0;
		}

		return (z2 * (pow(10, 2 * m))) + (z1 * (pow(10, m))) + z0;
	}
}

void multiplyBigValues()
{
	long long val1 = 0, val2 = 0;

	system("cls");

	std::cout << "¬ведите значени€ дл€ получени€ их произведени€\n>> ";
	std::cin >> val1;
	std::cout << ">> ";
	std::cin >> val2;
	std::cout << "\n" << val1 << " * " << val2 << " = " << multiply(val1, val2) << "\n\n";

	system("pause");
}