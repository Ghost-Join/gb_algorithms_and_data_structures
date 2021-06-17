#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initArr(char *arrStr, int size) {
	for(int i = 0; i < size; i++) {
		arrStr[i] = -1;
	}
}

void inputStr(char *arrStr) {
	printf("Введите строку : ");
	gets(arrStr);
	printf(" \n");
}

void printArrAlf (char *arrStr, int size) {
	for(int i = 0; i < size; i++) {
		printf("arr[%3d] = %3d", i, arrStr[i]);
		printf(" == ");
		putchar(arrStr[i]);
		printf(" \n");
	}
}

int hash(char *arrStr, int size) {
	int sum = 0;
	for(int i = 0; i < size; i++) {
		if(arrStr[i] == '\0') break;
		sum += abs(arrStr[i]);
		printf("arr[%3d] = %3d", i, abs(arrStr[i]));
		printf(" \n");
	}
	return sum;
}

int main() 
{
	int sizeStr = 100;
	char str[sizeStr];
	initArr(str, sizeStr);
	inputStr(str);
	// printArrAlf(str, sizeStr);
	printf("hash sum = %d \n", hash(str, sizeStr));
	printf("end programm\n");
	return 0;
}