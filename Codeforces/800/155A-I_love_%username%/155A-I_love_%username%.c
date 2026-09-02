#include <stdio.h>

int main() {
    int i, n, current, counter, highest, lowest;
    counter = 0;
    scanf("%d", &n);
    scanf("%d", &current);
    highest = current;
    lowest = current;

    for (i = 1; i < n; i++)
    {
        scanf("%d", &current);
        if (current > highest)
        {
            highest = current;
            counter++;
        }
        else if (current < lowest)
        {
            lowest = current;
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}
