#define _CRT_SECURE_NO_WARNINGS  // scanf ��� ����                                 20221797 ������
#include <stdio.h>  // stdio ������� �ҷ�����

void disp_menu() {  // �޴��� ǥ���ϴ� �Լ�
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("1. ������\n");
}

double add(double x, double y) {return x + y; }  // ���� �Լ�

double sub(double x, double y) {return x - y; }  // ���� �Լ�

double mul(double x, double y) {return x * y; }  // ���� �Լ�

double div(double x, double y) {return x / y; }  // ������ �Լ�

int main(void) {
	int choice;  // ��ȣ ���� ���� ����
	double n1 = 0;  // ù ��° �Ǽ� ���� ����
	double n2 = 0;  // �� ��° �Ǽ� ���� ����
	disp_menu();  // �޴� ǥ�� �Լ� ����
	printf("��ȣ�� �����ϼ���:");
	scanf("%d", &choice);  // ��ȣ ������ �޾ƾ� 'choice' ������ ����
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &n1);  // ù ��° �Ǽ� 'n1' ������ ����
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &n2);  // �� ��° �Ǽ� 'n2' ������ ����
	if (choice == 1) { printf("������=%lf\n", add(n1, n2)); }  // 1���� ���� ���� ��� ���� �Լ� �����ϰ� ����� ���
	else if (choice == 2) {	printf("������=%lf\n", sub(n1, n2)); }  // 2���� ���� ���� ��� ���� �Լ� �����ϰ� ����� ���
	else if (choice == 3) {	printf("������=%lf\n", mul(n1, n2)); }  // 3���� ���� ���� ��� ���� �Լ� �����ϰ� ����� ���
	else if (choice == 4) {	printf("������=%lf\n", div(n1, n2)); }  // 4���� ���� ���� ��� ������ �Լ� �����ϰ� ����� ���

	return 0;
}