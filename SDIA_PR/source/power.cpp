#include "func.h"

long double power(long double value, unsigned int exp)
{
	if (exp == 0)
		return 1;
	else if (exp == 1)
		return value;
	else if (exp % 2 == 0)
	{
		value = pow(value, 2);
		return power(value, exp / 2);
	}
	else if (exp % 2 == 1)
	{
		return (power(value, exp - 1)) * value;
	}
}

void quickPowerAlgorithm()
{
	system("cls");

	long double value = 0;
	uint exp = 0;

	std::cout << "������� �������� ��� ���������� � �������\n>> ";
	std::cin >> value;
	std::cout << "������� ������\n>> ";
	std::cin >> exp;
	std::cout << "\n" << value << " ^ " << exp << " = " << power(value, exp) << "\n\n";

	system("pause");
}