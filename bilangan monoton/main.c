#include <stdio.h>

int main() {

	long int a, b, c, d;

	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);

	if (a == b && b == c && c == d) printf("KONSTAN");
	else if ((a >= b && b >= c && c >= d) && (a != b || b != c || c != d)) printf("MONOTON MENURUN");
	else if ((a <= b && b <= c && c <= d) && (a != b || b != c || c != d)) printf("MONOTON MENAIK");
	else printf("TIDAK MONOTON");

	printf("\n");

	return 0;
}
