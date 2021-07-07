#include <stdio.h>
#include <stdlib.h>

int sisa(int num1, int num2, int pembagi) {
    float bagi;
    bagi = (1.0*num1)/num2;

    if (num1 == -99) return 0;
    else if (num2 == 0) return 0;
    else if (pembagi == bagi) return 1;
    else return 0;
}

int main()
{
    int a, b;
    int jml = 0, hasil = 0;
    float c;

    scanf("%d", &a);
    while (a != -99) {
        scanf("%d %f", &b, &c);
        jml++;
        hasil += sisa(a, b, c);
        scanf("%d", &a);
    }
    printf("%d %d\n", jml, hasil);

    return 0;
}


