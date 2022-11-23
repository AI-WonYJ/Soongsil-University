#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <math.h>

/*int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main(void) {
	int x, y;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("정수를 입력하시오: ");
	scanf("%d", &y);

	int larger;
	larger = max(x, y);
	printf("더 큰값은 %d입니다.\n", larger);
	return 0;
}*/



/*int get_integer() {
	int value;
	printf("정수를 입력하시오: ");
	scanf("%d", &value);
	return value;
}

int add(int x, int y) {
	return x + y;
}
int main(void) {
	int x = get_integer();
	int y = get_integer();

	int sum = add(x, y);
	printf("두 수의 합은 %d입니다.\n", sum);
	return 0;
}*/



/*long factorial(int n) {
	long result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main(void) {
	int n;
	printf("알고 싶은 팩토리얼의 값은?");
	scanf("%d", &n);
	printf("%d!의 값은 %d입니다. \n", n, factorial(n));
	return 0;
}*/



/*void printOptions()
{
	printf(" 'c' 섭씨온도에서 화씨온도로 변환\n");
	printf(" 'f' 화씨온도에서 섭씨온도로 변환\n");
	printf(" 'q' 종료\n");
}
double C2F(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}
double F2C(double f_temp)
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main(void)
{
	char choice;
	double temp;
	while (1) {
		printOptions();
		printf("메뉴에서 선택하세요.");
		choice = getchar();
		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("섭씨온도: ");
			scanf("%lf", &temp);
			printf("화씨온도: %lf \n", C2F(temp));
		}
		else if (choice == 'f') {
			printf("화씨온도: ");
			scanf("%lf", &temp);
			printf("섭씨온도: %lf \n", F2C(temp));
		}
		getchar();// 엔터키 문자를 삭제하기 위하여 필요!
	}
	return 0;
}*/



/*int check(void);

int main(void) {
	int heads = 0;
	int tails = 0;
	int toss = 0;
	srand(time(NULL));

	for (toss = 0; toss < 100; toss++) {
		if (check() == 1) {
			heads++;
		}
		else {
			tails++;
		}
	}
	printf("동전의 앞면: %d\n", heads);
	printf("동전의 뒷면: %d\n", tails);
}

int check(void) {
	if (rand() % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}*/



/*void disp_car(int car_number, int distance) {
	int i;
	printf("CAR #%d:", car_number);
	for (i = 0; i < distance / 10; i++) {
		printf("*");
	}
	printf("\n");
}

int main(void) {
	int i;
	int car1_dist = 0, car2_dist = 0, car3_dist = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 6; i++) {
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		car3_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		disp_car(3, car3_dist);
		printf("---------------------\n");
		_getch();
	}
	return 0;
}*/



/*int main() {
	char ch;
	ch = _getch();
	printf("%c1", ch);

	ch = getchar();
	printf("%c1", ch);

	printf("\n");
	return 0;
}*/


/*int main(void) {
	int i, x, y, red, green, blue;

	HDC hdc;
	hdc = GetWindowDC(GetForegroundWindow());

	srand((unsigned)time(NULL));
	
	for (i = 0; i < 10000; i++) {
		x = rand() % 300;
		y = rand() % 300;

		red = rand() % 256;
		green = rand() % 256;
		blue = rand() % 256;

		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	_getch();
	return 0;
}*/



/*int main(void) {
	double distance, height, degree, radian;
	double tree_height = 0;
	printf("나무와의 길이(단위는 미터): ");
	scanf("%lf", &distance);
	printf("측정자의 키(단위는 미터): ");
	scanf("%lf", &height);
	printf("각도(단위는 도): ");
	scanf("%lf", &degree);
	radian = degree * 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628634825342117067932823066470938446095 / 180;
	tree_height = height + (tan(radian) * distance);

	printf("나무의 높이(단위는 미터): %lf", tree_height);	

	return 0;
}*/



/*int main(void) {
	int cor = 0;
	int wro = 0;
	while(1) {
		int choice = 0;
		char cgo = "";
		int a = 0;
		srand(time(NULL));
		a = rand() % 2;
		printf("동전 앞 / 뒷면을 선택해주세요 (1 또는 0 입력): ");
		scanf("%d", &choice);
		if (a == choice) {
			printf("맞았습니다!\n");
			cor++;
		}

		else {
			printf("틀렸습니다...\n");
			wro++;
		}

		printf("계속 하시겠습니까? (y / n): ");
		scanf("%c1", &cgo);
		if (cgo == 'y') {
			continue;
		}
		else {
			printf("맞춘 수: %d  틀린 수: %d\n", cor, wro);
			break;
		}
	}

	return 0;
}*/



/*void AskBiman(int height, int weight) {             다시 해 볼것

}

int main(void) {
	for (int a= 1; a <= 5; a++) {
		int weight = 0;
		int height = 0;
		double BMI = 0;
		printf("%d번 사람의 키를 입력하시오 (단위 cm): ", a);
		scanf("%d", &height);
		printf("%d번 사람의 키를 입력하시오 (단위 kg): ", a);
		scanf("%d", &weight);
		double heigh = height;
		BMI = weight / (heigh * heigh);
		printf("lf", BMI);
	}
}*/