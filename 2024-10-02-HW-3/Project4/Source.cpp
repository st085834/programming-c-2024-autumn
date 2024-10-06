#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    int v = 0;
    int s = 0;
    int old = 0;
    int num = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &v);
        scanf_s("%d", &s);
        if ((s == 1) && (v > old))
        {
            old = v;
            num = i + 1;
        }
    }
    if (num == 0)
    {
        printf("%d", -1);
    }
    else
    {
        printf("%d", num);
    }
    return 0;
}