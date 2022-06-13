#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int sum = 0;
	int i = 1;

	while ((i <= n) && (i % 2 == 0)) {

		sum = sum + i;
		i = i + 1;
	}

	std::cout << sum;
}
