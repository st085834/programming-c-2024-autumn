#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    int x2 = 0;
    int y2 = 0;
    int r2 = 0;
    scanf_s("%d", &x1);
    scanf_s("%d", &y1);
    scanf_s("%d", &r1);
    scanf_s("%d", &x2);
    scanf_s("%d", &y2);
    scanf_s("%d", &r2);
    double dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    if (((r1 + r2) >= dist) && ((r1 + dist) >= r2) && ((dist + r2) >= r1))
    {
        printf("%s", "YES");
    }
    else
    {
        printf("%s", "NO");
    }
    return 0;
}