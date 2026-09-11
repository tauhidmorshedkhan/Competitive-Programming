#include <stdio.h>

int main() {
    long long a, b, c , d, e, f, g, h, i, n, bill_count;
    scanf("%lld", &n);
    a = n / 100;
    b = n - (100 * a);
    c = b / 20;
    d = b - (20 * c);
    e = d / 10;
    f = d - (10 * e);
    g = f / 5;
    h = f - (5 * g);
    i = h / 1;
    bill_count = a + c + e  + g + i;
    printf("%lld\n", bill_count);
    return 0;
}
