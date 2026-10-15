#include <stdio.h>

int main() {
    int a,b;
    char greater_than = '>', less_than = '<', equals_to = '=';
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("a %c b\n", greater_than);
    }
    else if (a < b)
    {
        printf("a %c b\n", less_than);
    }
    else if (a == b)
    {
        printf("a %c%c b\n", equals_to, equals_to);
    }
    return 0;
}
