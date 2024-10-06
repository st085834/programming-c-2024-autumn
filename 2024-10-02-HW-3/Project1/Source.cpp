#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int n = 0;
    int a = 0;
    int count1 = 0;
    int count2 = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a);
        if (a == 0)
        {
            ++count1;
        }
        else
        {
            ++count2;
        }
    }
    printf("%d", (int)fmin(count1, count2));
    return 0;
}