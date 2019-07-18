#include <stdio.h>
int main() {
	int n, i, a, b;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf_s("%d %d", &a, &b);

		printf("Case #%d: %d + %d = %d\n", i,a,b, a + b);
	}
	
	return 0;
}