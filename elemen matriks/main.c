#include <stdio.h>
#include <stdlib.h>
#define N 50000

int main()
{
    int i , j, baris, kolom, elemen;
    float b[N], a[N], no;

    scanf("%d %d", &baris, &kolom);

    for (i = 0; i<baris*kolom; i++) {
            scanf("%f", &a[i]);
            b[i] = i+1;
        }

    scanf("%d", &elemen);
    for (i = 0; i<elemen; i++){
        scanf("%f", &no);

        for (j = 0; j<baris*kolom; j++) {
            if (no == b[j]) {
                printf("%.2f\n", a[j]);    
            }
        }
        
    }
    return 0;
}
