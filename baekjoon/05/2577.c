#include <stdio.h>
int main() {
	int a,b,c,i;
	int n = 0;
	int buf[10] = { 0 }; //�迭 0���� �ʱ�ȭ
	int total = 1;

	
	
	scanf_s("%d\n", &a);
	scanf_s("%d\n", &b);
	scanf_s("%d\n", &c);
	
	total = a * b * c;

	while (total > 0) { 
		n = total % 10; //n=�迭�� �ε��� �� ����
		buf[n]=buf[n]+1; 
		/*buf[0]=ù��°�ڸ���
		  buf[1]=�ι�°�ڸ���...
		  ���ڸ� �������� ��⿬�갪�� ������ �迭�ȿ� ����ִ°� ����*/
		total=total / 10; //���ڸ��� ������
		
	}
	for (i = 0; i < 10;i++) {
		printf("%d\n", buf[i]);

	}
	return 0;
}