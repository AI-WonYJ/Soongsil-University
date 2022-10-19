#define _CRT_SECURE_NO_WARNINGS  // scanf 경고문 무시                                 20221797 원영진
#include <stdio.h>  // stdio 헤더파일 불러오기

void disp_menu() {  // 메뉴를 표시하는 함수
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("1. 나눗셈\n");
}

double add(double x, double y) {return x + y; }  // 덧셈 함수

double sub(double x, double y) {return x - y; }  // 뺄셈 함수

double mul(double x, double y) {return x * y; }  // 곱셈 함수

double div(double x, double y) {return x / y; }  // 나눗셈 함수

int main(void) {
	int choice;  // 번호 선택 저장 변수
	double n1 = 0;  // 첫 번째 실수 저장 변수
	double n2 = 0;  // 두 번째 실수 저장 변수
	disp_menu();  // 메뉴 표시 함수 실행
	printf("번호를 선택하세요:");
	scanf("%d", &choice);  // 번호 선택을 받아아 'choice' 변수에 저장
	printf("실수를 입력하시오: ");
	scanf("%lf", &n1);  // 첫 번째 실수 'n1' 변수에 저장
	printf("실수를 입력하시오: ");
	scanf("%lf", &n2);  // 두 번째 실수 'n2' 변수에 저장
	if (choice == 1) { printf("연산결과=%lf\n", add(n1, n2)); }  // 1번을 선택 했을 경우 덧셈 함수 실행하고 결과를 출력
	else if (choice == 2) {	printf("연산결과=%lf\n", sub(n1, n2)); }  // 2번을 선택 했을 경우 뺄셈 함수 실행하고 결과를 출력
	else if (choice == 3) {	printf("연산결과=%lf\n", mul(n1, n2)); }  // 3번을 선택 했을 경우 곱셈 함수 실행하고 결과를 출력
	else if (choice == 4) {	printf("연산결과=%lf\n", div(n1, n2)); }  // 4번을 선택 했을 경우 나눗셈 함수 실행하고 결과를 출력

	return 0;
}
