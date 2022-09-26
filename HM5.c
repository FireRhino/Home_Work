#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	float rf = 36, rr = 15, S = 390, cb, tf, tr, itg;
	printf("Введите цену на 1 галлон бензина: ");
	scanf("%f", &cb);
	tf = S / rf * cb;
	printf("При поездке на Форд-Экскорт необходимо потратить: ");
	printf("%.2f\n", tf);
	tr = S / rr * cb;
	printf("При поездке на Роллс-Ройс необходимо потратить: ");
	printf("%.2f\n", tr);
	itg = tr - tf;
	printf("Путешествие на Форд-Экскорт дешевле на: ");
	printf("%.2f", itg);
 }