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
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
//	scanf("%d %d", &p1.x, &p1.y);
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
//	scanf("%d %d", &p2.x, &p2.y);
//	xdiff = p1.x - p2.x;
//	ydiff = p1.y - p2.y;
//	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));
//	printf("�Ÿ��� %f�Դϴ�.\n", dist);
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
//	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
//	scanf("%d %d", &r.p1.x, &r.p1.y);
//	printf("������ ����� ��ǥ�� �Է��Ͻÿ�: ");
//	scanf("%d %d", &r.p2.x, &r.p2.y);
//	w = r.p2.x - r.p1.x;
//	h = r.p2.x - r.p1.x;
//	area = w * h;
//	peri = 2 * w + 2 * h;
//	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);
//	return 0;
//}



//struct book {
//	int id;
//	char title[100];
//	char author[20];
//};
//
//int main(void) {
//	struct book b1 = { 1, "�ٶ��� �Բ� �������", "������ ��ÿ"};
//	printf("%d, %s, %s\n", b1.id, b1.title, b1.author);
//}



//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//int main(void)
//{
//	struct student s = { 20070001, "ȫ�浿", 4.5 };
//	struct student* p;
//	p = &s;
//	printf("�й�=%d �̸�=%s ����=%f \n", s.number, s.name, s.grade);
//	printf("�й�=%d �̸�=%s ����=%f \n", (*p).number, (*p).name,
//		(*p).grade);
//	printf("�й�=%d �̸�=%s ����=%f \n", p->number, p->name, p->grade);
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
//	printf("������ ���� (%f, %f)�Դϴ�.\n", sum.x, sum.y);
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
//		int stu_number; // �й�
//		char reg_number[15]; // �ֹε�Ϲ�ȣ
//	} id;
//	char name[20];
//};
//
//void print(struct student s)
//{
//	switch (s.type)
//	{
//	case STU_NUMBER:
//		printf("�й� %d\n", s.id.stu_number);
//		printf("�̸�: %s\n", s.name);
//		break;
//	case REG_NUMBER:
//		printf("�ֹε�Ϲ�ȣ: %s\n", s.id.reg_number);
//		printf("�̸�: %s\n", s.name);
//		break;
//	default:
//		printf("Ÿ�Կ���\n");
//		break;
//	}
//}
//
//int main(void)
//{
//	struct student s1, s2;
//	s1.type = STU_NUMBER;
//	s1.id.stu_number = 20190001;
//	strcpy(s1.name, "ȫ�浿");
//	s2.type = REG_NUMBER;
//	strcpy(s2.id.reg_number, "860101-1056076");
//	strcpy(s2.name, "��ö��");
//	print(s1);
//	print(s2);
//}



