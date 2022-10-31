#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*#define SIZE 6

int main(void) {
	int freq[SIZE] = { 0 };
	for (int i = 0; i < 10000; i++)
		++freq[rand() % 6];
	printf("======================\n");
	printf("면\t빈도\n");
	printf("======================\n");

	for (int i = 0; i < SIZE; i++)
		printf("%3d\t%3d\n", i + 1, freq[i]);
	return 0;
}*/



/*# define SEATS 10                //수정 필요

int main(void) {
	int seat;
	int seats[SEATS] = { 0 };
	char check;
	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n): ");
		scanf("%c", &check);
		if (check == 'y' || check == 'Y') {
			printf("------------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("------------------------------\n");
			for (int i = 0; i < SEATS; i++) {
				printf("%d ", seats[i]);
			}
			printf("\n");
			printf("몇번째 좌석을 예약하시겠습니까?: ");
			scanf("%d", &seat);
			if (seats[seat - 1] == 0) {
				seats[seat - 1] == 1;
				printf("예약되었습니다.\n");
			}
			else {
				printf("이미 예약된 자리입니다.\n");
			}

		}
		if (check == 'n' || check == 'N') {
			printf("예약이 종료되었습니다\n");
			break;
		}
	}
}*/



