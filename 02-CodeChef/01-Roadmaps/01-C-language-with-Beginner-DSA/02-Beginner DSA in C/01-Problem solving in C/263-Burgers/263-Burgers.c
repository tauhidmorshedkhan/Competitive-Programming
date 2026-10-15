#include <stdio.h>

int main() {
    int T, A, B;
    scanf("%d", &T);
    for (int i; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        if (A < B)
        {
            printf("%d\n", A);
        }
        else
        {
            printf("%d\n", B);
        }
    }
    return 0;
}