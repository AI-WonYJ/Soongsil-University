#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

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



//# define SEATS 10
//
//int main(void) {
//	int seats[SEATS] = { 0 };
//	char check;
//	int seat;
//	while (1) {
//		printf("좌석을 예약하시겠습니까?(y 또는 n): ");
//		scanf(" %c", &check);
//		if (check == 'y' || check == 'Y') {
//			printf("------------------------------\n");
//			printf("1 2 3 4 5 6 7 8 9 10\n");
//			printf("------------------------------\n");
//			for (int i = 0; i < SEATS; i++) {
//				printf("%d ", seats[i]);
//			}
//			printf("\n몇번째 좌석을 예약하시겠습니까?: ");
//			scanf("%d", &seat);
//			if (seats[seat - 1] == 0) {
//				seats[seat - 1] = 1;
//				printf("예약되었습니다.\n");
//			}
//			else {
//				printf("이미 예약된 자리입니다.\n");
//			}
//
//		}
//		else if (check == 'n' || check == 'N') {
//			printf("예약이 종료되었습니다\n");
//			break;
//		}
//	}
//	return 0;
//}



/*#define SIZE 10

int main(void) {
	int prices[SIZE] = { 0 };
	int i, minimum;
	printf("---------------------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------------------------\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++) {
		prices[i] = (rand() % 100) + 1;
		printf("%.3d ", prices[i]);
	}
	printf("\n\n");
	minimum = prices[0];
	for (i = 1; i < SIZE; i++) {
		if (prices[i] < minimum)
			minimum = prices[i];
	}
	printf("최소값은 %d입니다.", minimum);
	return 0;
}*/



//#define SIZE 10
//
//int main(void) {
//	int prices[SIZE] = { 0 };
//	int i, maximum;
//	printf("---------------------------------------\n");
//	printf("1 2 3 4 5 6 7 8 9 10\n");
//	printf("---------------------------------------\n");
//	srand((unsigned)time(NULL));
//	for (i = 0; i < SIZE; i++) {
//		prices[i] = (rand() % 100) + 1;
//		printf("%.3d ", prices[i]);
//	}
//	printf("\n\n");
//	maximum = prices[0];
//	for (i = 1; i < SIZE; i++) {
//		if (prices[i] > maximum)
//			maximum = prices[i];
//	}
//	printf("최소값은 %d입니다.", maximum);
//	return 0;
//}



//#define SIZE 10
//
//int main(void) {
//	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
//	int i, j, temp, least;
//	int count = 0;
//
//	for (i = 0; i < SIZE - 1; i++) {
//		least = i;
//		for (j = i + 1; j < SIZE; j++) {
//			count++;
//			if (list[j] < list[least]) {
//				least = j;
//			}
//		}
//		temp = list[i];
//		list[i] = list[least];
//		list[least] = temp;
//	}
//	for (i = 0; i < SIZE; i++) {
//		printf("%d ", list[i]);
//	}
//	printf("\n%d",count);
//		return 0;
//}



//#define SIZE 10
//
//int main(void) {
//	int key, i;
//	int count = 0;
//	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	printf("탐색할 값을 입력하시오: ");
//	scanf("%d", &key);
//
//	for (i = 0; i < SIZE; i++) {
//		count++;
//		if (list[i] == key) {
//			printf("탐색 성공 인덱스 = %d\n탐색 횟수: %d\n", i,count);
//		}
//	}
//
//	printf("탐색 종료\n");
//	return 0;
//}



//#define SIZE 16
//
//int binary_search(int list[], int n, int key);
//
//int main(void) {
//	int key;
//	int grade[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };
//	printf("탐색할 값을 입력하시오: ");
//	scanf("%d", &key);
//	printf("탐색 결과 = %d\n", binary_search(grade, SIZE, key));
//
//	return 0;
//}
//
//int binary_search(int list[], int n, int key) {
//	int low, high, middle;
//	low = 0;
//	high = n - 1;
//	while (low <= high) {
//		printf("[%d %d]\n", low, high);
//		middle = (low + high) / 2;
//		if (key == list[middle]) {
//			return middle;
//		}
//		else if (key > list[middle]) {
//			low = middle + 1;
//		}
//		else {
//			high = middle - 1;
//		}
//	}
//	return -1;
//}



//#define ROWS 3
//#define COLS 5
//
//int main(void) {
//	int a[ROWS][COLS] = { { 87, 98, 80, 76, 3}, {99, 89, 90, 90, 0}, {65, 68, 50, 49, 0} };
//
//	for (int i = 0; i < ROWS; i++) {
//		double final_scores = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.1 - a[i][4];
//		printf("학생 #%i의 최종성적 = %3.2f\n", i + 1, final_scores);
//	}
//	return 0;
//}



//#define YEARS 3
//#define PRODUCTS 5
//
//int sum(int scores[YEARS][PRODUCTS]);
//
//int main(void) {
//	int sales[YEARS][PRODUCTS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	int total_scale;
//
//	total_scale = sum(sales);
//	printf("총 매출은 %d입니다.\n", total_scale);
//
//	return 0;
//}
//
//int sum(int scores[YEARS][PRODUCTS]) {
//	int y, p;
//	int total = 0;
//
//	for (y = 0; y < YEARS; y++) {
//		for (p = 0; p < PRODUCTS; p++) {
//			total += scores[y][p];
//		}
//	}
//	return total;
//}



//void display(int image[8][16])
//{
//	for (int r = 0; r < 8; r++) {
//		for (int c = 0; c < 16; c++) {
//			if (image[r][c] == 0) {
//				printf("*");
//			}
//			else {
//				Sleep(100);
//				Beep(510, 200);
//				Sleep(100);
//				printf("_");
//			}
//		}
//		printf("\n");
//
//	}
//}
//void inverse(int img[8][16])
//{
//	for (int r = 0; r < 8; r++) {
//		for (int c = 0; c < 16; c++) {
//			if (img[r][c] == 0)
//				img[r][c] = 1;
//			else
//				img[r][c] = 0;
//		}
//	}
//}
//
//int main(void)
//{
//	int image[8][16] = {
//	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
//	{ 1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1 },
//	{ 1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1 },
//	{ 1,1,1,0,0,0,1,1,0,0,1,1,1,1,1,1 },
//	{ 1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1 },
//	{ 1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1 },
//	{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
//	{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 } };
//	printf("변환전 이미지\n");
//	display(image);
//	inverse(image);
//	printf("\n\n변환후 이미지\n");
//	display(image);
//	return 0;
//}


//int main(void)
//{
//	char board[3][3];
//	int x, y, k, i;
//	// 보드를 초기화한다. 
//	for (x = 0; x < 3; x++)
//		for (y = 0; y < 3; y++) board[x][y] = ' ';
//	// 사용자로부터 위치를 받아서 보드에 표시한다. 
//	for (k = 0; k < 9; k++) {
//		printf("(x, y) 좌표: ");
//		scanf(" %d %d", &x, &y);
//		board[x][y] = (k % 2 == 0) ? 'X' : 'O';// 현재의 순번에 따라 'X', 'O'중 선택
//		// 보드를 화면에 그린다. 
//		for (i = 0; i < 3; i++) {
//			printf("---|---|---\n");
//			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		}
//		printf("---|---|---\n");
//	}
//	return 0;
//}
