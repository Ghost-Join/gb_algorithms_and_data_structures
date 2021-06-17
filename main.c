#include <stdio.h>

void inputNum(int *num) {
	printf("Введите сдвиг(число): ");
    scanf("%i", &num);
	printf("\n");
}

void inputStr(char *str) {
	printf("Введите строку для шифрования: ");
    scanf("%c", &str);
	printf("\n");
}

void encryption(int *key, char *str) {
	int k = *key;
	int n = *str;
	while (n != 10) {
		if (n >= 'a' && n <= 'z') {
			n = n + k;
			if(n < 'a') n += 26;
		}
		else
			if(n >= 'A' && n <= 'Z') {
				n = n + k;
				if(n < 'A') n += 26;
			}
		printf ("%c", n);
		scanf("%c", &n);
    }
}

int main(void)
{
	//1. Задание - Реализовать шифрование и расшифровку цезаря с передаваемым в функцию сообщением и ключом
    int num;
    char str;
	inputNum(&num);
	inputStr(&str);
	encryption(&num, &str);
	
	//2. Задание - Реализовать шифрование и расшифровку перестановками с передаваемым в функцию сообщением и количеством столбцов
	
	return 0;
}
