#include <stdio.h>

int main() {
    int t, n, a, b, c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d", &n, &a, &b, &c);
        if (a == b && b == c)
        {
            printf("%d\n", n - a);
        }

        else if (a == b && a > c)
        {
            printf("%d\n", n - c);
        }
        else if (b == c && b > a)
        {
            printf("%d\n", n - a);
        }
        else if (a == c && a > b)
        {
            printf("%d\n", n - b);
        }

        else if (a == b && c > a)
        {
            printf("%d\n", n - a);
        }
        else if (b == c && a > b)
        {
            printf("%d\n", n - b);
        }
        else if (a == c && b > c)
        {
            printf("%d\n", n - c);
        }

        else if (a > b && b > c)
        {
            printf("%d\n", n - c);
        }
        else if (a > c && c > b)
        {
            printf("%d\n", n - b);
        }

        else if (b > a && a > c)
        {
            printf("%d\n", n - c);
        }
        else if (b > c && c > a)
        {
            printf("%d\n", n - a);
        }

        else if (c > a && a > b)
        {
            printf("%d\n", n - b);
        }
        else if (c > b && b > a)
        {
            printf("%d\n", n - a);
        }
    }
    return 0;
}
