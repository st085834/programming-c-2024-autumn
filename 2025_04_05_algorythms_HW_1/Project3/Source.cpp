#include <iostream>
int main(int argc, char* argv[])
{
	int verts = 0;
	std::cin >> verts;
	int count1 = 0;
	int** data = new int* [verts] { 0 };
	for (int i = 0; i < verts; ++i)
	{
		data[i] = new int[verts] { 0 };
	}
	for (int i = 0; i < verts; ++i)
	{
		for (int j = 0; j < verts; ++j)
		{
			std::cin >> data[i][j];
			if (data[i][j] == 1)
				count1++;
		}
	}
	int* a = (int*)malloc(sizeof(int) * verts);
	for (int i = 0; i < verts; ++i)
	{
		std::cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i < verts; ++i)
	{
		for (int j = 0; j < verts; ++j)
		{
			if (data[i][j] == 1 && a[i] == a[j])
			{
				++count;
				data[i][j] = 0;
				data[j][i] = 0;
			}
		}
	}
	std::cout << count1 / 2 - count << "\n";
	free(a);
	free(data);
	return EXIT_SUCCESS;
}