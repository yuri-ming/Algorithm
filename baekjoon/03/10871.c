#include <stdio.h>
int main() {
	int n, x,i,a;

	scanf_s("%d %d", &n, &x);

	for (i = 1; i <= n; i++) {
		scanf_s("%d ", &a);
		if (a < x) printf("%d ", a);
	}
	
	return 0;
}