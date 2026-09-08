#include <stdio.h.>

int main() {
    int i, j, n, k, a, min, advanced = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < k; i++)
    {
        scanf("%d", &a);
        if (a == 0)
        {
        continue;
        }
        else if (a > 0)
        {
        min = a;
        advanced++;
        }
    }
    for (j = 0; j < (n - k); j++)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            continue;
        }
        else if (a >= min)
        {
            advanced++;
        }
    }
    printf("%d\n", advanced);
    return 0;
}
