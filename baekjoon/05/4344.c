#include <stdio.h>
int main() {
	int n;
	int ave[] = { 0 };
	int num;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		int tmp[1000];
		int sum = 0;
		double average = 0.0;
		scanf_s("%d", &num);

		for (int j = 0; j < num; j++) {
			scanf_s("%d", &tmp[j]);
			sum += tmp[j];
		}
	
		average = (double)sum / num;
		int count = 0;
		for (int i = 0; i < num; i++) {
			if (tmp[i] > average) count++;
		}
		printf("%.3lf%%\n", (double)count * 100 / num);

		
	}
	return 0;
	
}