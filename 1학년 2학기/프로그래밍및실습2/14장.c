#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void set_pointer(char** q);
int main(void) {
	char* p;
	set_pointer(&p);

	printf("������ �ݾ�: %s\n", p);
	return 0;
}

void set_pointer(char** q) {
	*q = "All that glisters is not gold.";
}