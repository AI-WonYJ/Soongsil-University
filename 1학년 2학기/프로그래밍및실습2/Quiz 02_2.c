#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double Pay(int time) {  // 주급 계산 함수
	double money;
	int FULL_HRS = 40;  // 기준 시간
	int PAY_PER_HR = 9620;  // 최저 임금
	if (time < FULL_HRS) {
		PAY_PER_HR;  // 기준 시간보다 낮으면 최저 임금 적용
	}
	else if (time < FULL_HRS * 2) {
		PAY_PER_HR *= 1.5;  // 기준 시간보다 높지만 2배 미만이면 최저 임금 1.5배 적용
	}
	else if (time >= FULL_HRS * 2) {
		PAY_PER_HR *= 2;  // 기준 시간보다 2배 이상 높으면 최저 임금 2배 적용
	}
	money = time * PAY_PER_HR;  // 시간 * 임금으로 주급 계산
	return money;  // 주급 return
}


void main() {
	int time = 0;
	printf("일주일동안 일한 시간을 입력하시오: ");
	scanf("%d", &time);  // 일한 시간 입력 받아옴
	printf("직원의 주급은 %lf", Pay(time));  // 주급 값을 받아와 출력
}
