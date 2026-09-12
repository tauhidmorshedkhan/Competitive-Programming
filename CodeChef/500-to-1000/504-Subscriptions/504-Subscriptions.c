#include <stdio.h>

int main() {
	int T, N, X;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
	    scanf("%d %d", &N, &X);
	    if (N % 6 == 0)
	    {
	        printf("%d\n", ((N / 6) * X));
	    }
	    else
	    {
	        printf("%d\n", (((N / 6) + 1) * X));
	    }
	}
    return 0;
}

