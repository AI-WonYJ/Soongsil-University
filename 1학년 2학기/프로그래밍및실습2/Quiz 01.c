#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n;
	while (1) {
		printf("하나의 정수를 입력하세요.: ");
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
		printf("입력된 수는 원하는 값이 아닙니다.\n\n");
	}
	printf("%d\n", n);
	printf("원하는 값을 찾았습니다!\n");
}
