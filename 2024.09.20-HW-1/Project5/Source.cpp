#include <iostream>

int main()
{
    int N = 0;
    scanf_s("%d", &N);
    printf("%s", "The next number for the number ");
    printf("%d", N); 
    printf("%s", " is "); 
    printf("%d", N + 1); 
    '\n';
    printf("%s", "The previous number for the number ");
    printf("%d", N);
    printf("%s", " is ");
    printf("%d", N - 1);
    return EXIT_SUCCESS;
}