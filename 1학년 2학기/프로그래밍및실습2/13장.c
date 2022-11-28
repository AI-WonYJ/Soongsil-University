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



//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//int main(void)
//{
//	struct student s = { 20070001, "홍길동", 4.5 };
//	struct student* p;
//	p = &s;
//	printf("학번=%d 이름=%s 학점=%f \n", s.number, s.name, s.grade);
//	printf("학번=%d 이름=%s 학점=%f \n", (*p).number, (*p).name,
//		(*p).grade);
//	printf("학번=%d 이름=%s 학점=%f \n", p->number, p->name, p->grade);
//	return 0;
//}



//struct vector {
//	float x;
//	float y;
//};
//struct vector get_vector_sum(struct vector a, struct vector b);
//int main(void)
//{
//	struct vector a = { 2.0, 3.0 };
//	struct vector b = { 5.0, 6.0 };
//	struct vector sum;
//	sum = get_vector_sum(a, b);
//	printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);
//	return 0;
//}
//
//
//struct vector get_vector_sum(struct vector a, struct vector b) {
//	struct vector result;
//	
//	result.x = a.x + b.x;
//	result.y = a.y + b.y;
//	return result;
//}



//#define STU_NUMBER 1
//#define REG_NUMBER 2
//struct student {
//	int type;
//	union {
//		int stu_number; // 학번
//		char reg_number[15]; // 주민등록번호
//	} id;
//	char name[20];
//};
//
//void print(struct student s)
//{
//	switch (s.type)
//	{
//	case STU_NUMBER:
//		printf("학번 %d\n", s.id.stu_number);
//		printf("이름: %s\n", s.name);
//		break;
//	case REG_NUMBER:
//		printf("주민등록번호: %s\n", s.id.reg_number);
//		printf("이름: %s\n", s.name);
//		break;
//	default:
//		printf("타입오류\n");
//		break;
//	}
//}
//
//int main(void)
//{
//	struct student s1, s2;
//	s1.type = STU_NUMBER;
//	s1.id.stu_number = 20190001;
//	strcpy(s1.name, "홍길동");
//	s2.type = REG_NUMBER;
//	strcpy(s2.id.reg_number, "860101-1056076");
//	strcpy(s2.name, "김철수");
//	print(s1);
//	print(s2);
//}



