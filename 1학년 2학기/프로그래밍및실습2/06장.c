#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if (n >= 100)
		printf("large");
	else
		printf("small");



	int score;
	scanf("%d", &score);
	if (score >= 90)
		printf("합격: 학점A");
	else if (score >= 80)
		printf("합격: 학점B");
	else if (score >= 70)
		printf("합격: 학점C");
	else if (score >= 60)
		printf("합격: 학점D");
	else
		printf("불합격 학점F\n");



	LAB 연습
	/* '실기 점수'와 '면접 점수'를 입력받아 모두 80이상이면 '합격' 그렇지 않으면 '불합격' 출력하는 프로그램*/
	int p_score, w_score;
	scanf("%d %d", &p_score, &w_score);
	if (p_score >= 80 && w_score >= 80)
		printf("합격");
	else
		printf("불합격");



	int n;
	printf("컵의 사이즈를 입려하세요(단위 ml): ");
	scanf("%d", &n);
	if (n < 100) {
		printf("small");
	}
	else if (n < 200) {
		printf("medium");
	}
	else {
		printf("large");
	}



	char op;
	int x, y, result;

	printf("수식을 입력하시오");
	printf("(예: 2 + 5)");
	printf(">>");

	scanf("%d %c %d", &x, &op, &y);
	
	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == ' * ')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else
		printf("error");
	printf("%d %c %d = %d", x, op, y, result);
	return 0;



	int score;
	printf("점수를 입력하세요: ");
	scanf("%d", &score);
	switch (score / 10) {
	case 10:
	case 9:
		printf("A학점입니다.\n");
		break;
	case 8:
		printf("B학점입니다.\n");
		break;
	case 7:
		printf("C학점입니다.\n");
		break;
	case 6:
		printf("D학점입니다.\n");
		break;
	default:
		printf("F학점입니다.\n");
	}



	char op;
	int x, y, result;

	printf("수식을 입력하시오");
	printf("(예: 2 + 5)");
	printf(">>");

	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("Error\n");
		break;
	}
	printf("%d %c %d = %d", x, op, y, result);
	return 0;
}
