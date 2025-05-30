#include<iostream>
int main(int argc, char* argv[])
{
	int verts = 0;
	std::cin >> verts;
	int** data = new int* [verts + 1] { 0 };
	for (int i = 0; i < verts + 1; ++i)
	{
		data[i] = new int[verts + 1] { 0 };
	}
	for (int i = 1; i < verts + 1; ++i)
	{
		for (int j = 1; j < verts + 1; ++j)
		{
			std::cin >> data[i][j];
		}
	}
	int* a = (int*)malloc(sizeof(int) * (verts + 1));
	int count = 0;
	for (int i = 1; i < verts + 1; ++i)
	{
		count = 0;
		for (int j = 1; j < verts + 1; ++j)
		{
			if (data[i][j] != 0)
			{
				++count;
			}
		}
		a[i] = count;
	}
	std::cout << "\n";
	bool reg = true;
	count = a[1];
	for (int i = 1; i < verts + 1; ++i)
	{
		if (a[i] != count)
			reg = false;
	}
	if (reg)
	{
		std::cout << "YES" << "\n";
	}
	else
	{
		std::cout << "NO" << "\n";
	}
	free(a);
	free(data);
	return EXIT_SUCCESS;
}