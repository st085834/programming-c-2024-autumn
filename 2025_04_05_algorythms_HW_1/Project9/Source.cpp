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
	for (int from = 1; from < verts + 1; ++from)
	{
		int count = 0;
		std::cin >> count;
		for (int j = 0; j < count; ++j)
		{
			int to = 0;
			std::cin >> to;
			data[from][to] = 1;
		}
	}
	std::cout << verts << "\n";
	for (int i = 1; i < verts + 1; ++i)
	{
		for (int j = 1; j < verts + 1; ++j)
		{
			std::cout << data[i][j] << " ";
		}
		std::cout << "\n";
	}
	free(data);
	return EXIT_SUCCESS;
}