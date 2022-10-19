#define _CRT_SECURE_NO_WARNINGS  // scanf 경고문 무시                                 20221797 원영진
#include <stdio.h>  // stdio 헤더파일 불러오기

int f (int n) {  // 'f'함수 정의, 매개 변수를 n으로 받아온다.
	int sum = 0;  // for문 계산결과를 저장할 변수 sum을 지정해 초기화 해준다.
	for (int a = 1; a <= n; a++) {  // 1부터 n까지를 각각 제곱하여 더해주는 for문
		sum += (a * a);  // 1부터 n까지를 제곱해서 변수 sum에 더해준다.
	}
	return sum;  // for문이 끝나고 나온 sum값을 return해준다.
}

int main(void) {
	int x;  // 양의 정수를 입력받아 저장할 변수 x
	printf("양의 정수 하나를 입력하시오.\n");  // 필요한 문자열 출력
	scanf("%d", &x);  // 양의 정수를 입력받아 변수 x에 값을 저장
	printf("%d", f(x));  // 'f'를 매개변수 x를 주면서 실행시키고 return값을 출력함.
	return 0;
}
