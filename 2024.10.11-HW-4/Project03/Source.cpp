#include <cstdio>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;
	int mn = 1001;
	int mx = -1001;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
		if (a[i] < mn)
			mn = a[i];
		if (a[i] > mx)
			mx = a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == mx)
		{
			a[i] = mn;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	return 0;
}