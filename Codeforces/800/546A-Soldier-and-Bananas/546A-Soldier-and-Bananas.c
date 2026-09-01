#include <stdio.h>

int main() {
    long long k, n, w, i, cost, borrow;
    i = 1;
    cost = 0;
    scanf("%lld %lld %lld", &k, &n, &w);
    while(1)
    {   
        if (i <= w)
        {
            cost = cost + (i * k);
            i++;
        }
        else
        {
            break;
        }
    }
    borrow = cost - n;
    if (n >= cost)
    {
        printf("0\n");
    }
    else
    {
        printf("%lld\n", borrow);
    }
return 0;
}
