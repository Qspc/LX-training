#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1000000

int min(int a[], int total) {

    int maksimal = 1000000;
    int minimal = 1000000;
    int i;

    for (i = 0; i<total; i++) {
        if (maksimal > 0){
            maksimal = a[i];
        }
        else {
            maksimal += a[i];
        }

        if (minimal > maksimal) {
        minimal = maksimal;
        }
    }
    return minimal;
}

int main()
{
    int a[N], i, total;

    scanf("%d", &total);
    for (i = 0; i<total; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d\n", min(a,total));
    return 0;
}
