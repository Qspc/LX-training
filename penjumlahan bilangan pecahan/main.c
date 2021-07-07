#include <stdio.h>
#include <stdlib.h>
#define N 10000


int main()
{
    int a[N], b[N], m, n, o = 0, c[N];

    scanf("%d %d", &a[0], &a[1]);
    scanf("%d %d", &b[0], &b[1]);

    c[0] = a[o]*b[1] + a[1]*b[0];
    c[1] = a[1]*b[1];



    if (c[0] > c[1]) {
        m = c[0];
        n = c[1];
        while (n != 0){
            o = m%n;
            m = n;
            n = o;
        }
    }
    else if (c[1] > c[0]){
        n = c[0];
        m = c[1];
        while (n != 0){
            o = m%n;
            m = n;
            n = o;
        }
    }

    if (n == 1) printf("%d %d\n", c[0], c[1]);
    else printf("%d %d\n", c[0]/n, c[1]/n);


    return 0;
}
