#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
    int a[N][N], i, j, sisi, sudut, n;
    scanf("%d", &sisi);

    for (i = 0; i<sisi; i++){
        for (j = 0; j<sisi; j++){
            scanf("%d", &a[i][j]);
        }
    }
    n = sisi-1;

    scanf("%d", &sudut);

    if (sudut == 90){
        for (i = 0; i<sisi; i++){
            for (j = 0; j<sisi; j++){
                printf("%d", a[j][n]);

                if (j == sisi-1) printf("\n");
                else printf(" ");

            }
            n--;
        }
    }

    else if (sudut == 180){
        for (i = 0; i<sisi; i++){
            for (j = 0; j<sisi; j++){
                printf("%d", a[n][sisi-1-j]);

                if (j == sisi-1) printf("\n");
                else printf(" ");
            }
            n--;
        }
    }

    else if (sudut == 270){
        for (i = 0; i<sisi; i++){
            for (j = 0; j<sisi; j++){
                printf("%d", a[sisi-1-j][i]);

                if (j == sisi-1) printf("\n");
                else printf(" ");
            }
            n--;
        }
    }
    return 0;
}
