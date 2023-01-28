#include <iostream>
#include <string>
#include <limits>

int main()
{
	float x;
	float y;
	double z1 = 0;
	double z2 = 0;

	std::cout << "Enter current level: ";
	std::cin >> x;
	std::cout << "Enter target level: ";
	std::cin >> y;

	if (x <= 16)
	{
		z1 = pow(x,2) + 6 * x;
	}
	else if (x >= 17 && x <= 31)
	{
		z1 = 2.5 * pow(x, 2) - 40.5 * x + 360;
	}
	else if (x >= 32)
	{
		z1 = 4.5 * pow(x, 2) - 162.5 * x + 2220;
	}
	else
	{
		std::string z1 = "Error";
	}

	if (y <= 16)
	{
		z2 = pow(y,2) + 6 * y;
	}
	else if (y >= 17 && y <= 31)
	{
		z2 = 2.5 * pow(y, 2) - 40.5 * y + 360;
	}
	else if (y >= 32)
	{
		z2 = 4.5 * pow(y, 2) - 162.5 * y + 2220;
	}
	else
	{
		std::string z2 = "Error";
	}

	//std::cout << x << '\n' << x;
	//std::cout << z1 << '\n' << z2;


	std::cout << '\n';

	std::cout << "Current XP: " << z1 << '\n';
	std::cout << "Target XP: " << z2 << '\n';

	float z3 = z2 - z1;
	float z4 = z1 / z2 * 100;
	z4 = round(z4);

	std::cout << "XP Remaining: " << z3 << '\n';
	std::cout << "Progress: " << z4 << '%' << '\n';
	std::cout << '\n';

	system("PAUSE");

	return 0;

}