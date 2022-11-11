#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	char sm, otv;
	int i, j, a, p;
		printf("Введите символ: ");
	scanf("%c", &sm);
	printf("Введите длину стороны: ");
	scanf("%d", &a);
	do
	{
		for (p = 1; p <= a; p++)
		{
			putchar(sm);
		}
		putchar('\n');
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= a; j++)
			{
				if (j == i || j == a)
					putchar(sm);
				else
					putchar(' ');
			}
			putchar('\n');
		}
		printf("Для продолжения нажмите - y");
		scanf(" %c", &otv); 
	} while (otv == 'y' || otv == 'Y');
	return 0;
}