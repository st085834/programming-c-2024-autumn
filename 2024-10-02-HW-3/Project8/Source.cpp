#include <cstdio>
int main(int argc, char* argv[])
{
    int i = 0;
    int j = 0;
    scanf_s("%d", &i);
    scanf_s("%d", &j);
    while (j != 0)
    {
        int a = j;
        j = i % j;
        i = a;
    }
    int f0 = 1;
    int f1 = 1;
    int f = 0;
    for (int k = 2; k < i; ++k)
    {
        f = (f0 + f1) % 1000000000;
        f0 = f1;
        f1 = f;
    }
    printf("%d", f1);
    return 0;
}