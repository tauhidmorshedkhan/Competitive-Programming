#include <stdio.h>

int main() {
	float A, B, C, T, AVG;
	scanf("%f", &T);
	for (int i = 0; i < T; i++)
	{
	    scanf("%f %f %f", &A, &B, &C);
	    AVG = (A+B) / 2;
	    if (AVG > C)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
    return 0;
}
