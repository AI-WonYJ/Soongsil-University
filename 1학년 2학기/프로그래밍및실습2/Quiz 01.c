#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n;
	while (1) {
		printf("�ϳ��� ������ �Է��ϼ���.: ");
		scanf("%d", &i);
		if (i == 0 || i == 1) {
			n = 10;
		}
		else if (i == 2) {
			n = 500;
			break;
		}
		else {
			n = 0;
		}
		printf("%d\n", n);
		printf("�Էµ� ���� ���ϴ� ���� �ƴմϴ�.\n\n");
	}
	printf("%d\n", n);
	printf("���ϴ� ���� ã�ҽ��ϴ�!\n");
}