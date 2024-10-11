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
	int m = 0;
	int b[200] = { 0 };
	scanf_s("%d", &m);
	for (int i = 0; i < 2 * m; ++i)
	{
		scanf_s("%d", &b[i]);
	}
	for (int i = 0; i < 2 * m; i += 2)
	{
		for (int j = b[i] - 1; j < b[i + 1]; ++j)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;
}