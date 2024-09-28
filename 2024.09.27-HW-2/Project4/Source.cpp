#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    scanf_s("%d", &a1);
    scanf_s("%d", &b1);
    scanf_s("%d", &c1);
    scanf_s("%d", &a2);
    scanf_s("%d", &b2);
    scanf_s("%d", &c2);
    if ((fmax(a1, fmax(b1, c1)) == fmax(a2, fmax(b2, c2))) && (fmin(a1, fmin(b1, c1)) == fmin(a2, fmin(b2, c2))) && (a1 + b1 + c1 - fmax(a1, fmax(b1, c1)) - fmin(a1, fmin(b1, c1)) == a2 + b2 + c2 - fmax(a2, fmax(b2, c2)) - fmin(a2, fmin(b2, c2))))
    {
        printf("%s", "Boxes are equal");
    }
    else if ((fmax(a1, fmax(b1, c1)) >= fmax(a2, fmax(b2, c2))) && (fmin(a1, fmin(b1, c1)) >= fmin(a2, fmin(b2, c2))) && (a1 + b1 + c1 - fmax(a1, fmax(b1, c1)) - fmin(a1, fmin(b1, c1)) >= a2 + b2 + c2 - fmax(a2, fmax(b2, c2)) - fmin(a2, fmin(b2, c2))))
    {
        printf("%s", "The first box is larger than the second one");
    }
    else if ((fmax(a1, fmax(b1, c1)) <= fmax(a2, fmax(b2, c2))) && (fmin(a1, fmin(b1, c1)) <= fmin(a2, fmin(b2, c2))) && (a1 + b1 + c1 - fmax(a1, fmax(b1, c1)) - fmin(a1, fmin(b1, c1)) <= a2 + b2 + c2 - fmax(a2, fmax(b2, c2)) - fmin(a2, fmin(b2, c2))))
    {
        printf("%s", "The first box is smaller than the second one");
    }
    else
    {
        printf("%s", "Boxes are incomparable");
    }
    return 0;
}