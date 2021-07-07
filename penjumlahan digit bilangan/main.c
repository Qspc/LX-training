#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, nilai = 0 ,sisa = 0;

    scanf("%d", &angka);

    while (angka != 0) {
        sisa = angka % 10;
        nilai += sisa;
        angka /= 10;
    }

    printf("%d\n", nilai);
    return 0;
}
