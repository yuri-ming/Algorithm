/*셀프넘버*/
 
#include <stdio.h>
#define N 10001

int num[N];

int selfnum(int n){  //selfnumber 찾는 함수 
	int sum=n;  //변수 sum에 n대입 
	
 	while(n!=0){
		sum += n%10;   
		n=n/10;         //n이 0이 아닌동안 sum에 sum과 sum의 마지막 자릿수를 더함 
	}                   //  그리고 n을 한자리씩 줄여줌(0이 될때까지)   
	return sum;
}

int main(){	
	for(int i=0;i<N;i++){
		num[i]=1;
	}
	
	for(int i=1;i<N;i++){ 
		int idx=selfnum(i);  //idx를 selfnum 값으로 초기화한 후 
		if(idx<=N){         //idx가 N보다 작은동안 
			num[idx]=0;     //num[idx]가 selfnum이면 있으면 0 
		}
	}
	
	for(int i=1;i<N;i++){
		if(num[i] !=0) printf("%d\n",i);  //num[i]가 selfnum이 아니면 
			                              //그 숫자를 한줄씩 출  
	}
	return 0;
}


