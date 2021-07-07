#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, jumlah;

    scanf("%f %f %f", &a, &b, &c);

    jumlah = (a+b+c)/3;

    if (jumlah < 30) {
        printf("%.2fKURANG", jumlah);
    }
    else if (jumlah >= 30 && jumlah < 60) {
        printf("%.2fCUKUP", jumlah);
    }
    else if (jumlah >= 60) {
        printf("%.2fBAIK", jumlah);
    }
    return 0;
}
