#include<cstdio>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	scanf_s("%d", &k);
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	if ((n % k) == 0)
	{
		printf("%d", (n / k) * 2 * m);
	}
	else if (((n % k) <= (k / 2)) && ((n / k) > 0))
	{
		printf("%d", (n / k + 1) * 2 * m - m);
	}
	else
	{
		printf("%d", (n / k + 1) * 2 * m);
	}
	return 0;
}