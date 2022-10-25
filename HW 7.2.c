#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	float a, b;
	char n;
	setlocale(LC_ALL, "RUS");
	printf("Введите выражение: \n");
	scanf("%f", &a);
	scanf("%c", &n);
	scanf("%f", &b);
	switch (n)
	{
	case '+': printf("%.f+%.f=%.2f", a, b, a + b); break;
	case '-': printf("%.f-%.f=%.2f", a, b, a - b); break;
	case '*': printf("%.f*%.f=%.2f", a, b, a * b); break;
	case '/': printf("%.f/%.f=%.2f", a, b, a / b); break;
	default: printf("Ошибка");
	}
	return 0;
}
