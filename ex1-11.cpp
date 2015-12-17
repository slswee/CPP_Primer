/*
* C++ primer Ex 1.11
* page 39
*/
#include <iostream>

int main()
{
	int n1 = 0;
	int n2 = 0;
	std::cout << " enter two numbers" << std::endl;
	std::cin >> n1 >> n2;

	if (n1 == n2)
		std::cout << n1 << std::endl;
	else if (n1 < n2)
	{
		while (n1 <= n2)
		{
			std::cout << n1 << " " ;
			++n1;
		}
	}
	else
	{
		while (n2 <= n1)
		{
			std::cout << n1 << " " ;
			--n1;
		}
	}

	return 0;
}
