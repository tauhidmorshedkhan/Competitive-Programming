#include <stdio.h>

int main() {
    int a, b, year;
    scanf("%d %d", &a, &b);
    year = 0;
    while (1)
    {
        if (a > b)
        { 
            break;
        }
        else
        {
            year++, a *= 3; b *= 2;
        }
    }
    printf("%d\n", year);
return 0;
}
