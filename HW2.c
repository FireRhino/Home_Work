#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D 2.54
#define P 2.32166
int main()
{
	setlocale(LC_ALL, "RUS");
	int	dym;
	float result1, result2;
	puts("������� ��������");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = P * dym;
	printf("%d ������ - ��� % .2f ��/n\n", dym, result1);
	printf("%d pulgada  - ��� % .7f ��\n", dym, result2);
}