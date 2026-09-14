#include <stdio.h>

int main() {
	int x, x_counter, y, y_counter, z, z_counter, t;
	x_counter = y_counter = z_counter = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d", &x, &y, &z);
		x_counter += x;
		y_counter += y;
		z_counter += z;
	}
	if (x_counter == 0 && y_counter == 0 && z_counter == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	return 0;
}
