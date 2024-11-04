#include <iostream>

int main(int argc, char* argv[])
{
    int a[100000] = { 0 };
    int i = 0;
    int n = 0;
    int k = 0;
    std::cin >> n;
    for (i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }
    int min = 0;
    for (i = 0; i < n; ++i)
    {
        if (*(a + i) < *(a + min))
        {
            min = i;
        }
    }
    for (i = min; i < n; ++i)
    {
        std::cout << *(a + i) << ' ';
    }
    for (i = 0; i < min; ++i)
    {
        std::cout << *(a + i) << ' ';
    }
    return EXIT_SUCCESS;
}