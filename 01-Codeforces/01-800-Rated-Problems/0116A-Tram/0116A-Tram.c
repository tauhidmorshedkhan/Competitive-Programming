#include <stdio.h>

int main() {
    int i, n, a, b, total, capacity;
    total = capacity = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        total = total + (b - a);
        if (total > capacity)
        {
            capacity = total;
        }
    }
    printf("%d\n", capacity);
    return 0;
}
