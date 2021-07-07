#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, banyak, hasil = 0, i;

    scanf("%d", &banyak);

    for(i = 0; i<banyak; i++){
        scanf("%d", &a);
        if (a%2 == 0){
            hasil += a;
        }
    }
    printf("%d\n", hasil);
    return 0;
}
