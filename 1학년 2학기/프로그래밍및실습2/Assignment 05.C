#define _CRT_SECURE_NO_WARNINGS  // scanf 경고 무시
#include <stdio.h>  // 필요한 헤더 파일 불러오기
#define PIN 1234  // PIN번호 설정

struct account {  // 계좌정보 구조체를 account로 선언
	char name[100];
	int id;
	int balance;
};

struct account myacc = {  // 개인 계좌 구조체를 myacc로 선언
	"Kim", 123456, 100000
};

void Pin_check() {  // Pin번호 확인 함수
	int Get_Pin;
	printf("Pin 번호입력: ");
	scanf("%d", &Get_Pin);  // Pin번호를 입력받는다.
	if (Get_Pin != PIN) {  // 입력 받은 Pin번호가 실제 PIN번호와 일치하지 않으면 다시 입력 받는다.
		printf("비밀번호가 틀립니다. 다시 입력해주세요\n\n");
		Pin_check();  // 함수를 다시 실행해 Pin번호를 다시 받음
	}
}

// 필요한 함수 불러오기
void Again_Service();
void Withdraw_Service();
void Deposit_Service();

void ATM_Service() {
	int choice_service;  // ATM 서비스 선택 번호를 저장할 변수
	int again = 1;  // 거래를 계속 진행할 지 말 지 정해주는 변수
	printf("***************ATM 서비스***************\n");
	printf("1. 잔액확인\n2. 현금 인출\n3. 현금 입금\n4. 종료\n");  // ATM 서비스 종류 출력
	printf("****************************************\n");
	printf("\n선택하시오: ");
	scanf("%d", &choice_service);  // ATM 서비스 선택을 받아옴
	if (choice_service == 1) {  // 1번 서비스가 선택됨
		printf("잔액: %d\n", myacc.balance);  // 계좌의 잔액을 출력, 계좌는 미리 구조체 선언해준 myacc에서 balance값을 가져옴
	}
	else if (choice_service == 2) {
		Withdraw_Service();  // 계좌 인출 함수를 불러와서 실행함
	}
	else if (choice_service == 3) {
		Deposit_Service();  // 계좌 입금 함수를 불러와서 실행함
	}
	else if (choice_service == 4) {
		printf("감사합니다.\n");
		again = 0;  // 4번 서비스가 입력되면 바로 종료되도록 again변수를 0으로 바꿔준다.
	}
	else {  // ATM 서비스 선택이 잘못됐을 경우 다시 받아옴
		printf("잘못된 입력입니다. 다시 입력해주세요.\n");
		ATM_Service();  // ATM_Service함수를 재실행
	}

	if (again == 1) {  // 4번을 제외한 다른 서비스가 실행되었을 경우 ATM_Service 함수를 다시 실행할 지 물어봄
		Again_Service();  // ATM_Service함수를 다시 실행할 지 물어보는 함수
	}
}

void Withdraw_Service() {  // 인출 함수
	int withdraw;
	printf("인출 금액: ");
	scanf("%d", &withdraw);  // 인출할 금액을 입력받는다.
	if (withdraw > myacc.balance) {  // 만약에 인출 금액이 잔액보다 클 경우 다시 입력받는다.
		printf("잔액보다 인출하려는 금액이 큽니다.\n");
		printf("현재 잔액: %d\n", myacc.balance);
		printf("다시 입력해주세요.\n\n");
		Withdraw_Service();  // Withdraw_Service함수를 재실행해 인출 금액을 다시 받아온다.
	}
	else if (withdraw <= myacc.balance) {  // 인출금액이 잔액보다 작거나 같을 경우
		printf("현금을 받으세요.\n");
		myacc.balance -= withdraw;  // 계좌 잔액에서 인출 금액만큼 빼준다.
		printf("현재 잔액: %d\n", myacc.balance);  // 거래 후 남은 잔액을 보여준다.
	}
}

void Deposit_Service() {  // 입금 함수
	int deposit;
	printf("입금 금액: ");
	scanf("%d", &deposit);  // 입금할 금액을 입력받는다.
	printf("현금을 넣어주세요.\n");
	myacc.balance += deposit;  // 계좌 잔액에 입금된 금액을 더해준다.
	printf("현재 잔액: %d\n", myacc.balance);  // 거래 후 남은 잔액을 보여준다.
}

void Again_Service() {  // ATM_Service함수를 다시 실행할 지 물어보는 함수
	char check_again;
	printf("다른 거래를 하시겠습니까?(y/n): ");
	scanf(" %c", &check_again);  // 거래 여부를 char형태로 받아온다.
	printf("\n");
	if (check_again == 'y') {
		ATM_Service();  // 'y'가 선택되면 ATM_Service함수를 재실행한다.
	}
	else if (check_again == 'n') {  // 'n'가 선택되면 "감사합니다."를 출력하고 거래를 종료한다.
		printf("감사합니다.");
	}
	else {  // 'y'나 'n' 이외의 다른 것이 입력되면 다시 입력받는다.
		printf("잘못된 입력입니다. 다시 입력해주세요\n");
		Again_Service();  // Again_Service함수를 다시 실행하여 재입력받는다.
	}
}


int main(void) {  // main함수
	Pin_check();  // Pin번호 확인 함수를 확인한다.
	ATM_Service();  // ATM 서비스 함수를 실행한다.
}