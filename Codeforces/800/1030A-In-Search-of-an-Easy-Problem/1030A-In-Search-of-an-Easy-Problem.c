#include <stdio.h>

int main() {
    int i, n, feedback, decision;
    i = 1;
    decision = 0;
    scanf("%d", &n);
    while(1)
    {
        if (i <= n)
        {
            scanf("%d", &feedback);
            decision = decision + feedback; 
            i++;
        }
        else
        {
            break;
        }
    }
    if (decision == 0)
    {
        printf("EASY\n");
    }
    else
    {
        printf("HARD\n");
    }
    return 0;
}
