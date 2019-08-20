//한수찾기
//한수 = 각 자리수가 등차수열을 이루는 수
//숫자 n을 입력받은후 n보다 작거나 같은 한수의 개수 출력
#include <stdio.h>
int main() {

	int n, i, r,k,t;
	int han;
	int tmp[3];
	scanf_s("%d", &n);
	

	for (i = 1; i <= n; i++) {   
		if (i < 100) han = i;   //입력한 수(n)가 100보다 작으면 한수의 갯수는 n개
		else if (i == 1000) break;   //입력값이 1000이면 break로 빠져나감
		else {   //입력값이 100이하가 아니고 1000도 아니라면
			int k = 0;  //k 초기화, k는 tmp의 인덱스 
			t = i;  
			while (t>0) {     
				  
				tmp[k] = t % 10;  //tmp에 입력값의 자릿수를 하나씩 저장
				t = t / 10;       //자릿수 한칸씩 땡겨주는 작업
				k++;              //인덱스 증가

			}
			if (tmp[0] - tmp[1] == tmp[1] - tmp[2]) han++;    //세개 자릿수의 차이가 같으면(세 수가 등차수열이라면) 한수의 갯수 증가
		}
		
	}
	printf("%d", han);
	return 0;
}
