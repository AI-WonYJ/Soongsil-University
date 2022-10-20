#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/* Lab: 사칙 연산
	int x = 20;
	int y = 10;
	int sum, diff, mul, div;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("두수의 합: %d\n", sum);
	printf("두수의 차: %d\n", diff);
	printf("두수의 곱: %d\n", mul);
	printf("두수의 몫: %d\n", div);*/
	

	
	/* 덧셈 프로그램 #2: 사용자로부터 입력을 받아보자.
	int x, y, sum;
	printf("첫번째 숫자를 입력하시오: ");
	scanf("%d", &x);
	printf("두번째 숫자를 입력하시오: ");
	scanf("%d", &y);
	sum = x + y;
	printf("두수의 합: %d", sum);*/




	/* 연봉 계산기 프로그램: 사용자가 연봉을 입력하면 월 수령액을 계산하는 프로그램을 작성해보자.
	int y_income, m_income;
	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &y_income);
	m_income = y_income / 12;
	printf("월수령액(단위: 만원): %d", m_income);*/



	/* 원의 면적 계산 프로그램: 사용자로부터 원의 반지름을 입력받고 이 원의 면적을 구한 다음, 화면에 출력한다.
	float r, area;
	float pi = 3.14;
	printf("반지름을 입력하시오: ");
	scanf("%f", &r);
	area = r * r * pi;
	printf("원의 면적: %f", area);*/



	/* 환율 계싼 프로그램: 사용자가 입력하는 원화를 달러화로 계산하여 출력하는 프로그램을 작성하여 보자.
	int won;
	double rate, dollar;
	printf("환율을 입력하시오: ");
	scanf("%lf", &rate);
	printf("원화의 금액을 입력하시오: ");
	scanf("%d", &won);
	dollar = won / rate;
	printf("원화 %d원은 %lf달러 입니다.\n", won, dollar);*/



	/* Mini Project: 사각형의 둘레와 면적
	double w = 10.0;
	double h = 5.0;
	double area = w * h;
	double perimeter = (w + h) * 2;
	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);*/



	/* 도전문제
	double w, h, area, perimeter;
	printf("사각형의 너비를 입력하시오: ");
	scanf("%lf", &w);
	printf("사각형의 높이를 입력하시오: ");
	scanf("%lf", &h);
	area = w * h;
	perimeter = (w + h) * 2;
	printf("사각형의 넓이: %lf\n사각형의 둘레: %lf\n", area, perimeter);*/



	/* Lab 연습
	int ascii;				<< int로 받아와서 char로 출력하면 아스키 변환 됨.
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &ascii);
	printf("문자: %c입니다.", ascii);*/
}
