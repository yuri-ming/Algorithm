#include <stdio.h>

int main() {

	int i,j;
	int n;
	double average=0;
	double	total=0.0;
	int num[1000];
	int max=0;
	

	scanf_s("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);

		if (max < num[i])
			max=num[i];
	}
	

	for (j = 0; j < n; j++) {
		total +=(double)num[j] / (double)max * 100.00;
		
	}
	
	printf("%.2lf", total/(double)n);
	return 0;
	
}