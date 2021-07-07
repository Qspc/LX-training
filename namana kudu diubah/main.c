#include <stdio.h>
#include <stdlib.h>
#define N 100000

int main()
{
    int a[N][N], baris, kolom, b, k, i, j;
    int m, n, sum = 0, max = -999999;

    scanf("%d %d %d %d", &baris, &kolom, &b, &k);

    for (i = 0; i<baris; i++) {
        for (j = 0; j<kolom; j++) {
            scanf("%d ", &a[i][j]);
        }
    }

    for (i = 0; i<baris-b+1; i++) {
        for (j = 0; j<kolom; j++){
            sum = 0;
            for (m = i; m<b+i; m++) {
                for (n = j; n<k+j; n++) {
                    sum += a[m][n%kolom];
                }
            }
            if (sum > max) max = sum;
        }
    }
    printf("%d\n", max);

    return 0;
}
