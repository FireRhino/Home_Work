#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int years;
	setlocale(LC_ALL, "RUS");
	printf("Введите год: ");
	scanf("%d", &years);
	if ((years % 4 == 0) && (years % 100 == 0) && (years % 400 == 0))
	{
		printf("%d - високосный год", years);
	}
	else {
		printf("%d - невисокосный год", years);
	}
	return 0;
}
