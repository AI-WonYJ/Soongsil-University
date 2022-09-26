#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int x = 20, y = 10;
	int sum;
	sum = x + y;
	printf("두 수의 합: %d", sum);
	return 0;



	double i;
	printf("정수를 입력하시오: ");
	scanf("%lf", &i);
	return;



	int x;
	int y;
	int sum;

	printf("첫 번째 숫자를 입력하시오: ");
	scanf("%d", &x);

	printf("두 번째 숫자를 입력하시오: ");
	scanf("%d", &y);

	sum = x + y;
	printf("두 수의 합: %d", sum);
	
	return 0;



	int y_salary, m_salary;
	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &y_salary);
	m_salary = y_salary / 12;
	printf("월수령액(단위: 만원): %d", m_salary);
	
	return 0;



	float radius, area;
	printf("원의 반지름을 입력하시오: ");
	scanf("%f", &radius);
	area = 3.14 * (radius * radius);
	printf("\n원의 지름: %f", area);
	return 0;



	double rate, usd;
	int krw;

	printf("환율을 입력하시오: ");
	scanf("%lf", &rate);

	printf("원화 금액을 입력하시오: ");
	scanf("%d", &krw);
	
	usd = krw / rate;

	printf("원화 %d원은 %lf달러입니다.\n", krw, usd);



	double w, h, area, perimeter;

	printf("사각형의 너비와 높이 를 입력하시오: ");
	scanf("%lf %lf", &w, &h);
	area = w * h;
	perimeter = 2 * (w + h);
	
	printf("사각형의 넓이: %f\n사각형의 둘레: %f\n", area, perimeter);
	return 0;
}
