#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int del1 = 1;
    int del2 = 1;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    for (int i = 2; i <= fmax(a, b);)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            del1 *= i;
            a /= i;
            b /= i;
        }
        else if (a % i == 0)
        {
            del1 *= i;
            a /= i;
        }
        else if (b % i == 0)
        {
            del2 *= i;
            b /= i;
        }
        else if (fmax(a, b) == 1)
        {
            break;
        }
        else
        {
            ++i;
        }
    }
    int res = del1 * del2;
    printf("%d", res);
    return 0;
}