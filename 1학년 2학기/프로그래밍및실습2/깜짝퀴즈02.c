#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_tax(int income) {
	double tax = 0;
	if (income > 1000) {
		int plus = income - 1000;
		tax = (1000 * 0.08) + (plus * 0.1);
	}
	else {
		tax = income * 0.08;
	}
	return tax;
}

int main(void) {
	int money;
	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d", &money);
	printf("�ҵ漼�� %0.2lf ���� �Դϴ�.", get_tax(money));
}