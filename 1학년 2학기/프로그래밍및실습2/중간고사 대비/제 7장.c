#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*예제 #3: 1부터 n까지의 합 계산하는 프로그램
void main() {
	int n;
	int sum = 0;
	int i = 1;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1부텉 %d까지의 합은 %d입니다.\n", n, sum);*/



/*lab: 반감기
void main() {
	int year;
	double remain = 100.0;
	printf("반감기를 입력하시오(년): ");
	scanf("%d", &year);
	int reyear = year;
	remain = remain / 2;
	printf("%d년 후에 남은 양 = %lf\n", reyear, remain);
	while (remain >= 10) {
		remain = remain / 2;
		reyear += year;
		printf("%d년 후에 남은 양 = %lf\n", reyear, remain);
	}
	printf("1/10 이하로 되기 까지 걸린 시간 = %d년", reyear);*/



/*예제 #1
void main(){
	int n;
	int sum = 0;
	do {
		printf("정수를 입력하시오: ");
		scanf("%d", &n);
		sum += n;
	} while (n != 0);
	printf("숫자들의 합 = %d\n", sum);*/
