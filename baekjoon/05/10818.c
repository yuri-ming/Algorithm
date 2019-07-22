#include <stdio.h>
#define MAX_SIZE 1000000
int main() {
	int n;
	int i, j;
	int num[MAX_SIZE];

	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);

	}

	int min = num[0];
	int max = num[0];

	for (j = 0; j < n; j++) {
		if (num[j] > max) max = num[j];
		if (num[j] < min) min = num[j];
	}
	
	printf("%d %d", min, max);
	return 0;
}