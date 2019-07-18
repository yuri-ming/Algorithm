#include <stdio.h>
int main() {
	int n, i,a,b;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf_s("%d %d", &a, &b);
		
		for (j = 1; j <= n; j++) {
			printf("Case #%d: %d", i, a + b);
		}
	}
	return 0;
}