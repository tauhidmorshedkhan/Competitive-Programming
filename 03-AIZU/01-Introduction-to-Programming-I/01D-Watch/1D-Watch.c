#include <stdio.h>

int main() {
    int S, h, m, s, i, X, Y, Z;
    scanf("%d", &S);
    h = S / 3600;
    X = h * 3600;
    Y = S - X;
    m = Y / 60;
    Z = m * 60;
    s = Y - Z; 
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
