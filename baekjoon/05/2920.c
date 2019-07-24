#include <stdio.h>

int main() {
	int num[8];
	int i;
	int as = 0;
	int	ds = 0;
	
	for (i = 0; i < 8; i++) {
		scanf_s("%d", &num[i]);
		
		if (i + 1 == num[i]) as++; 
		/*(만약 1~8로 정렬되어있다면)인덱스 값을 입력받으므로 인덱스값+1이 진짜 숫자
		  하나씩 입력받을때마다 as의 값 1씩 증가*/
		else if (8 - i == num[i]) ds++; 
		/*(역순으로 정렬되어있다면) 인덱스가 0일때 가장 큰 수가 와야함
		  하나씩 입력받을때마다 ds의 값 1씩 증가*/
		
	}
	if (as == 8) printf("ascending\n"); //차례로 정렬되어있다면 as값이 8이 됨
	else if (ds == 8) printf("descending\n"); //역순으로 정렬되어있다면 ds값이 8이됨
	else printf("mixed"); //둘다 만족하지 않으면 mixed 출력

	

	return 0;

}