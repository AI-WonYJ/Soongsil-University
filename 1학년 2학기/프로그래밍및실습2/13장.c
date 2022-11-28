#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//struct point {
//	int x;
//	int y;
//};
//
//int main(void) {
//	struct point p1, p2;
//	int xdiff, ydiff;
//	double dist;
//	printf("점의 좌표를 입력하시오(x, y): ");
//	scanf("%d %d", &p1.x, &p1.y);
//	printf("점의 좌표를 입력하시오(x, y): ");
//	scanf("%d %d", &p2.x, &p2.y);
//	xdiff = p1.x - p2.x;
//	ydiff = p1.y - p2.y;
//	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));
//	printf("거리는 %f입니다.\n", dist);
//	return 0;
//}



//struct point {
//	int x;
//	int y;
//};
//struct rect {
//	struct point p1;
//	struct point p2;
//};
//
//int main(void) {
//	struct rect r;
//	int w, h, area, peri;
//	printf("왼쪽 상단의 좌표를 입력하시오: ");
//	scanf("%d %d", &r.p1.x, &r.p1.y);
//	printf("오른쪽 상단의 좌표를 입력하시오: ");
//	scanf("%d %d", &r.p2.x, &r.p2.y);
//	w = r.p2.x - r.p1.x;
//	h = r.p2.x - r.p1.x;
//	area = w * h;
//	peri = 2 * w + 2 * h;
//	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
//	return 0;
//}



//struct book {
//	int id;
//	char title[100];
//	char author[20];
//};
//
//int main(void) {
//	struct book b1 = { 1, "바람과 함께 사라지다", "마가렛 미첼"};
//	printf("%d, %s, %s\n", b1.id, b1.title, b1.author);
//}