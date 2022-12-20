#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int* pa, x = 5;
	setlocale(LC_ALL, "RUS");
	pa = &x;
	printf("По адресу %p хранится *ptr=%d\n", pa, *pa);
	pa++;
	printf("По адресу %p хранится *ptr=%d\n", pa, *pa);
	pa--;
	printf("По адресу %p хранится *ptr=%d\n", pa, *pa);
	printf("Размер int = %lu\n", sizeof(pa));
	printf("Ответ: При pa++ мы переходим на 8 байт (int = 8 байт) по памяти далее вследствие чего, происходит считывание следующеей ячейки памяти, которая не предпологает считку. При pa-- смещаемся обратно на 8 байт\n");
	printf("\n");
	double* pb, y = 5.;
	pb = &y;
	printf("По адресу %p хранится *ptr=%f\n", pb, *pb);
	pb++;
	printf("По адресу %p хранится *ptr=%f\n", pb, *pb);
	pb--;
	printf("По адресу %p хранится *ptr=%f\n", pb, *pb);
	printf("Размер double = %lu\n", sizeof(pb));
	printf("Ответ: При pa++ мы переходим на 8 байт (double = 8 байт) по памяти далее вследствие чего, происходит считывание следующеей ячейки памяти, которая не предпологает считку. При pb-- смещаемся обратно на 8 байт\n");
	printf("\n");
	char* pc;
	printf("Размер char = %lu\n", sizeof(pc));
	long double* pld;
	printf("Размер long double = %lu\n", sizeof(pld));
	short unsigned int* psui;
	printf("Размер short unsigned int = %lu\n", sizeof(psui));
	_Bool* pbool;
	printf("Размер _Bool = %lu\n", sizeof(pbool));
	printf("Вывод: Во всех случаях будет происходить смещение на 8 байт\n");
	return 0;
}