#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int X, units, tens, hundreds, thousands;
	setlocale(LC_ALL, "RUS");
	printf("������� ������������� �����: ");
	scanf("%d", &X);
	units = X % 10;
	X = X / 10;
	tens = X % 10;
	X = X / 10;
	hundreds = X % 10;
	X = X / 10;
	thousands = X % 10;
	printf("������ - %d \n����� - %d \n������� - %d \n������� - %d \n", thousands, hundreds, tens, units);
		if (X % 2 != 0)
		{
		printf("����� ��������");
		}
		else
		{
		printf("����� ������");
		}
	return 0;
}