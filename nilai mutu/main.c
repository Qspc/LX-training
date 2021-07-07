#include <stdio.h>
#include <stdlib.h>

int main()
{
    char angka;

    scanf("%c", &angka);

    switch(angka)
    {
        case 'A': printf("4"); break;
        case 'a': printf("4"); break;
        case 'B': printf("3"); break;
        case 'b': printf("3"); break;
        case 'C': printf("2"); break;
        case 'c': printf("2"); break;
        case 'D': printf("1"); break;
        case 'd': printf("1"); break;
        case 'E': printf("0"); break;
        case 'e': printf("0"); break;
        default : printf("-1"); break;
    }
    printf("\n");
    return 0;
}
