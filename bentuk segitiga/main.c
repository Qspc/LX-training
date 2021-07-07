#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, i, j;

    scanf("%d", &angka);

    for(i = 0; i<angka; i++) {
        for (j = i; j<angka; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
