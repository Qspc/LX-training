#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int angka;
    int  nilai = 0;

    scanf("%ld", &angka);

    while (angka > 0) {
        angka /= 10;
        nilai++;
    }

    printf("%d\n", nilai);
    return 0;
}
