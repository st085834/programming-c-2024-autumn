#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    unsigned long long i = 0;
    unsigned long long j = 0;
    unsigned long long nod = 1;
    scanf_s("%llu", &i);
    scanf_s("%llu", &j);
    if (i < j)
    {
        unsigned long long pum = i;
        i = j;
        j = pum;
    }
    unsigned long long a1 = 0;
    unsigned long long b1 = 1;
    unsigned long long c1 = 0;
    unsigned long long a2 = 0;
    unsigned long long b2 = 1;
    unsigned long long c2 = 0;
    for (unsigned long long k = 0; k < i - 1; ++k)
    {
        if (j == 0)
        {
            b2 = 0;
        }
        else if (j == 1)
        {
            b2 = 1;
        }
        else if (k < j - 1)
        {
            c2 = b2;
            b2 = a2 + b2;
            a2 = c2;
        }
        if (i == 0)
        {
            b1 = 0;
        }
        else if (i == 1)
        {
            b1 = 1;
        }
        else
        {
            c1 = b1;
            b1 = a1 + b1;
            a1 = c1;
        }
    }
    unsigned long long fi = b1;
    unsigned long long fj = b2;
    if (fi == fj)
    {
        nod = fi;
    }
    else
    {
        for (unsigned long long i = 2; i <= fi;)
        {
            if ((fi % i == 0) && (fj % i == 0))
            {
                nod *= i;
                fi /= i;
                fj /= i;
            }
            else
            {
                ++i;
            }
        }
    }
    unsigned long long end = 1000000000;
    printf("%llu", nod % end);
    return 0;
}