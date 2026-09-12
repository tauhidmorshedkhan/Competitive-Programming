#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("%d %d %d", (a - b), (a - c), (a - d));
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d %d %d", (b - a), (b - c), (b - d));
    }
    else if (c > b && c > a && c > d)
    {
        printf("%d %d %d", (c - b), (c - a), (c - d));
    }
    else if (d > b && d > c && d > a)
    {
        printf("%d %d %d", (d - b), (d - c), (d - a));
    }
    return 0;
}
