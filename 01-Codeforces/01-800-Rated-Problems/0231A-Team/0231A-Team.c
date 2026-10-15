#include <stdio.h>

int main() {
    int t, a, b, c, sum, problems = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        if (sum >= 2)
        {
            problems++;
        }
    }
    printf("%d\n", problems);
    return 0;
}
