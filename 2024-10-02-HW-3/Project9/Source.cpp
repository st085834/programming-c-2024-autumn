#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &d);
    int x1 = 101;
    int x2 = 101;
    int x3 = 101;
    for (int i = -100; i <= 100; ++i)
    {
        if (((a * pow(i, 3) + b * pow(i, 2) + c * i + d) == 0) && (x1 == 101))
        {
            x1 = i;
        }
        else if (((a * pow(i, 3) + b * pow(i, 2) + c * i + d) == 0) && (x2 == 101))
        {
            x2 = i;
        }
        else if (((a * pow(i, 3) + b * pow(i, 2) + c * i + d) == 0) && (x3 == 101))
        {
            x3 = i;
        }
    }
    if (x1 != 101)
    {
        printf("%d ", x1);
    }
    if (x2 != 101)
    {
        printf("%d ", x2);
    }
    if (x3 != 101)
    {
        printf("%d", x3);
    }
    return 0;
}