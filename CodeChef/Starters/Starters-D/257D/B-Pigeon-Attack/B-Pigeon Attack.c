#include <stdio.h>

int main() {
    int T, N, K, count;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &K);
        count = 0;
        while (N--)
        {
            count++;
            if (count % K == 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
