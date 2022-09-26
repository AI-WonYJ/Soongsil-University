#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int user, computer;  // 사용자와 컴퓨터의 가위바위보 선택을 저장할 변수 지정
	printf("선택하시오(1: 가위 2: 바위 3: 보)");  // 선택지를 사용자에게 출력
	scanf("%d", &user);  // 사용자가 선택한 값을 user 변수에 저장
	computer = (rand() % 3) + 1;  // 컴퓨터가 랜덤 수를 지정해 1, 2, 3으로 가공하여 computer 변수에 저장
	if (user == computer) {  // 사용자와 컴퓨터가 비겼을 경우
		printf("비겼습니다.");  // 결과 출력
	}
	else if ((user == 1 && computer == 3) || (user - computer == 1)) {  // 사용자가 컴퓨터를 이겼을 경우
	/* 사용자가 이기는 경우의 수는 (사용자, 컴퓨터)로 나타냈을 때 (1,3), (2,1), (3,1)로
	(1,3)을 제외하고는 사용자 - 컴퓨터 == 1일 때 이기기 때문에 위와 같이 조건문 설정 */

		printf("사용자가 이겼음");  // 결과 출력
	}
	else {  // 비기거나 사용자가 이긴 경우를 제외한 나머지 경우 (사용자가 진 경우)
		printf("사용자가 졌음");  // 결과 출력
	}
	return 0;
}