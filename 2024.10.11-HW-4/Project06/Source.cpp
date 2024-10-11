#include <cstdio>

int main(int argc, char* argv[])
{
	int a[200] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < 2 * n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int sum = 0;
	int num = 1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] * a[n + i] > sum)
		{
			sum = a[i] * a[n + i];
			num = i + 1;
		}
	}
	printf("%d", num);
	return 0;
}