#include <stdio.h>

int main() {
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if ((x > 0 && x < W) && (y > 0 && y < H) && ((r > 0 && r < W) && (r > 0 && r < H) && (r <= x && r<= y)))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
