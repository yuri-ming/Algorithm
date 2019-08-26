#include <stdio.h>


int main() {
	int n;
	int i;
	scanf_s("%d", &n);
	int result = 1;
	for (i = 1; i <= n; i++) {
		result *= i;
	}

	printf("%d",result);
	return 0;
}
