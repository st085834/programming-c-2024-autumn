#include <iostream>
int main(int argc, char* argv[])
{
	int verts = 0;
	std::cin >> verts;
	int** data = new int* [verts + 1] { 0 };
	for (int i = 0; i < verts + 1; ++i)
	{
		data[i] = new int[verts + 1] { 0 };
	}
	int from = 0;
	int to = 0;
	for (int i = 0; i < verts - 1; ++i)
	{
		std::cin >> from;
		std::cin >> to;
		data[from][to] = 1;
		data[to][from] = 1;
	}
	int* a = (int*)malloc(sizeof(int) * verts);
	int b = 0;
	int c = 0;
	int pl = 0;
	int sum = 0;
	for (int i = 1; i < verts + 1; ++i)
	{
		sum = 0;
		for (int j = 1; j < verts + 1; ++j)
		{
			if (data[i][j] == 1 || data[j][i] == 1)
			{
				sum += 2;
			}
		}
		a[i - 1] = sum / 2 + sum % 2;
	}
	int count = 0;
	for (int i = 0; i < verts; ++i)
	{
		if (a[i] == 1)
		{
			++count;
		}
	}
	std::cout << (verts - count) % verts << "\n";
	free(a);
	free(data);
	return EXIT_SUCCESS;
}