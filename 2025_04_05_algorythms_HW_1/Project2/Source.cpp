#include <iostream>
int main(int argc, char* argv[])
{
	int verts = 0;
	std::cin >> verts;
	verts++;
	int** data = new int* [verts] { 0 };
	for (int i = 0; i < verts; ++i)
	{
		data[i] = new int[verts] { 0 };
	}
	int m = 0;
	std::cin >> m;
	int from = 0;
	int to = 0;
	for (int i = 0; i < m; ++i)
	{
		std::cin >> from;
		std::cin >> to;
		data[from][to] = 1;
	}
	for (int i = 1; i < verts; ++i)
	{
		int count = 0;
		for (int j = 1; j < verts; ++j)
		{
			count += data[i][j] + data[j][i];
		}
		std::cout << count << " ";
	}
}