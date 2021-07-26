#include <iostream>

extern int a, b, c, d;
extern float e;


int main()
{
	//Задание №1/4
	e = a * (b + (static_cast <float> (c) / d));
	std::cout << e << '\n';

	//Задание №2
	int f = 22;
	int g = ((f <= 21) ? 21 - f : (2 * (f - 21)));
	std::cout << g << '\n';

	//Задание №3
	int array[3][3][3] = { {{1, 2, 3},{1, 2, 3},{1, 2, 3}} , {{1, 2, 3},{1, 111, 3},{1, 2, 3}} , {{1, 2, 3},{1, 2, 3},{1, 2, 3}} };
	int *ptr;
	ptr = &array[1][1][1];
	std::cout << *ptr;

	return 0;
}


