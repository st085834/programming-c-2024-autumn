#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    long long n = 0;
    long long m = 0;
    scanf_s("%lld", &n);
    scanf_s("%lld", &m);
    if (m % n == 0)
    {
        printf("%d", 1);
    }
    else
    {
        long long del1 = 1;
        long long del2 = 1;
        long long a = m;
        for (long long i = 2; i <= (long long)(fmax(n, m));)
        {
            if ((n % i == 0) && (m % i == 0))
            {
                del1 *= i;
                n /= i;
                m /= i;
            }
            else if (n % i == 0)
            {
                del1 *= i;
                n /= i;
            }
            else if (m % i == 0)
            {
                del2 *= i;
                m /= i;
            }
            else if (fmax(n, m) == 1)
            {
                break;
            }
            else
            {
                ++i;
            }
        }
        long long res = del1 * del2;
        printf("%lld", res / a);
    }
    return 0;
}