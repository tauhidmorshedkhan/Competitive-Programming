#include <stdio.h>

int main() {
    int A, B, cookies = 0;
    scanf("%d %d", &A, &B);
    if ((A - B) % 2 == 0)
    {
        while(1)
        {
            A--;
            B++;
            cookies++;
            if (A == B)
            {
                break;
            }
        }
        printf("%d\n", cookies);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
