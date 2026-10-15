#include <stdio.h>

int main() {
    long long n, m , a, count1, count2;
    scanf("%lld %lld %lld", &n, &m, &a);
    if (n % a == 0)
    {
        count1 = (n / a);
    }
    else
    {
        count1 = ((n / a) + 1);
    }
    if (m % a == 0)
    {
        count2 = (m / a);
    }
    else
    {
        count2 = ((m / a) + 1);
    }
    printf("%lld\n", count1 * count2);
    return 0;
}
