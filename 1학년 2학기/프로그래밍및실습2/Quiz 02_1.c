#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {  // factorial 계산 함수
	int i;
	int j = 1;  // factorial값을 저장할 변수
	for (i = 1; i < n; i++) {  // 1부터 n까지 i를 1씩 늘려준다.
		j *= i;  // i만큼 곱해줘서 factorial 계산
	}
	return j;  // factorial 값 return
}

void main() {
	int fac;
	printf("팩토리얼 계산할 수를 입력하시오: ");
	scanf("%d", &fac);  // factorial 계산할 수를 받아옴
	printf("%d", factorial(fac));  // factorial 값을 받아와서 출력
}
