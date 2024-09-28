#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    (double)a;
    (double)b;
    (double)c;
    if (a == 0) 
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("%d", -1);
            }
            else
            {
                printf("%d", 0);
            }
        }
        else
        {
            if (c == 0)
            {
                printf("%d\n""%d", 1, 0);
            }
            else
            {
                printf("%d\n""%f", 1, (double)(- 1 * c) / b);
            }
        }
    }
    else
    {
        if (b == 0)
        {
            if (a > 0)
            {
                if (c == 0)
                {
                    printf("%d\n""%d", 1, 0);
                }
                else if (c > 0)
                {
                    printf("%d", 0);
                }
                else if (c < 0)
                {
                    printf("%d\n""%f\n""%f", 2, (double)(sqrt(-1 * c / a)), (double)(- 1 * sqrt(-1 * c / a)));
                }
                }
            else
            {
                if (c == 0)
                {
                    printf("%d\n""%d", 1, 0);
                }
                else if (c > 0)
                {
                    printf("%d\n""%f\n""%f", 2, (double)(sqrt(-1 * c / a)), (double)(- 1 * sqrt(-1 * c / a)));
                }
                else if (c < 0)
                {
                    printf("%d", 0);
                }
            }
        }
        else
        {
            if (c == 0)
            {
                printf("%d\n""%d\n""%f", 2, 0, (double)(- 1 * b / a));
            }
            else
            {
                if (b * b - 4 * a * c < 0)
                {
                    printf("%d", 0);
                }
                else if (b * b - 4 * a * c == 0)
                {
                    printf("%d\n""%f", 1, (double)((-1 * b) / (2 * a)));
                }
                else
                {
                    printf("%d\n""%f\n""%f", 2, (double)((-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a)), (double)((-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a)));
                }
            }
        }
    }
    return 0;
}