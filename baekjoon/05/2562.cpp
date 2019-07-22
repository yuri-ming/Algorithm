#include <stdio.h>

int main() {
	int num[9];
	int i, j;
	int a = 0;

	

	for (i = 0; i < 9; i++) {
		scanf_s("%d", &num[i]);

	}

	int max = num[0];


	for (j = 0; j < 9; j++) {
		if (num[j] > max) {
			max = num[j];
			a=j;
		}
	}
	

	printf("%d\n", max);
	printf("%d\n", a+1);
	return 0;
}