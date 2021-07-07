#include <stdio.h>
#include <stdlib.h>

int sisa(int num1, int num2, int bagi)
{
    if (num1 <= 0 || num2 <= 0) return 0;
    else if (num1 % num2 == bagi ) return 1;
    else return 0;
}

int main()
{
    int angka, i, hasil = 0;
    long int a, b, c;

    scanf("%d", &angka);
    for (i = 0; i<angka; i++) {
        scanf("%ld %ld %ld", &a, &b, &c);
        hasil += sisa(a, b, c);
    }
    printf("%d\n", hasil);
    return 0;
}

