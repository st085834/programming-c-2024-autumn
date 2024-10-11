#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int x = 0;
	int ans = 1001;
	int dist = 1001;
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i)
	{
		if (abs(x - a[i]) < dist)
		{
			dist = abs(x - a[i]);
			ans = a[i];
		}
		else if ((abs(x - a[i]) == dist) && (a[i] < ans))
		{
			ans = a[i];
		}
	}
	printf("%d", ans);
	return 0;
}