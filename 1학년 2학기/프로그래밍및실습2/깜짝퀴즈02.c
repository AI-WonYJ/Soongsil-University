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
	printf("소득을 입력하시오(만원): ");
	scanf("%d", &money);
	printf("소득세는 %0.2lf 만원 입니다.", get_tax(money));
}
