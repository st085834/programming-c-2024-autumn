#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int sum = 0;
    int max = 0;
    std::cin >> n;
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }
    for (int i = n - 1; i >= 0; --i)
    {
        max = ((max) > (*(a + i)) ? (max) : (*(a + i)));
        sum += max;
    }
    std::cout << sum;
    free(a);
    return EXIT_SUCCESS;
}