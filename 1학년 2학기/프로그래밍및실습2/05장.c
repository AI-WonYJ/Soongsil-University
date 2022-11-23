#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	/*int price, money, change, each;
	printf("물건 값을 입력하시오: ");
	scanf("%d", &price);
	printf("사용자가 낸 돈: ");
	scanf("%d", &money);
	change = money - price;
	each = change / 5000;
	change = change % 5000;
	printf("오천원권: %d장\n", each);
	each = change / 1000;
	change = change % 1000;
	printf("천원권: %d장\n", each);
	each = change / 500;
	change = change % 500;
	printf("오백원 동전: %d개\n", each);
	each = change / 100;
	change = change % 100;
	printf("백원 동전: %d개\n", each);*/

	/*int year, result;
	printf("연도를 입력하시오: ");
	scanf("%d", &year);
	result = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
	printf("result = %d\n", result);*/



	/*LAB 연습
	C언어 점수 입력받아서 70이상이면 "pass" 그렇지 않으면 "no pass"라고 출력하는 프로그램
	int c_score;
	scanf("%d", &c_score);
	(c_score >= 70) ? printf("pass") : printf("no pass");



	/*char data = 'a';
	char key = 0xff;

	char encrpted_data;
	encrpted_data = data ^ key;

	printf("암호화된 문자 = %c\n", encrpted_data);

	char orig_data;
	orig_data = encrpted_data ^ key;
	printf("원래의 데이터 = %c\n", orig_data);
	printf("원래의 데이터 = %d\n", orig_data);*/


	/*char c;
	int i;
	float f;

	c = 65;  // 내림 변환
	i = 1.23456 + 10;  // 내림 변환
	f = 10 + 20;  // 올림 변환
	printf("c = %d, i = %d, f = %f\n", c, i, f);*/



	/*int i;
	double f;

	f = 5 / 4;
	printf("%f\n", f);
	f = (double)5 / 4;
	printf("%f\n", f);
	f = 5.0 / 4;
	printf("%f\n", f);*/


	/*double f_tmp, c_tmp;
	printf("섭씨 온도로 바꿀 화씨 온도를 입력하세요: ");
	scanf("%lf", &f_tmp);
	c_tmp = (double)5 / (double)9 * (f_tmp - 32);
	printf("섭씨 %lf도 입니다.", c_tmp);*/
}