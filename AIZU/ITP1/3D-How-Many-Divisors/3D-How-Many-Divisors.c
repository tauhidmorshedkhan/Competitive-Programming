#include <stdio.h>

int main() {
    int a, b, c, modulus, counter;
    counter = 0;
    scanf("%d %d %d", &a, &b, &c);
    while (a <= b)
    {
        modulus = c % a;
        if (modulus == 0)
        {
            counter++;
        }
    a++;
    }
    printf("%d\n", counter);
return 0;
}
