#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, min;

    scanf("%d", &n);
    min = n;
    while (n != -99) {
        if (n < min) min = n;
        scanf("%d", &n);
    }

    if (min == -99) printf("empty\n");

    else printf("%d\n", min);


    return 0;
}
