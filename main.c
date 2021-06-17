#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initArr(char *arrStr, int size) {
	for(int i = 0; i < size; i++) {
		arrStr[i] = -1;
	}
}

void initArrInt(int *arrStr, int size) {
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

int countingCoins(int *arr, int sizeArr, int money) {
	int counter;
	int sumCounter = 0;
	int tmpArr[sizeArr];
	initArrInt(tmpArr, sizeArr);
	
	if(money != 0) {
		// printf("%d = ", money);		//отладка
		for(int i = 0; i < sizeArr; i++) {
			counter = 0;
			while(money >= arr[i]) {
				money -= arr[i];
				counter++;
			}
			tmpArr[i] = counter;
			// printf("%d*%d", arr[i], tmpArr[i]);		//отладка
			// if(i != sizeArr-1) printf(" + ");		//отладка
		}
		// printf(" \n");		//отладка
	}
	
	for(int i = 0; i < sizeArr; i++) {
		sumCounter += tmpArr[i];
	}
	
	return sumCounter;
}

int main() 
{
	//1. Задание - Реализовать простейшую хеш-функцию. На вход функции подается строка, на выходе сумма кодов символов.
	int sizeStr = 100;
	char str[sizeStr];
	initArr(str, sizeStr);
	inputStr(str);
	printf("hash sum = %d \n", hash(str, sizeStr));
	
	//2. Задание - Имеются монеты номиналом 50, 10, 5, 2, 1 коп. Напишите функцию которая минимальным количеством монет наберет сумму 98 коп. Для решения задачи используйте “жадный” алгоритм.
	const int MONEY = 98;
	const int SIZEMONY = 5;
	int monyArr[] = {50, 10, 5, 2, 1};
	printf("Counter Coin = %d", countingCoins(monyArr, SIZEMONY, MONEY));
	return 0;
}