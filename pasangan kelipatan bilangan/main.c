#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai = 0, angka, i, a, b;

    scanf("%d", &angka);

    for (i = 0; i<angka; i++) {
        scanf("%d %d", &a, &b);
        if (a%b == 0 || b%a == 0) {
            nilai++;
        }
    }

    printf("%d\n", nilai);
    return 0;
}
