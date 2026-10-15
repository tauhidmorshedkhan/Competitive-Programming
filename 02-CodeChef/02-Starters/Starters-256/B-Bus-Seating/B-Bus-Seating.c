#include <stdio.h>

int main() {
    int T, N, K;
    scanf("%d", & T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", & N, & K);
        if ((N - K) > 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n", (N - K) * (-2));
        }
    }
    return 0;
}
