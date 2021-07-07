#include <stdio.h>
#include <stdlib.h>
#define N 50000



int main()
{   
    char kata[N], jml[N];
    int i, hasil, angka;
    
    scanf("%d", &angka);
    for (i = 0; i<angka; i++){
        fgets(kata, sizeof(kata), stdin);
        
        jml = strtok(kata, ".,"" ")
        if (strlen(jml) >= 4) hasil++;

        while (kata != NULL){
            jml = strtok(NULL, " ,.""");
            if (strlen(jml) >= 4) hasil++;
        }

    }

    printf("%d\n", hasil);

    return 0;
}
