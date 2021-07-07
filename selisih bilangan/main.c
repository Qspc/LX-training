#include <stdio.h>

int main() {

	long int a, b, c, d, s1, s2, s3;

	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);

	if (b < a) s1 = (b-a)*-1;
	else s1 = b-a;

	if (c < b) s2 = (c-b)*-1;
	else s2 = c-b;

	if (d < c) s3 = (d-c)*-1;
	else s3 = d-c;

	if (s1 > s2 && s1>s3) printf("%ld\n", s1);
	else if (s2 > s1 && s2>s3) printf("%ld\n", s2);
	else printf("%ld\n", s3);

	return 0;
}
