#include <stdio.h>

int main() {
    long a, b, d, r; 
    double f;
    scanf("%ld %ld", &a, &b);
    d = a / b;
    r = a % b;
    f = (double) a / (double) b;
    printf("%ld %ld %.5f\n", d, r, f);
    return 0;
}
