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
	int count = 0;
	int ind1 = 0;
	int ind2 = 0;
	int* in = (int*)malloc(sizeof(int) * verts);
	int* out = (int*)malloc(sizeof(int) * verts);
	for (int i = 1; i < verts + 1; ++i)
	{
		count = 0;
		for (int j = 1; j < verts + 1; ++j)
		{
			count += data[j][i];
		}
		if (count == 0)
		{
			in[ind1] = i;
			++ind1;
		}
	}
	for (int i = 1; i < verts + 1; ++i)
	{
		count = 0;
		for (int j = 1; j < verts + 1; ++j)
		{
			count += data[i][j];
		}
		if (count == 0)
		{
			out[ind2] = i;
			++ind2;
		}
	}
	std::cout << "\n" << ind1 << " ";
	for (int i = 0; i < ind1; ++i)
	{
		std::cout << in[i] << " ";
	}
	std::cout << "\n" << ind2 << " ";
	for (int i = 0; i < ind2; ++i)
	{
		std::cout << out[i] << " ";
	}
	free(in);
	free(out);
	free(data);
	return EXIT_SUCCESS;
}