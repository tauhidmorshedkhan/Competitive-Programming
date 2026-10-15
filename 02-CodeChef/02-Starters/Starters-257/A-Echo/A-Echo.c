#include <stdio.h>

int main() {
    char a, b, c, d, ch;
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &ch);
        if (i == 0)
        {
            a = ch;
        }
        else if (i == 1)
        {
            b = ch;
        }
        else if (i == 2)
        {
            c = ch;
        }
        else if (i == 3)
        {
            d = ch;
        }
    }
    if (a == c && b == d)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    return 0;
}
