#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X < Y)
    {
        if (Y - X == 2)
        {
            printf("Yes\n");
        }
        else if (Y - X == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else if (Y < X)
    {
        if (X - Y == 3)
        {
            printf("Yes\n");
        }
        else if (X - Y == 2)
        {
            printf("Yes\n"); 
        }
        else if (X - Y == 1)
        {
            printf("Yes\n");
        }
        else 
        {
            printf("No\n");
        }
    }
    return 0;
}
