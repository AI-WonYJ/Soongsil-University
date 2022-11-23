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
//	printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
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
//	printf("문자를 입력하시오: ");
//	scanf("%c", &s);
//	printf("아스키 코드값=%d", s);
//}



//int main(void) {
//	char name[100];
//	char address[100];
//	printf("이름을 입력하시오: ");
//	gets_s(name, 100);
//	printf("현재 거주하는 주소를 입력하시오: ");
//	gets_s(address, 100);
//	puts(name);
//	puts(address);
//	return 0;
//}



//int WC(char* s);
//int main(void) {
//	char string[100];
//	printf("단어를 입력하세요: ");
//	gets_s(string, 100);
//	printf("단어의 개수: %d\n", WC(string));
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
//		{"book", "책"},
//		{"boy", "소년"},
//		{"computer", "컴퓨터"},
//		{"language", "언어"},
//		{"rain", "비"},
//	};
//	char word[30];
//
//	printf("단어를 입력하시오: ");
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
//	printf("사전에서 발견되지 않았습니다.\n");
//	return 0;
//}



//void encrypt(char cipher[], int shift);
//
//int main(void) {
//	char cipher[50];
//	int shift = 3;
//
//	printf("문자열을 입력하시오: ");
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
//	printf("암호화된 문자열: %s", cipher);
//}



int check(char s[], char a[], char ch);
int main(void) {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	while (1) {
		printf("문자열을 입력하시오: %s \n", answer);
		printf("글자를 추측하시오: ");
		ch = getchar();
		if (check(solution, answer, ch) == 1)
			break;
		getchar();// 줄바꿈 문자 제거
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