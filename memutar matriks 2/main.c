#include <stdio.h>
#include <stdlib.h>
#define N 10000

int main()
{
    int a[N][N], i, j, baris, kolom, n;

    scanf("%d %d", &baris, &kolom);
    n = baris-1;

    for (i = 0; i<baris; i++){
        for (j = 0; j<kolom; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i<kolom; i++){
        for (j = 0; j<baris; j++){
            printf("%d", a[n--][i]);

            if (j > baris-2) printf("\n");
            else printf(" ");
        }
        n = baris-1;
    }

    return 0;
}
