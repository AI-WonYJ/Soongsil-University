#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(void) {
//	char str1[6] = "Seoul";
//	char str2[3] = { 'i', 's' , '\0' };
//	char str3[] = "the capital city of Korea.";
//	printf("%s %s %s\n", str1, str2, str3);
//	return 0;
//}



//int main(void) {
//	char str[30] = "C language is easy";
//	int i = 0;
//
//	while (str[i] != 0)
//		i++;
//	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n", str, i);
//	return 0;
//}



//int main(void) {
//	char* p = "HelloWorld";
//	printf("%s \n", p);
//
//	p = "Welcome to C world!";
//	printf("%s \n", p);
//
//	p = "Goodbye";
//	printf("%s \n", p);
//
//	return 0;
//}



//int main(void) {
//	char s;
//	printf("���ڸ� �Է��Ͻÿ�: ");
//	scanf("%c", &s);
//	printf("�ƽ�Ű �ڵ尪=%d", s);
//}



//int main(void) {
//	char name[100];
//	char address[100];
//	printf("�̸��� �Է��Ͻÿ�: ");
//	gets_s(name, 100);
//	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
//	gets_s(address, 100);
//	puts(name);
//	puts(address);
//	return 0;
//}



//int WC(char* s);
//int main(void) {
//	char string[100];
//	printf("�ܾ �Է��ϼ���: ");
//	gets_s(string, 100);
//	printf("�ܾ��� ����: %d\n", WC(string));
//
//	return 0;
//}
//
//int WC(char* s) {}



//int main(void) {
//	char s[] = "100";
//	int value;
//
//	sscanf(s, "%d", &value);
//	printf("%d\n", value);
//	value++;
//	sprintf(s, "%d", value);
//	printf("%s \n", s);
//	return 0;
//}



//#define ENTRIES 5
//
//int main(void) {
//	int i, index;
//	char dic[ENTRIES][2][30] = {
//		{"book", "å"},
//		{"boy", "�ҳ�"},
//		{"computer", "��ǻ��"},
//		{"language", "���"},
//		{"rain", "��"},
//	};
//	char word[30];
//
//	printf("�ܾ �Է��Ͻÿ�: ");
//	scanf("%s", word);
//
//	index = 0;
//	for (i = 0; i < ENTRIES; i++) {
//		if (strcmp(dic[index][0], word) == 0) {
//			printf("%s: %s\n", word, dic[index][1]);
//			return 0;
//		}
//		index++;
//	}
//	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
//	return 0;
//}



//void encrypt(char cipher[], int shift);
//
//int main(void) {
//	char cipher[50];
//	int shift = 3;
//
//	printf("���ڿ��� �Է��Ͻÿ�: ");
//	gets_s(cipher, 50);
//
//	encrypt(cipher, shift);
//	return 0;
//}
//
//void encrypt(char cipher[], int shift) {
//	int i = 0;
//	while (cipher[i] != '\0') {
//		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
//			cipher[i] += shift;
//			if (cipher[i] > 'z')
//				cipher[i] -= 26;
//		}
//		i++;
//	}
//	printf("��ȣȭ�� ���ڿ�: %s", cipher);
//}



int check(char s[], char a[], char ch);
int main(void) {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	while (1) {
		printf("���ڿ��� �Է��Ͻÿ�: %s \n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		ch = getchar();
		if (check(solution, answer, ch) == 1)
			break;
		getchar();// �ٹٲ� ���� ����
	}
	return 0;
}

int check(char s[], char a[], char ch) {
	int i;
	for (i = 0; s[i] != NULL; i++) {
		if (s[i] == ch) {
			a[i] = ch;
		}
	}
	if (strcmp(s, a) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}