#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    int a = 0;
    int count = 0;
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a);
        if (a > 0)
        {
            ++count;
            if (count > mx)
            {
                mx = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    printf("%d", mx);
    return 0;
}