#include <iostream>

int main()
{
    int Hund = 0;
    int One = 0;
    int Two = 0;
    scanf_s("%d", &Hund);
    One = Hund % 10;
    Hund = Hund / 10;
    Two = Hund % 10;
    Hund = Hund / 10;
    printf("%d", Hund + One + Two);
    return EXIT_SUCCESS;
}