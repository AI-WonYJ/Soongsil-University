#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

/*#define SIZE 6

int main(void) {
	int freq[SIZE] = { 0 };
	for (int i = 0; i < 10000; i++)
		++freq[rand() % 6];
	printf("======================\n");
	printf("��\t��\n");
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
//		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
//		scanf(" %c", &check);
//		if (check == 'y' || check == 'Y') {
//			printf("------------------------------\n");
//			printf("1 2 3 4 5 6 7 8 9 10\n");
//			printf("------------------------------\n");
//			for (int i = 0; i < SEATS; i++) {
//				printf("%d ", seats[i]);
//			}
//			printf("\n���° �¼��� �����Ͻðڽ��ϱ�?: ");
//			scanf("%d", &seat);
//			if (seats[seat - 1] == 0) {
//				seats[seat - 1] = 1;
//				printf("����Ǿ����ϴ�.\n");
//			}
//			else {
//				printf("�̹� ����� �ڸ��Դϴ�.\n");
//			}
//
//		}
//		else if (check == 'n' || check == 'N') {
//			printf("������ ����Ǿ����ϴ�\n");
//			break;
//		}
//	}
//	return 0;
//}




/*#define SIZE 10

int main(void) {
	int prices[SIZE] = { 0 };
	int i, ;
	printf("---------------------------------------\n");
	printf("1 2 3 4 5 6 7 8 9 10\n");
	printf("---------------------------------------\n");
	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++) {
		prices[i] = (rand() % 100) + 1;
		printf("%.3d ", prices[i]);
	}
	printf("\n\n");
	 = prices[0];
	for (i = 1; i < SIZE; i++) {
		if (prices[i] < )
			 = prices[i];
	}
	printf("�ּҰ��� %d�Դϴ�.", );
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
//	printf("�ּҰ��� %d�Դϴ�.", maximum);
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
//	printf("Ž���� ���� �Է��Ͻÿ�: ");
//	scanf("%d", &key);
//
//	for (i = 0; i < SIZE; i++) {
//		count++;
//		if (list[i] == key) {
//			printf("Ž�� ���� �ε��� = %d\nŽ�� Ƚ��: %d\n", i,count);
//		}
//	}
//
//	printf("Ž�� ����\n");
//	return 0;
//}



//#define SIZE 16
//
//int binary_search(int list[], int n, int key);
//
//int main(void) {
//	int key;
//	int grade[SIZE] = { 2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47 };
//	printf("Ž���� ���� �Է��Ͻÿ�: ");
//	scanf("%d", &key);
//	printf("Ž�� ��� = %d\n", binary_search(grade, SIZE, key));
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
//		printf("�л� #%i�� �������� = %3.2f\n", i + 1, final_scores);
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
//	printf("�� ������ %d�Դϴ�.\n", total_scale);
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
//	printf("��ȯ�� �̹���\n");
//	display(image);
//	inverse(image);
//	printf("\n\n��ȯ�� �̹���\n");
//	display(image);
//	return 0;
//}



//int main(void)
//{
//	char board[3][3];
//	int x, y, k, i;
//	// ���带 �ʱ�ȭ�Ѵ�. 
//	for (x = 0; x < 3; x++)
//		for (y = 0; y < 3; y++) board[x][y] = ' ';
//	// ����ڷκ��� ��ġ�� �޾Ƽ� ���忡 ǥ���Ѵ�. 
//	for (k = 0; k < 9; k++) {
//		printf("(x, y) ��ǥ: ");
//		scanf(" %d %d", &x, &y);
//		board[x][y] = (k % 2 == 0) ? 'X' : 'O';// ������ ������ ���� 'X', 'O'�� ����
//		// ���带 ȭ�鿡 �׸���. 
//		for (i = 0; i < 3; i++) {
//			printf("---|---|---\n");
//			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		}
//		printf("---|---|---\n");
//	}
//	return 0;
//}