#include <stdio.h>
int main() {
	int a,b,c,i;
	int n = 0;
	int buf[10] = { 0 }; //배열 0으로 초기화
	int total = 1;

	
	
	scanf_s("%d\n", &a);
	scanf_s("%d\n", &b);
	scanf_s("%d\n", &c);
	
	total = a * b * c;

	while (total > 0) { 
		n = total % 10; //n=배열의 인덱스 겸 숫자
		buf[n]=buf[n]+1; 
		/*buf[0]=첫번째자리수
		  buf[1]=두번째자리수...
		  한자리 땡겼을때 모듈연산값이 같으면 배열안에 들어있는값 증가*/
		total=total / 10; //한자리씩 땡겨줌
		
	}
	for (i = 0; i < 10;i++) {
		printf("%d\n", buf[i]);

	}
	return 0;
}