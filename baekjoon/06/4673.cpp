/*�����ѹ�*/
 
#include <stdio.h>
#define N 10001

int num[N];

int selfnum(int n){  //selfnumber ã�� �Լ� 
	int sum=n;  //���� sum�� n���� 
	
 	while(n!=0){
		sum += n%10;   
		n=n/10;         //n�� 0�� �ƴѵ��� sum�� sum�� sum�� ������ �ڸ����� ���� 
	}                   //  �׸��� n�� ���ڸ��� �ٿ���(0�� �ɶ�����)   
	return sum;
}

int main(){	
	for(int i=0;i<N;i++){
		num[i]=1;
	}
	
	for(int i=1;i<N;i++){ 
		int idx=selfnum(i);  //idx�� selfnum ������ �ʱ�ȭ�� �� 
		if(idx<=N){         //idx�� N���� �������� 
			num[idx]=0;     //num[idx]�� selfnum�̸� ������ 0 
		}
	}
	
	for(int i=1;i<N;i++){
		if(num[i] !=0) printf("%d\n",i);  //num[i]�� selfnum�� �ƴϸ� 
			                              //�� ���ڸ� ���پ� ��  
	}
	return 0;
}


