#include <stdio.h>

int main() {
    long long a, b, t, i, difference, counter;
    scanf("%lld", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld %lld", &a, &b);
        difference = 0;
        if (a > b)
        {
            difference = a - b;
            if (difference % 10 == 0)
            {
                counter = (difference / 10);
            }
            else
            {
                counter = (difference / 10) + 1;
            }
            printf("%lld\n", counter);
        }
        else if (b > a)
        {
            difference = b - a;
            if (difference % 10 == 0)
            {
                counter = (difference / 10);
            }
            else
            {
                counter = (difference / 10) + 1;
            }
            printf("%lld\n", counter);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
