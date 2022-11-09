#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main(void) {
//	int i = 10;
//	char c = 69;
//	float f = 12.3;
//
//	printf("i의 주소: %u\n", &i);
//	printf("c의 주소: %u\n", &c);
//	printf("f의 주소: %u\n", &f);
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
//	printf("i = %d\n", i);// 변수의 값 출력
//	printf("&i = %u\n\n", &i);// 변수의 주소 출력
//	printf("p = %u\n", p);// 포인터의 값 출력
//	printf("*p = %d\n", *p);// 포인터를 통한 간접 참조 값 출력
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
//	printf("왼쪽 센서와 장애물과의 거리: %lf\n", sensorData[0]);
//	printf("중간 센서와 장애물과의 거리: %lf\n", sensorData[1]);
//	printf("오른쪽 센서와 장애물과의 거리: %lf\n", sensorData[2]);
//}
