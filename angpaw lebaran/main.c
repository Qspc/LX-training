#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, sum = 0;

    scanf("%d", &angka);
    if (angka >= 200){
        sum = angka/200;
        printf("200 %d\n", sum);
        angka -= sum*200;
    }
    if (angka >= 100){
        sum = angka/100;
        printf("100 %d\n", sum);
        angka -= sum*100;
    }
    if (angka >= 50){
        sum = angka/50;
        printf("50 %d\n", sum);
        angka -= sum*50;
    }
    if (angka >= 20){
        sum = angka/20;
        printf("20 %d\n", sum);
        angka -= sum*20;
    }
    if (angka >= 10){
        sum = angka/10;
        printf("10 %d\n", sum);
        angka -= sum*10;
    }
    if (angka >= 5){
        sum = angka/5;
        printf("5 %d\n", sum);
        angka -= sum*5;
    }
    if (angka >= 2){
        sum = angka/2;
        printf("2 %d\n", sum);
        angka -= sum*2;
    }
    if (angka >= 1){
        sum = angka/1;
        printf("1 %d\n", sum);
        angka -= sum*1;
    }
    return 0;
}
