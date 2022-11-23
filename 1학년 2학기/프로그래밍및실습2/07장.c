#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


#define RATE 0.07// 이율
#define INVESTMENT 10000000 // 초기 투자금
#define YEARS 10 // 투자 기간


int main(void)
{
	/*int n;
	int i = 1;
	printf("출력하고 싶은 단: ");
	scanf("%d", &n);
	while (i <= 9) {
		printf("%d*%d = %d\n", n, i, n * i);
		i++;
	}
	return 0;*/



	/*char life = 1;
	int Method = 0;
	while (life == 1) {
		scanf("%d", &Method);
		if (Method == 0) {
			printf("되는걸로 하자.\n");
		}
		else {
			printf("수고했다. 다음거 하자.\n");
		}
	}
	return 0;*/


	/*int i, n, sum;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다\n", n, sum);
	return 0;*/

	/*int n = 1;
	double money = 0.5;
	while (n <= 30) {
		money *= 2;
		printf("%d일날 현재 금액 = %lf원\n", n, money);
		n++;
	}*/



	/*int sum = 0, n;
	do {
		printf("정수를 입력하시오: ");
		scanf("%d", &n);
		sum += n;
	} while (n != 0);
	printf("숫자들의 합 = %d\n", sum);
	return 0;*/



	/*int i = 0;
	do
	{
		printf("1---새로만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n");
		printf("하나를 선택하시요.\n");
		scanf("%d", &i);
	} while (i < 1 || i > 3);
	printf("선택된 메뉴=%d\n", i);
	
	return 0;*/



	/*int answer = 59;
	int n;
	int tries = 0;
	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &n);
		if (n < answer) {
			printf("제시한 점수가 높습니다.\n");
		}
		else if (n > answer) {
			printf("제시한 점수가 낮습니다.\n");
		}
		tries++;
	} while (n != answer);
	printf("축하합니다. 시도횟수 = %d\n", tries);*/



	/*srand(time(NULL));
	printf("난수 : %d\n", rand());
	printf("난수 : %d\n", rand());
	printf("난수 : %d\n", rand());
	printf("난수 : %d\n", rand());*/



	/*int answer = rand(0, 100);
	int n;
	int tries = 0;
	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &n);
		if (n < answer) {
			printf("제시한 점수가 높습니다.\n");
		}
		else if (n > answer) {
			printf("제시한 점수가 낮습니다.\n");
		}
		tries++;
	} while (n != answer);
	printf("축하합니다. 시도횟수 = %d\n", tries);*/

	/*long fact = 1;
	int i, n;
	printf("정수를 입력하시요:");
	scanf("%d", &n);
	for (i = n; i >= 1; i--)
	fact = fact * i;
	printf("%d!은 %d입니다.\n", n, fact);
	return 0;*/



	/*int x, y;

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 10; x++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;*/



	/*int x, y;
	for (y = 0; y < 5; y++) {
		for (x = 0; x <= y; x++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;*/



	/*int x, y, z;
	int center = 5;
	for (y = 0; y < 5; y++) {
		for (x = 0; x <= center - y; x++) {
			printf(" ");
		}
		for (z = 0; z <= y; z++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;*/


	/*int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d 곱하기 %d은 %d\n", i, j, i * j);
		}
	}

	return 0;*/



	/*int a, b, c;
	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = b; c <= 100; c++) {
				if ((a * a + b * b) == c * c) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
	return 0;*/



	/*int a, b;
	for (a = 1; a <= 6; a++) {
		for (b = 1; b <= 6; b++) {
			if (a + b == 6) {
				printf("(%d, %d)\n", a, b);
			}
		}
	}
	return 0;*/



	/*int y = 0;
	int money = 100;
	while(1) {
		y++;
		money += money * 0.3;
		if (money >= 1000) {
			break;
		}
	}
	printf("%d년", y);
	return 0;*/
	


	/*char letter;
	while (1) {
		printf("\n소문자를 입력하시오: ");
		scanf("%c", &letter);

		if (letter == 'Q' || letter == 'q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;
	}
	letter -= 32;
	printf("\n변환된 대문자는 %c입니다.\n", letter);

	return 0;*/



	/*int i;
	double total = INVESTMENT;
	printf("=================\n");
	printf("연도 원리금");
	printf("=================\n");
	for (i = 1; i <= YEARS; i++) {
		total *= (1 + RATE);
		printf("%2d%10.1f\n", i, total);
	}
	return 0;*/


	/*int x, y, answer;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다\n");
	}
	return 0;*/



	/*int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;
	for (i = 0; i < 100; i++) {
		int cash = initial_money;
		while (cash > 0 && cash < goal) {
			printf("%d    ", cash);
			if (((double)rand() / RAND_MAX) < 0.5) cash++;
			else cash--;
		}
		if (cash == goal) wins++;
	}
	printf("초기 금액 $%d \n", initial_money);
	printf("목표 금액 $%d \n", goal);
	printf("100번 중에서 %d번 성공\n", wins);
	return 0;*/



	HDC hdc = GetWindowDC(GetForegroundWindow()); // 그리기 속성
	int i;
	for (i = 0; i < 100; i++) {
		int x = rand() % 500;
		int y = rand() % 300;
		int w = rand() % 100;
		int h = rand() % 100;
		Rectangle(hdc, x, y, x + w, y + h);// 화면에 사각형을 그린다. 
		Sleep(100);
	}
	return 0;

}