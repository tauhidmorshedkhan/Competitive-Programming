#include <stdio.h>

int main() {
    int i, t, a, b, c, rounds;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == b || b == c || c == a)
        {
            printf("0\n");
            continue;
        }
        else if (a > b && a > c)
        {
            if (b > c)
            {   
                rounds = 0;
                for (c = c; c < a; c++)
                {
                    if (a == b || b == c || c == a)
                    {
                    break;
                    }
                    a--;
                    rounds++;
                }
            }
            else if (c > b)
            {   
                rounds = 0;
                for (b = b; b < a; b++)
                {
                    if (a == b || b == c || c == a)
                    {
                    break;
                    }
                    a--;
                    rounds++;
                }
            }
        }
        else if (b > a && b > c)
        {
            if (a > c)
            {   
                rounds = 0;
                for (c = c; c < b; c++)
                {
                    if (a == b || b == c || c == a)
                    {
                    break;
                    }
                    b--;
                    rounds++;
                }
            }
            else if (c > a)
            {   
                rounds = 0;
                for (a = a; a < b; a++)
                {
                    if (a == b || b == c || c == a)
                    {
                    break;
                    }
                    b--;
                    rounds++;
                }
            }
        }
        else if (c > a && c > b)
        {
            if (a > b)
            {   
                rounds = 0;
                for (b = b; b < c; b++)
                {
                    if (a == b || b == c || c == a)
                    {
                    break;
                    }
                    c--;
                    rounds++;
                }
            }
            else if (b > a)
            {   
                rounds = 0;
                for (a = a; a < c; a++)
                {
                    if (a == b || b == c || c == a)
                    {
                    break;
                    }
                    c--;
                    rounds++;
                }
            }
        }
        printf("%d\n", rounds);
    }
    return 0;
}
