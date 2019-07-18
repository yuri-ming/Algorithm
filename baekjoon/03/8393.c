#include <stdio.h>
int main() {
	int i, n,total;
	total = 0;
	scanf_s("%d", &n);


	for (i = 1; i <= n; i++) {
		total = i + total;

	}
	printf("%d", total);
}