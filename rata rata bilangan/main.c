#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, angka, jumlah = 0, bilangan;
    float rata;

    scanf("%d", &angka);
    for (i = 0; i<angka; i++) {
        scanf("%d", &bilangan);
        jumlah += bilangan;
    }

    rata = 1.0*jumlah/i;

    printf("%.3f\n", rata);
    return 0;
}
