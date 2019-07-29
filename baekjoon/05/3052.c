#include <stdio.h>
int main() {
	int n,i,j;
	int buf[42] = { 0 };
	int cnt=0;

	for (i = 0; i < 10; i++) {
		scanf_s("%d", &n);
		
		buf[n % 42]++;
		
	}
	for (int i = 0; i < 42; i++) {
		if (buf[i] != 0) cnt++;
	}
	
	printf("%d\n",cnt);
	
	return 0;
}