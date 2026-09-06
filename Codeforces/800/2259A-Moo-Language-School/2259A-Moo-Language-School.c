#include <stdio.h>

int main() {
    int x, y, z, t, n, k, sum, build;
    char input;
    scanf("%d", &t);
    for (x = 0; x < t; x++)
    {
        build = 0;
        scanf("%d %d", &n, &k);
        for (y = 0; y < (n / k); y++)
        {   
            sum = 0;
            for (z = 0; z < k; z++)
            {
            scanf(" %c", &input);
            if (input == '1')
            {
                sum++;
            }
            }
            if (sum == k)
            {
                build++;
            }
        }
        printf("%d\n", build);
    }
    return 0;
}
