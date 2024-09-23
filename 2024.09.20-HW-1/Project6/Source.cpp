#include <iostream>

int main(int argc, char* argv[])
{
    int g = 0;
    int l = 0;
    scanf_s("%d", &g);
    scanf_s("%d", &l);
    printf("%d%s%d", l - 1, " ", g - 1);
    return EXIT_SUCCESS;
}