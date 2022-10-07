#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int years;
	setlocale(LC_ALL, "RUS");
	printf("¬ведите год: ");
	scanf("%d", &years);
	if (years % 4 == 0)
		printf("%d - високосный год", years);
		else printf("%d - невисокосный год", years);
	return 0;
}