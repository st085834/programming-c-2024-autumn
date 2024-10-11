#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000] = { 0 };
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int x = 0;
	int count = 0;
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			++count;
		}
	}
	printf("%d", count);
	return 0;
}