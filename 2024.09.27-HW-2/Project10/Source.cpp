#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	if (n % 5 == 0)
	{
		printf("%d %d", n / 5, 0);
	}
	else if (n % 5 == 1)
	{
		printf("%d %d", n / 5 - 1, 2);
	}
	else if (n % 5 == 2)
	{
		printf("%d %d", n / 5 - 2, 4);
	}
	else if (n % 5 == 3)
	{
		printf("%d %d", n / 5, 1);
	}
	else if (n % 5 == 4)
	{
		printf("%d %d", n / 5 - 1, 3);
	}
	return 0;
}