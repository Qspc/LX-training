#include <stdio.h>
#include <stdlib.h>

int selisih(int a, int b) {
    if (a > b) return a-b;
    else return b-a;
}

int main()
{
    int a, b, hasil = 0, maks = -9999, jml  = 0;

    scanf("%d", &a);
    while (a != -99){
        scanf("%d", &b);
        hasil = selisih(a,b);
        if (hasil > maks) maks = hasil;
        jml++;
        scanf("%d", &a);
    }

    printf("%d %d\n", jml, maks);

    return 0;
}
