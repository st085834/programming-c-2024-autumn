#include <iostream>

int main(int argc, char* argv[])
{
    int s = 0;
    int girl = 0;
    int boy = 0;
    int day = 0;
    scanf_s("%d", &s);
    boy = s / 6;
    girl = boy * 4;
    printf("%d %d %d", boy, girl, boy);
    return EXIT_SUCCESS;
}