#include <cstdio>

int main(int argc, char* argv[])
{
	int m[1000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		m[i] = i + 1;
	}
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	for (int i = 0; i <= (b - a) / 2; ++i)
	{
		int s = m[a - 1 + i];
		m[a - 1 + i] = m[b - 1 - i];
		m[b - 1 - i] = s;
	}
	for (int i = 0; i <= (d - c) / 2; ++i)
	{
		int t = m[c - 1 + i];
		m[c - 1 + i] = m[d - 1 - i];
		m[d - 1 - i] = t;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", m[i]);
	}
	return 0;
}