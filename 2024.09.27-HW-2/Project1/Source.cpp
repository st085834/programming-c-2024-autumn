#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    scanf_s("%d", &x1);
    scanf_s("%d", &y1);
    scanf_s("%d", &x2);
    scanf_s("%d", &y2);
    if ((x2 == x1) || (y2 == y1) || (abs(x2 - x1) == abs(y2 - y1)))
    {
        printf("%s", "YES");
    }
    else
    {
        printf("%s", "NO");
    }
    return 0;
}