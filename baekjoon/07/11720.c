#include <stdio.h>
int main() {
	int n, num;
	int total = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%1d", &num);  //num에 가장 처음 입력된 정수 한자리만 입력됨
		total += num;
	}
	printf("%d", total);
	return 0;

}