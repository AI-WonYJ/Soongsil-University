#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <math.h>

void save(int amount) {
	static int s = 0;

	if (amount >= 0) {
		printf("%d\t\t", amount);
	}
	else {
		printf("\t%d\t", -amount);
	}
	s += amount;
	printf("%d \n", s);
}

int main(void) {
	printf("==========================\n");
	printf("입금\t출금\t잔고\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==========================\n");

	return 0;
}
