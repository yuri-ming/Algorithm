#include <stdio.h>

int main() {
	int n, a, b, c;
	int count = 0;
	int x;

	scanf_s("%d", &n);
	x = n;
	
		while (1) {

			a = n / 10;
			b = n % 10;
			c = a + b;
			n = b * 10 + c % 10;
			count++;
			if (x == n) break;
			
		}

		printf("%d", count);
	
	return 0;
}