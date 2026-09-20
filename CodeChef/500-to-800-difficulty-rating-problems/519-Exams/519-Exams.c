#include <stdio.h>

int main() {
  	int T;
	float X, Y, Z, rate;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
  	{
      scanf("%f %f %f", &X, &Y, &Z);
      rate = (Z * 100.0) / (X * Y);
      if (rate > 50.0)
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
