#include <cstdio>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] + a[(i + 1) % n] + a[(i + 2) % n] > sum)
			sum = a[i] + a[(i + 1) % n] + a[(i + 2) % n];
	}
	printf("%d", sum);
	return 0;
}