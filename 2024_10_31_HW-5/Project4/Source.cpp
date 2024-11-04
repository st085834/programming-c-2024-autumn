#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int max = 0;
    int min = 0;
    int max1 = 0;
    int min1 = 0;
    std::cin >> n;
    int* a = (int*)malloc(n * sizeof(int));
    int b = 0;
    int c = 1;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }
    for (int i = 0; i < n; ++i)
    {
        if (*(a + i) > 0)
        {
            b += *(a + i);
        }
    }
    std::cout << b << " ";
    max = *(a + 0);
    min = *(a + 0);
    for (int i = 1; i < n; ++i)
    {
        if (max < *(a + i))
        {
            max = *(a + i);
            max1 = i;
        }
    }
    for (int i = 1; i < n; ++i)
    {

        if (min > *(a + i))
        {
            min = *(a + i);
            min1 = i;
        }
    }
    if (min1 > max1)
    {
        for (int i = max1 + 1; i < min1; ++i)
        {
            c *= *(a + i);
        }
    }
    if (min1 < max1)
    {
        for (int i = min1 + 1; i < max1; ++i)
        {
            c *= *(a + i);
        }
    }
    std::cout << c;
    free(a);
    return EXIT_SUCCESS;
}