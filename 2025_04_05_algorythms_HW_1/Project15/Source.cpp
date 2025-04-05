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
	int edges = 0;
	std::cin >> edges;
	bool once = true;
	for (int i = 0; i < edges; ++i)
	{
		int a = 0;
		int b = 0;
		std::cin >> a >> b;
		if (data[a][b] == 1)
		{
			once = false;
		}
		data[a][b] = 1;
	}
	bool turnir = true;
	for (int i = 1; i < verts + 1; ++i)
	{
		if (data[i][i] == 1)
		{
			turnir = false;
			break;
		}
		else
		{
			for (int j = 1; j < verts + 1; ++j)
			{
				if ((data[i][j] + data[j][i] != 1) && (i != j))
				{
					turnir = false;
				}
			}
		}
	}
	if (turnir && once)
	{
		std::cout << "YES" << "\n";
	}
	else
	{
		std::cout << "NO" << "\n";
	}
	free(data);
	return EXIT_SUCCESS;
}