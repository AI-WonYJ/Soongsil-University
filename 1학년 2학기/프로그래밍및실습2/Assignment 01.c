#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//01
	double c, f;
	printf("�й�: 20221797\n�̸�: ������\n\n");

	printf("�����µ��� �ٲٰ� ���� ȭ���µ��� �Է��ϼ���\n");
	scanf("%lf", &f);  //ȭ���µ� �Է�
	c = (5.0 / 9.0)*(f - 32.0);  //ȭ���µ��� �����µ��� ��ȯ�� c�� ����
	printf("%lf",c);  //�����µ� ���
	return;

	//02
	double mw, ew;
	printf("�й�: 20221797\n�̸�: ������\n\n");

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf("%lf", &ew);  //������ �Է�
	mw = ew * 0.17;  //�޿����� ������ ���
	printf("�޿����� �����Դ� %lfkg�Դϴ�.", mw);  //�޿����� ������ ���
	return;
}	