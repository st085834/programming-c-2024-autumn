#include <iostream>

int main()
{
    int S = 0;
    int Girl = 0;
    int Boy = 0;
    int day = 0;
    scanf_s("%d", &S);
    Boy = S / 6;
    Girl = Boy * 4;
    printf("%d", Boy);
    printf("%s", " ");
    printf("%d", Girl);
    printf("%s", " ");
    printf("%d", Boy);
    return EXIT_SUCCESS;
}