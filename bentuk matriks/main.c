#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baris, kolom, i, j, n = 0;

    scanf("%d %d", &baris, &kolom);

    for (i = 0; i<baris; i++) {
        for (j = 0; j<kolom; j++){
            if (n > 9) printf("%d", n%10);
            else printf("%d", n);
            n++;

            if (j == kolom-1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
