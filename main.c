#include <stdio.h>

// 1. Задание
void DecToBin(int num) {
	if (num >= 2) {
		DecToBin(num / 2);
	}
	printf("%d", num % 2); 
}

// 2.1 Задание
int exponent(int num, int exp) {
	int result = 0;
	if((num == 0) || (num == 0 && exp == 0)) {
		return 0;
	}
	else if(exp == 0) {
		return 1;
	}
	else {
		result = num * exponent(num, exp - 1);
	}
	return result;
}

// 2.2 Задание
int exponent2(int num, int exp) {
	int result = 0;
	if((num == 0) || (num == 0 && exp == 0)) {
		return 0;
	}
	if(exp == 0) {
		return 1;
	}
	if(exp == 1) {
		return num;
	}
	if(exp % 2 == 0) {
		result = exponent2(num*num, exp/2);
	}
	else {
		result = num * exponent2(num*num, (exp-1)/2);
	}
	return result;
}

int main()
{
	// 1. Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.
	int num;
	printf("\n1. Задание\n");
	printf("Преобразование из Dec в Bin. Введите переменную =  ");
	scanf("%d", &num);
	
	printf("\n%d (Dec) = ", num);
	DecToBin(num);
	printf(" (Bin)\n");
	
	// 2. Реализовать функцию возведения числа [a] в степень [b]:
	// 2.1. Рекурсивно.
	int num_a = 2;
	int exp_b = 13;
	printf("\n2.1 Задание\n");
	printf("Возведение числа %d в степень %d = %d\n", num_a, exp_b, exponent(num_a,exp_b));
	
	// 2.2. Рекурсивно, используя свойство чётности степени (то есть, если степень, в которую нужно возвести число, чётная, основание возводится в квадрат, а показатель делится на два, а если степень нечётная - результат умножается на основание, а показатель уменьшается на единицу)	
	printf("\n2.2 Задание\n");
	printf("Возведение числа %d в степень %d = %d\n", num_a, exp_b, exponent2(num_a,exp_b));
	
	// 3. Реализовать нахождение количества маршрутов шахматного короля с препятствиями (где единица - это наличие препятствия, а ноль - свободная для хода клетка), при этом король всегда начинает в координатах (0,0), и может ходить только вправо и вниз.
	//*в процессе написания
	
	return 0;
}

