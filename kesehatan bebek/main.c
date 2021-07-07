#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka = 0, min = 99999, max = -99999;

    while (angka != -1) {
        scanf("%d", &angka);
        if (angka == 0) {
          printf("%d %d\n", min, max);
          max = -999999;
          min = 999999;
        }
        if (angka > max && angka != 0 && angka != -1) max = angka;
        if (angka < min && angka != 0 && angka != -1) min = angka;


        }
    printf("%d %d\n", min, max);
    return 0;
}
