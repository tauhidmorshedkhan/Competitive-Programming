#include <stdio.h>

int main() {
    int t, x, y, z, sum;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        sum = x + y + z;
        if (x >= y && x >= z)
        {
            for (int i = 0; i < sum; i++)
            {
                printf("P");
            }
        }
        else if (y >= z)
        {
            for (int i = 0; i < sum; i++)
            {
                printf("R");
            }
        }
        else
        {
            for (int i = 0; i < sum; i++)
            {
                printf("S");
            }
        }
        printf("\n");
    }
    return 0;
}