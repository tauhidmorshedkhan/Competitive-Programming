#include <stdio.h>

int main() {
    int a, b;
    char operator;
    while(1)
    {
        scanf("%d %c %d", &a, &operator, &b);
        if (operator == '?')
        {
            break;
        }
        else if (operator == '+')
        {
            printf("%d\n", a + b);
        }
        else if (operator == '-')
        {
            printf("%d\n", a - b);
        }
        else if (operator == '*')
        {
            printf("%d\n", a * b);
        }
        else if (operator == '/')
        {
            printf("%d\n", a / b);
        }
    }
return 0;
}
