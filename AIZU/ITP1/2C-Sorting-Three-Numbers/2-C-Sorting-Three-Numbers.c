#include <stdio.h>

int main() {
    long int A, B, C;
    scanf("%ld %ld %ld", &A, &B, &C);
    // If A is largest.
    if (A > B && A > C && B > C)
    {
        printf("%ld %ld %ld\n", C, B, A);
    }
    else if (A > B && A > C && B == C)
    {
        printf("%ld %ld %ld\n", C, B, A);
    }
    else if (A > B && A > C && C > B)
    {
        printf("%ld %ld %ld\n", B, C, A);
    }
    // If B is largest.
    else if (B > A && B > C && A > C)
    {
        printf("%ld %ld %ld\n", C, A, B);
    }
    else if (B > A && B > C && A == C)
    {
        printf("%ld %ld %ld\n", C, A, B);
    }
    else if (B > A && B > C && C > A)
    {
        printf("%ld %ld %ld\n", A, C, B);
    }
    // If C is largest.
    else if (C > A && C > B && A > B)
    {
        printf("%ld %ld %ld\n", B, A, C);
    }
    else if (C > A && C > B && A == B)
    {
        printf("%ld %ld %ld\n", B, A, C);
    }
    else if (C > A && C > B && B > A)
    {
        printf("%ld %ld %ld\n", A, B, C);
    }
    else if (A == B && B == C)
    {
        printf("%ld %ld %ld\n", A, B, C);
    }
    return 0;
}
