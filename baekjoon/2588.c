#include <stdio.h>
int main() {
	int a, b;
	int three,four,five, six;
	scanf("%d\n", &a);
	scanf("%d\n", &b);

	printf("%d\n", three = a * (b % 10));
	printf("%d\n", four = a * (b / 10 % 10));
	printf("%d\n", five = a * (b / 100));
	printf("%d\n", six = three + 10*four + 100*five);

	return 0;
}