#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int diameter;
    double luas, keliling, r, pi = 3.14;

    scanf("%ld", &diameter);

    r = 1.0*diameter/2;
    luas = pi*r*r;
    keliling = 2*pi*r;

    printf("%.2lf %.2lf\n", keliling, luas);
    return 0;
}
