#include <stdio.h>

int main() {
	int n,a,b,c,d;
	int count = 0;
	scanf_s("%d", n);
	x = n;
	if (n >= 0 && n <= 99) {
		while (n =!x) {

			a = n / 10;
			b = n % 10;
			c = a + b;
			x = b * 10 + c % 10;
			if (x == n) break;
			else count++;		
		}
		
		printf("%d", count);
	}
	return 0;
}