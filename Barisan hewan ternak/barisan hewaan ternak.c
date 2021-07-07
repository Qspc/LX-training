#include <stdio.h>
#include <stdlib.h>
#define N 100000


int main() {
	int a[N], b[N], i, j, angka, cari;

	scanf("%d", &angka);
	for (i = 0; i<angka; i++){
		scanf("%d", &a[i]);
		if (a[i] > 0) a[i] = a[i-1] + a[i];
	}

	scanf("%d", &cari);
	for (i = 0; i<cari; i++){
		scanf("%d", &b[i]);
		for (j = 0; j<angka; j++){
			if (b[i] <= a[j]){
				printf("%d\n", j+1);
				break;
			}
		}
	}

	return 0;
}
