#include <stdio.h>

int main() {
    double r, area, circumference;
    const double pi = 3.14159265358979323846;
    scanf("%lf", &r);
    area = pi * (r * r);
    circumference = 2 * pi * r;
    printf("%.6lf %.6lf\n", area, circumference);
return 0;
}
