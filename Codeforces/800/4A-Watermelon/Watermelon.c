#include <stdio.h>

int main()
{
    /* 
    1. Divide the watermelon in such a way that each of the two parts weighs even number of kilos
    2. Each of them should get a part of positive weight
    */
    int w;
    scanf("%d", &w);
    if (w % 2 == 0 && w >= 4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
return 0;
}
