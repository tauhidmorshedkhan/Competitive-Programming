#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if ((A + B) > (A * 3))
    {
        printf("%d\n", A * 3);
    }
    else
    {
        printf("%d\n", A + B);
    }
    return 0;
}