#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main(void) {
//	int i = 10;
//	char c = 69;
//	float f = 12.3;
//
//	printf("i�� �ּ�: %u\n", &i);
//	printf("c�� �ּ�: %u\n", &c);
//	printf("f�� �ּ�: %u\n", &f);
//	return 0;
//}



//int main(void) {
//	int i = 10;
//	double f = 12.3;
//	int* pi = NULL;
//
//	double* pf = NULL;
//	pi = &i;
//	pf = &f;
//
//	printf("%u %u\n", pi, &i);
//	printf("%u %u\n", pf, &f);
//	return 0;
//}



//int main(void)
//{
//	int i = 3000;
//	int* p = NULL;
//	p = &i;
//	printf("i = %d\n", i);// ������ �� ���
//	printf("&i = %u\n\n", &i);// ������ �ּ� ���
//	printf("p = %u\n", p);// �������� �� ���
//	printf("*p = %d\n", *p);// �����͸� ���� ���� ���� �� ���
//	return 0;
//}



//int main(void) {
//	int i = 10;
//	int *pi = &i;
//
//	printf("i = &d, pi = %p\n", i, pi);
//	(*pi)++;
//	printf("i = &d, pi = %p\n", i, pi);
//
//	printf("i = &d, pi = %p\n", i, pi);
//	*pi++;
//	printf("i = &d, pi = %p\n", i, pi);
//
//	return 0;
//}



//#define SIZE 5
//void print_image(int image[][SIZE]) {
//	int r, c;
//	for (r = 0; r < SIZE; r++) {
//		for (c = 0; c < SIZE; c++) {
//			printf("%03d", image[r][c]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//void brighten_image(int image[][SIZE]) {
//	int r, c;
//	int* p;
//	p = &image[0][0];
//	for (r = 0; r < SIZE; r++) {
//		for (c = 0; c < SIZE; c++) {
//			*p += 10;
//			p++;
//		}
//	}
//}
//
//int main(void) {
//	int image[5][5] = { {10, 20, 30, 40, 50,}, {10, 20, 30, 40, 50,}, {10, 20, 30, 40, 50,}, {10, 20, 30, 40, 50,}, {10, 20, 30, 40, 50,} };
//
//	print_image(image);
//	brighten_image(image);
//	print_image(image);
//	return 0;
//}



//void getSensorData(double* p) {
//	p[0] = rand() % 100;
//	p[1] = rand() % 100;
//	p[2] = rand() % 100;
//
//	return 0;
//}
//
//int main(void) {
//	double sensorData[3];
//	getSensorData(sensorData);
//
//	printf("���� ������ ��ֹ����� �Ÿ�: %lf\n", sensorData[0]);
//	printf("�߰� ������ ��ֹ����� �Ÿ�: %lf\n", sensorData[1]);
//	printf("������ ������ ��ֹ����� �Ÿ�: %lf\n", sensorData[2]);
//}



//#define SIZE 10
//void convert(double* grades, double* scores, int size) {
//	int i;
//	for (i = 0; i < size; i++) {
//		scores[i] = (grades[i] / 4.5) * 100.0;
//	}
//}
//
//void main() {
//	double grade[SIZE];
//	double score[SIZE];
//
//	float s = 0.0;
//
//	for (int j = 0; j < SIZE; j++) {
//		grade[j] = s;
//		s += 0.5;
//	}
//
//	convert(grade, score, SIZE);
//
//	for (int j = 0; j < SIZE; j++) {
//		printf("%05.2lf, ", grade[j]);
//	}
//	printf("\n");
//	for (int j = 0; j < SIZE; j++) {
//		printf("%05.2lf, ", score[j]);
//	}
//
//	return 0;
//}



//#define SIZE 4
//
//int serach(int *A, int size, int search_value) {
//	int i;
//	for (i = 0; i < size; i++) {
//		if (A[i] == search_value) {
//			return i;
//			break;
//		}
//		else {
//			continue;
//		}
//	}
//	return -1;
//}
//
//void main() {
//	int A[SIZE] = { 150, 200, 600, 900 };
//	printf("�ε��� ��ȣ: %d", serach(A, SIZE, 200));
//}