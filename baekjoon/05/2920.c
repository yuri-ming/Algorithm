#include <stdio.h>

int main() {
	int num[8];
	int i;
	int as = 0;
	int	ds = 0;
	
	for (i = 0; i < 8; i++) {
		scanf_s("%d", &num[i]);
		
		if (i + 1 == num[i]) as++; 
		/*(���� 1~8�� ���ĵǾ��ִٸ�)�ε��� ���� �Է¹����Ƿ� �ε�����+1�� ��¥ ����
		  �ϳ��� �Է¹��������� as�� �� 1�� ����*/
		else if (8 - i == num[i]) ds++; 
		/*(�������� ���ĵǾ��ִٸ�) �ε����� 0�϶� ���� ū ���� �;���
		  �ϳ��� �Է¹��������� ds�� �� 1�� ����*/
		
	}
	if (as == 8) printf("ascending\n"); //���ʷ� ���ĵǾ��ִٸ� as���� 8�� ��
	else if (ds == 8) printf("descending\n"); //�������� ���ĵǾ��ִٸ� ds���� 8�̵�
	else printf("mixed"); //�Ѵ� �������� ������ mixed ���

	

	return 0;

}