#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lebih = 0, kurang = 0, n, first;

    scanf("%d", &n);
    first = n;
    while (n != -99) {
        scanf("%d", &n);
        if (n <= first) kurang++;
        else lebih++;
    }

    printf("%d %d\n", kurang, lebih);

    return 0;
}
