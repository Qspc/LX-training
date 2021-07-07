#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, i, genap = 0, ganjil = 0, bilangan;

    scanf("%d", &angka);

    for (i = 0; i<angka; i++) {
        scanf("%d", &bilangan);
        if (bilangan%2 == 0) genap++;
        else ganjil++;
    }
    printf("%d %d\n", genap, ganjil);

    return 0;
}
