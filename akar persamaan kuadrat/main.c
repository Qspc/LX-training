#include <stdio.h>
#include <math.h>

int main(void) {

	double a, b, c, d, h;

	scanf("%lf %lf %lf", &a, &b, &c);

	d = sqrt((b*b)-4*a*c);

	if (d > 0)
        printf("2");
    else if (d == 0)
        printf("1");
    else
        printf("0");

    printf("\n");

	return 0;
}
