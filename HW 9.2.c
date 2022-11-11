#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
	int n = 0, c = 0, n1, p = 0, j = 1, sum = 0, N;
	printf("¬ведите число: ");
	scanf("%d", &n);
	N = n;
	for (; n > 0;)
	{
		n = n / 10;
		c = c + 1;
	}
	n1 = c;
	for (; n1 > 0;)
	{
		j = j * 10;
		n1 = n1 - 1;
	}
	N = N / 10;
	for (; p < c; p++)
	{
		sum = sum + (N % 10);
		N = N / 10;
	}
	printf("Sum= %d", sum);
	return 0;
}