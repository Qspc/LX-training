#include <stdio.h>
#include <stdlib.h>

int fpb(int a, int b, int fpb){
    int c;
    if (a < 0 || b < 0 || c < 0) return 0;
    while (b != 0){
        c = a%b;
        a = b;
        b = c;
    }
    if (a == fpb) return 1;
    else return 0;

}

int main()
{
    int a, b, c, jml  = 0, hasil = 0;

    scanf("%d", &a);
    while (a != -99) {
        scanf("%d %d", &b, &c);
        hasil += fpb(a, b, c);
        jml++;
        scanf("%d", &a);
    }

    printf("%d %d\n", jml, hasil);
    return 0;
}
