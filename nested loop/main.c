#include <stdio.h>
# define N 1000

int main() {

    int angka, i, sum = 0, a[N], max = 0, min = 0;
    float rata;

    scanf("%d", &angka);
    for (i = 0; i<angka; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    rata = 1.0*sum/i;

    for (i = 0; i<angka; i++) {
        if (a[i] > rata) max++;
        else min++;
    }

    printf("%.2f %d %d", rata, max, min);

return 0;
}
