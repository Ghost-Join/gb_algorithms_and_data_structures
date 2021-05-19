#include <stdio.h>

void prime_number(int value) 
{
	int p = 1;
	int counter = 0;
	for (int i = 1; p <= value; i++)
	{
		if(value % p == 0) {
			counter++;
			if(counter>2) {
				break;
			}
			p++;
		}
		else {
			p++;
		}
	}
	if(counter == 2) {
		printf("Число %d является простым", value);
	}
	else {
		printf("Число %d  НЕ является простым", value);
	}
}

int main()
{
	int input_value = 0;
	printf("Введите простое число для проверки: ");
	scanf("%d", &input_value);
	printf("\n");
	prime_number(input_value);
	return 0;
}