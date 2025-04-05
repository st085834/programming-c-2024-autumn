#include<iostream>
int main(int argc, char* argv[])
{
	int verts = 0;
	std::cin >> verts;
	int num1 = 0;
	int num2 = 0;
	std::cin >> num1 >> num2;
	int ans = 0;
	int** data = new int* [verts + 1] { 0 };
	for (int i = 0; i < verts + 1; ++i)
	{
		data[i] = new int[2] { 0 };
	}
	if (verts <= 2)
	{
		ans = 1;
	}
	for (int i = 2; i < verts + 1; ++i)
	{
		int num = 0;
		std::cin >> num;
		data[i][0] = i;
		data[i][1] = num;
	}
	while (true)
	{
		if (num1 == num2)
			break;
		else if (num1 > num2)
			num1 = data[std::max(num1, num2)][1];
		else
			num2 = data[std::max(num1, num2)][1];
	}
	std::cout << num1 << "\n";
	free(data);
	return EXIT_SUCCESS;
}