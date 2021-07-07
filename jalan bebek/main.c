#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x1, x2, x3, y1, y2, y3, jarak1, jarak2;

    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    jarak1 = (x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
    jarak2 = (x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);

    if (jarak1 == jarak2) {
        printf("%d\n", 12);
    }
    else if (jarak1 < jarak2) {
        printf("%d\n", 1);
    }
    else if (jarak1 > jarak2) {
        printf("%d\n", 2);
    }
    return 0;
}
