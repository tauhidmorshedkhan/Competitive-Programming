#include <stdio.h>

int main() {
    int t, x1, y1, R, x2;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x1, &y1, &R);
        x2 = x1 + R;
        printf("%d %d\n", x2, y1);
    }
    return 0;
}
