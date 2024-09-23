#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);
    printf("%s%d%s%d\n", "The next number for the number ", n, " is ", n + 1);
    printf("%s%d%s%d", "The previous number for the number ", n, " is ", n - 1);
    return EXIT_SUCCESS;
}