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
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &y);

	int larger;
	larger = max(x, y);
	printf("�� ū���� %d�Դϴ�.\n", larger);
	return 0;
}*/



/*int get_integer() {
	int value;
	printf("������ �Է��Ͻÿ�: ");
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
	printf("�� ���� ���� %d�Դϴ�.\n", sum);
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
	printf("�˰� ���� ���丮���� ����?");
	scanf("%d", &n);
	printf("%d!�� ���� %d�Դϴ�. \n", n, factorial(n));
	return 0;
}*/



/*void printOptions()
{
	printf(" 'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf(" 'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf(" 'q' ����\n");
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
		printf("�޴����� �����ϼ���.");
		choice = getchar();
		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("�����µ�: ");
			scanf("%lf", &temp);
			printf("ȭ���µ�: %lf \n", C2F(temp));
		}
		else if (choice == 'f') {
			printf("ȭ���µ�: ");
			scanf("%lf", &temp);
			printf("�����µ�: %lf \n", F2C(temp));
		}
		getchar();// ����Ű ���ڸ� �����ϱ� ���Ͽ� �ʿ�!
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
	printf("������ �ո�: %d\n", heads);
	printf("������ �޸�: %d\n", tails);
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
	printf("�������� ����(������ ����): ");
	scanf("%lf", &distance);
	printf("�������� Ű(������ ����): ");
	scanf("%lf", &height);
	printf("����(������ ��): ");
	scanf("%lf", &degree);
	radian = degree * 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628634825342117067932823066470938446095 / 180;
	tree_height = height + (tan(radian) * distance);

	printf("������ ����(������ ����): %lf", tree_height);	

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
		printf("���� �� / �޸��� �������ּ��� (1 �Ǵ� 0 �Է�): ");
		scanf("%d", &choice);
		if (a == choice) {
			printf("�¾ҽ��ϴ�!\n");
			cor++;
		}

		else {
			printf("Ʋ�Ƚ��ϴ�...\n");
			wro++;
		}

		printf("��� �Ͻðڽ��ϱ�? (y / n): ");
		scanf("%c1", &cgo);
		if (cgo == 'y') {
			continue;
		}
		else {
			printf("���� ��: %d  Ʋ�� ��: %d\n", cor, wro);
			break;
		}
	}

	return 0;
}*/



/*void AskBiman(int height, int weight) {             �ٽ� �� ����

}

int main(void) {
	for (int a= 1; a <= 5; a++) {
		int weight = 0;
		int height = 0;
		double BMI = 0;
		printf("%d�� ����� Ű�� �Է��Ͻÿ� (���� cm): ", a);
		scanf("%d", &height);
		printf("%d�� ����� Ű�� �Է��Ͻÿ� (���� kg): ", a);
		scanf("%d", &weight);
		double heigh = height;
		BMI = weight / (heigh * heigh);
		printf("lf", BMI);
	}
}*/