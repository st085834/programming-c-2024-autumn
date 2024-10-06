#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    int a = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a);
        if (a <= 437)
        {
            printf("%s %d", "Crash", i + 1);
            break;
        }
        if (i == n - 1)
        {
            printf("%s", "No crash");
        }
    }
    return 0;
}