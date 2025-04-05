#include<iostream>
int main(int argc, char* argv[])
{
	int verts = 0;
	std::cin >> verts;
	int** data = new int* [verts + 1] { 0 };
	for (int i = 0; i < verts + 1; ++i)
	{
		data[i] = new int[verts + 1] { 0 };
	};
	for (int i = 1; i < verts + 1; ++i)
	{
		for (int j = 1; j < verts + 1; ++j)
		{
			std::cin >> data[i][j];
		}
	}
	int count = 0;
	for (int i = 1; i < verts + 1; ++i)
	{
		for (int j = 1; j < verts + 1; ++j)
		{
			count += (data[i][j] == 0 ? 0 : 1);
		}
	}
	std::cout << verts << " " << count << "\n";
	for (int i = 1; i < verts + 1; ++i)
	{
		for (int j = 1; j < verts + 1; ++j)
		{
			if (data[i][j] != 0)
			{
				std::cout << i << " " << j << "\n";
			}
		}
	}
	return EXIT_SUCCESS;
}