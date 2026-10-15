#include <stdio.h>

int main() {
    int T, sx, sy, ex, ey;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d",&sx, &sy, &ex, &ey);
        if (sx == ex || sy == ey)
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}