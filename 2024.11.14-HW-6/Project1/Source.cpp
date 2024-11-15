#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

int* initMass(int n)
{
	int* res = (int*)malloc(sizeof(int) * n);
	printf("%s\n", "Если хотите задать массив с клавиатуры — введите 2, иначе — 1.");
	bool f = true;
	while (f == true)
	{
		int b = 0;
		scanf_s("%d", &b);
		if (b == 2)
		{
			printf("%s\n", "Введите массив");
			for (int i = 0; i < n; ++i)
			{
				scanf_s("%d", &res[i]);
			}
			f = false;
			return res;
		}
		else if (b == 1)
		{
			printf("%s\n", "Если хотите задать диапазон выбора — введите 2, иначе — 1 (массив будет задан набором случайных чисел).");
			int c = 0;
			scanf_s("%d", &c);
			if (c == 2)
			{
				printf("%s\n", "Введите максимум и минимум диапазона выбора");
				int mn1 = 0;
				int mx1 = 0;
				scanf_s("%d", &mn1);
				scanf_s("%d", &mx1);
				int mx = (int)fmax(mn1, mx1);
				int mn = (int)fmin(mn1, mx1);
				for (int i = 0; i < sizeof(res); ++i)
				{
					res[i] = rand() % (mx - mn + 1) + mn;
				}
				printf("\n");
				printf("%s\n", "Сгенерированный массив:");
				for (int i = 0; i < n; ++i)
				{
					printf("%d ", res[i]);
				}
				printf("\n");
				f = false;
				return res;
			}
			else if (c == 1)
			{
				for (int i = 0; i < n; ++i)
				{
					res[i] = rand();
				}
				printf("\n");
				printf("%s\n", "Сгенерированный массив:");
				for (int i = 0; i < n; ++i)
				{
					printf("%d ", res[i]);
				}
				printf("\n");
				f = false;
				return res;
			}
			else
			{
				printf("%s\n", "Ввод не распознан, повторите попытку");
			}
		}
		else
		{
			printf("%s\n", "Ввод не распознан, повторите попытку");
		}
	}
}

void menu()
{
	printf("\n");
	printf("%s\n", "Введите цифру, соответствующую номеру необходимой операции:");
	printf("%s\n", "1 - добавление элемента в начало массива");
	printf("%s\n", "2 - добавление элемента в конец массива");
	printf("%s\n", "3 - удаление первого элемента массива");
	printf("%s\n", "4 - удаление последнего элемента массива");
	printf("\n");
}

void addBeg(int* a, int n)
{
	int* res = (int*)malloc(sizeof(int) * (n + 1));
	printf("%s\n", "Введите элемент");
	scanf_s("%d", &res[0]);
	printf("\n");
	for (int i = 0; i < n; ++i)
	{
		res[i + 1] = a[i];
	}
	printf("%s\n", "Получившийся массив:");
	for (int i = 0; i < n + 1; ++i)
	{

		printf("%d ", res[i]);
	}
	printf("\n");
}

void addEnd(int* a, int n)
{
	int* res = (int*)malloc(sizeof(int) * (n + 1));
	printf("%s\n", "Введите элемент");
	scanf_s("%d", &res[n]);
	for (int i = 0; i < n; ++i)
	{
		res[i] = a[i];
	}
	printf("%s\n", "Получившийся массив:");
	for (int i = 0; i < n + 1; ++i)
	{

		printf("%d ", res[i]);
	}
	printf("\n");
}

void delBeg(int* a, int n)
{
	int* res = (int*)malloc(sizeof(int) * (n - 1));
	for (int i = 0; i < n - 1; ++i)
	{
		res[i] = a[i + 1];
	}
	printf("%s\n", "Получившийся массив:");
	for (int i = 0; i < n - 1; ++i)
	{
		printf("%d ", res[i]);
	}
	printf("\n");
}

void delEnd(int* a, int n)
{
	int* res = (int*)malloc(sizeof(int) * (n - 1));
	for (int i = 0; i < n - 1; ++i)
	{
		res[i] = a[i];
	}
	printf("%s\n", "Получившийся массив:");
	for (int i = 0; i < n - 1; ++i)
	{
		printf("%d ", res[i]);
	}
	printf("\n");
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	printf("\n");
	srand(time(0));
	int* a = nullptr;
	int n = 0;
	printf("%s\n", "Введите число элементов массива (натуральное число).");
	scanf_s("%d", &n);
	bool f = true;
	while (f == true)
	{
		if (n > 0)
		{
			a = initMass(n);
			f = false;
		}
		else
		{
			printf("%s\n", "Ввод не распознан, повторите попытку");
		}
	}
	menu();
	int g = 0;
	scanf_s("%d", &g);
	printf("\n");
	switch(g)
	{
		case 1:
			addBeg(a, n);
			break;
		case 2:
			addEnd(a, n);
			break;
		case 3:
			delBeg(a, n);
			break;
		case 4:
			delEnd(a, n);
			break;
		default:
			break;
	}
	return 0;
}