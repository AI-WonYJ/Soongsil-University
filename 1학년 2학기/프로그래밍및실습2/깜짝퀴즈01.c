/* �� ������ ȭ�鿡�� �Է¹޾� ū �� ����ϱ�
1. scanf_s �Լ� �̿�
2. if���� ���� �� �� ��
3. ū �� ���(printf �Լ�)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int A, B;
	printf("ù ��° ���� �Է��ϼ���: ");
	scanf("\n%d", &A);

	printf("�� ��° ���� �Է��ϼ���: ");
	scanf("\n%d", &B);
	if (A > B) {
		printf("ù ��° ���� %d�� �� Ů�ϴ�.", A);
	}
	else if (B > A) {
		printf("�� ��° ���� %d�� �� Ů�ϴ�.", B);
	}
	else {
		printf("�� ���� %d�� �����ϴ�.", A);
	}
}