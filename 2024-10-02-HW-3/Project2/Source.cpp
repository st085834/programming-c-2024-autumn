#include <cstdio>

int main(int argc, char* argv[])
{
    long long k = 0;
    long long n = 0;
    long long m = 0;
    scanf_s("%lld", &k);
    for (long long i = 0; i < k; ++i)
    {
        scanf_s("%lld", &n);
        scanf_s("%lld", &m);
        long long d = 19 * m + (n + 239) * (n + 366) / 2;
        printf("%lld\n", d);
    }
    return 0;
}