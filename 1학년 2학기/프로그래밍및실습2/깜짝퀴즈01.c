/* 두 정수를 화면에서 입력받아 큰 수 출력하기
1. scanf_s 함수 이용
2. if문을 통해 두 수 비교
3. 큰 수 출력(printf 함수)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int A, B;
	printf("첫 번째 수를 입력하세요: ");
	scanf("\n%d", &A);

	printf("두 번째 수를 입력하세요: ");
	scanf("\n%d", &B);
	if (A > B) {
		printf("첫 번째 수인 %d가 더 큽니다.", A);
	}
	else if (B > A) {
		printf("두 번째 수인 %d가 더 큽니다.", B);
	}
	else {
		printf("두 수는 %d로 같습니다.", A);
	}
}