#include <stdio.h>
#include <stdlib.h>

int main()
{
   int angka, bilangan, banyak = 0, hasil = 0;

   scanf("%d %d", &angka, &bilangan);

   while (bilangan > 0) {
    banyak = bilangan % 10;
    if (banyak == angka) hasil++;
    bilangan /= 10;
   }

   if (hasil == 0) printf("tidak ada\n");
   else printf("%d\n", hasil);

    return 0;
}
