#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	long long n = 0;
	long long nums[2] = { 0, 0 };
	std::cin >> n >> nums[0] >> nums[1];
	n += 1;
	long long* list[2] = { new long long[n] { 0 }, new long long[n] { 0 } };

	for (long long k = 0; k < 2; ++k)
	{
		long long num = nums[k];

		for (long long i = (long long)log2(num) + 1; i >= 0; --i)
		{
			list[k][i] = num;
			num = num % 2 == 0 ? num / 2 : (num - 1) / 2;
		}
	}
	long long index = 0;
	bool ans = false;
	for (long long i = n - 1; i >= 0 && !ans; --i)
	{
		for (long long j = n - 1; j >= 0 && !ans; --j)
		{
			if (list[0][i] == list[1][j] && list[1][j] != 0)
			{
				index = i;
				ans = true;
			}
		}
	}
	std::cout << list[0][index];
	return EXIT_SUCCESS;
}