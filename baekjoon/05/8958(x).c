
#include <stdio.h>
#include <string.h>
char test[80];

int main() {

	int n;
	
	int sum, score;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		sum = 0;
		score = 1;

		scanf_s("%s", &test);

		for(int j=0;j<strlen(test);j++){   //strlen:문자열의 길이
			if (test[j] == 'O') {        
				sum += score;      
				score++;    
			}
			if (test[j] == 'X') score = 1;
	}
		printf("%d\n", sum);
		return 0;
		
	}
}