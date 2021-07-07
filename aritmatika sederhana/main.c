#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a, b;
    double c, d;

    scanf("%ld %ld %lf", &a, &b, &c);

    d = (1.0*a/b)+c;

    printf("%.2lf\n", d);
    return 0;
}
