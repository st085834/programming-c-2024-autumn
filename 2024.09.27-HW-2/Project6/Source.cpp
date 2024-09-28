#include<cstdio>
#include<cmath>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	long long c = 0;
	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	scanf_s("%lld", &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("-1");
			}
			else
			{
				printf("0");
			}
		}
		else
		{
			printf("1\n%.6f", (double)(- c / (double)(b * b - 4 * a * c)));
		}
	}
	else if (b * b - 4 * a * c > 0)
	{
		printf("2\n%.6f\n%.6f", (double)((-b + sqrt(b * b - 4 * a * c)) / (double)(2 * a)), (double)((-b - sqrt(b * b - 4 * a * c)) / (double)(2 * a)));
	}
	else if (b * b - 4 * a * c == 0)
	{
		printf("1\n%.6f", (double)(- b / (2 * (double)a)));
	}
	else if (b * b - 4 * a * c < 0)
	{
		printf("0");
	}
	return 0;
}