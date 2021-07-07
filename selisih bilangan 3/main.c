#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int angka,  i, test = 0, m , n = 0, selisih = 0;

    scanf("%ld", &angka);

    for (i = 0; i<angka; i++) {
        m = n;
        scanf("%ld", &n);
        test = m - n;
        if (m < n) test *= -1;

        if (test > selisih) selisih = test;
    }
    printf("%ld\n", selisih);


    return 0;
}
