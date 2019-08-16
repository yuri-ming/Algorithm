/*정수 n개가 주어졌을때
  n개의 합을 구하는 함수*/


void sum(int *a,int n){
	int i;
	int ans=0;
	for(i=0;i<n;i++){
		ans+=a[i];
	}
	
	return ans;

	
}
