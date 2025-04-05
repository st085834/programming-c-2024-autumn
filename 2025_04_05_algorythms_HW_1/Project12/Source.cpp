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
	bool orient = false;
	for (int i = 1; i < verts + 1; ++i)
	{
		if (data[i][i] == 1)
		{
			orient = false;
			break;
		}
		else
		{
			for (int j = 1; j < verts + 1; ++j)
			{
				if (data[i][j] != data[j][i])
					orient = true;
			}
		}
	}
	if (orient)
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