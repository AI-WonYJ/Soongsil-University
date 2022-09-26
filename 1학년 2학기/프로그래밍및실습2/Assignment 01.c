#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//01
	double c, f;
	printf("학번: 20221797\n이름: 원영진\n\n");

	printf("섭씨온도로 바꾸고 싶은 화씨온도를 입력하세요\n");
	scanf("%lf", &f);  //화씨온도 입력
	c = (5.0 / 9.0)*(f - 32.0);  //화씨온도를 섭씨온도로 변환해 c에 저장
	printf("%lf",c);  //섭씨온도 출력
	return;

	//02
	double mw, ew;
	printf("학번: 20221797\n이름: 원영진\n\n");

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf("%lf", &ew);  //몸무게 입력
	mw = ew * 0.17;  //달에서의 몸무게 계산
	printf("달에서의 몸무게는 %lfkg입니다.", mw);  //달에서의 몸무게 출력
	return;
}	