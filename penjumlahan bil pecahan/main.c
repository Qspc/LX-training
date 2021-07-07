#include <stdio.h>
#include <stdlib.h>
#define N 10000

int kpk(int a, int b){
	if (a%b == 0) return a;
	else if (b%a ==  0) return b;
	else if (a%2 == 0 && b%2 == 0) return a/2*b;
	else return a*b;
}

int fpb(int a, int b){
    int c;
    if (a>=b) {
        while (b != 0){
            c = a%b;
            a = b;
            b = c;
        }
        return a;
    }
    else {
        while (a != 0){
            c = b%a;
            b = a;
            a = c;
        }
        return b;
    }
}

int main() {
	int a[N], i, pembilang, penyebut, n;

	for (i = 0; i<4; i++){
		scanf("%d", &a[i]);
	}

	pembilang = kpk(a[1], a[3]);

	penyebut = (pembilang/a[1]*a[0]) + (pembilang/a[3]*a[2]);

    n = fpb(pembilang, penyebut);

	printf("%d %d\n", penyebut/n, pembilang/n);
	return 0;
}
