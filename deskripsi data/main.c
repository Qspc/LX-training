#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, i;
    double bilangan, max = -99999, min = 100000, total;

    scanf("%d", &angka);

    for(i = 0; i<angka; i++) {
        scanf("%lf", &bilangan);
        if (bilangan < min) min = bilangan;

        if (bilangan > max) max = bilangan;

        total += bilangan;
    }
    total /= angka;

    printf("%.2lf %.2lf %.2lf\n", min, max, total);
    return 0;
}
