#include <iostream>

int main(int argc, char* argv[])
{
    int hund = 0;
    int one = 0;
    int two = 0;
    scanf_s("%d", &hund);
    one = hund % 10;
    hund = hund / 10;
    two = hund % 10;
    hund = hund / 10;
    printf("%d", hund + one + two);
    return EXIT_SUCCESS;
}