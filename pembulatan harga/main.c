#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, bulatan, nilai = 0;

    scanf("%d %d", &angka, &bulatan);

    nilai = angka % bulatan;

    if (nilai < bulatan/2) angka -= nilai;
    else angka += (bulatan-nilai);

    printf("%d\n", angka);
    return 0;
}
