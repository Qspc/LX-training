#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, i, nilai = 0;

    scanf("%d", &angka);

    for (i = 2; i<angka; i++) {
        if (angka%i == 0) {
            nilai++;
        }
    }
    printf("%d\n", nilai);
    return 0;
}
