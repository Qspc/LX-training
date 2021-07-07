#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0;
    char ch1, ch2, a[1000];
    scanf("%c %c ", &ch1, &ch2);

    gets(a);


    while (a[i] != 0){
        if (a[i] == 'm') a[i] = 'k';
        else if (a[i] == 'M') a[i] = 'K';
        i++;
    }

    printf("%s\n", a);
    return 0;
}
