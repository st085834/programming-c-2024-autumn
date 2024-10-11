#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000] = { 0 };
	scanf_s("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int l = 0;
	int r = 0;
	scanf_s("%d", &l);
	scanf_s("%d", &r);
	int mx = a[l];
	int num = l;
	for (int i = l; i <= r; ++i)
	{
		if (a[i] > mx)
		{
			mx = a[i];
			num = i;
		}
	}
	printf("%d %d", mx, num);
	return 0;
}