#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


#define RATE 0.07// ����
#define INVESTMENT 10000000 // �ʱ� ���ڱ�
#define YEARS 10 // ���� �Ⱓ


int main(void)
{
	/*int n;
	int i = 1;
	printf("����ϰ� ���� ��: ");
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
			printf("�Ǵ°ɷ� ����.\n");
		}
		else {
			printf("�����ߴ�. ������ ����.\n");
		}
	}
	return 0;*/


	/*int i, n, sum;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n", n, sum);
	return 0;*/

	/*int n = 1;
	double money = 0.5;
	while (n <= 30) {
		money *= 2;
		printf("%d�ϳ� ���� �ݾ� = %lf��\n", n, money);
		n++;
	}*/



	/*int sum = 0, n;
	do {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &n);
		sum += n;
	} while (n != 0);
	printf("���ڵ��� �� = %d\n", sum);
	return 0;*/



	/*int i = 0;
	do
	{
		printf("1---���θ����\n");
		printf("2---���Ͽ���\n");
		printf("3---���ϴݱ�\n");
		printf("�ϳ��� �����Ͻÿ�.\n");
		scanf("%d", &i);
	} while (i < 1 || i > 3);
	printf("���õ� �޴�=%d\n", i);
	
	return 0;*/



	/*int answer = 59;
	int n;
	int tries = 0;
	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &n);
		if (n < answer) {
			printf("������ ������ �����ϴ�.\n");
		}
		else if (n > answer) {
			printf("������ ������ �����ϴ�.\n");
		}
		tries++;
	} while (n != answer);
	printf("�����մϴ�. �õ�Ƚ�� = %d\n", tries);*/



	/*srand(time(NULL));
	printf("���� : %d\n", rand());
	printf("���� : %d\n", rand());
	printf("���� : %d\n", rand());
	printf("���� : %d\n", rand());*/



	/*int answer = rand(0, 100);
	int n;
	int tries = 0;
	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &n);
		if (n < answer) {
			printf("������ ������ �����ϴ�.\n");
		}
		else if (n > answer) {
			printf("������ ������ �����ϴ�.\n");
		}
		tries++;
	} while (n != answer);
	printf("�����մϴ�. �õ�Ƚ�� = %d\n", tries);*/

	/*long fact = 1;
	int i, n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	for (i = n; i >= 1; i--)
	fact = fact * i;
	printf("%d!�� %d�Դϴ�.\n", n, fact);
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
			printf("%d ���ϱ� %d�� %d\n", i, j, i * j);
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
	printf("%d��", y);
	return 0;*/
	


	/*char letter;
	while (1) {
		printf("\n�ҹ��ڸ� �Է��Ͻÿ�: ");
		scanf("%c", &letter);

		if (letter == 'Q' || letter == 'q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;
	}
	letter -= 32;
	printf("\n��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);

	return 0;*/



	/*int i;
	double total = INVESTMENT;
	printf("=================\n");
	printf("���� ������");
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
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�\n");
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
	printf("�ʱ� �ݾ� $%d \n", initial_money);
	printf("��ǥ �ݾ� $%d \n", goal);
	printf("100�� �߿��� %d�� ����\n", wins);
	return 0;*/



	HDC hdc = GetWindowDC(GetForegroundWindow()); // �׸��� �Ӽ�
	int i;
	for (i = 0; i < 100; i++) {
		int x = rand() % 500;
		int y = rand() % 300;
		int w = rand() % 100;
		int h = rand() % 100;
		Rectangle(hdc, x, y, x + w, y + h);// ȭ�鿡 �簢���� �׸���. 
		Sleep(100);
	}
	return 0;

}