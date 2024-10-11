#include <cstdio>

int main(int argc, char* argv[])
{
	int a[100] = { 0 };
	int n = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}
	int x = 0;
	scanf_s("%d", &x);
	int num = 0;
	while ((a[num] >= x) && (num <= sizeof(a)))
	{
		++num;
	}
	printf("%d", num + 1);
	return 0;
}