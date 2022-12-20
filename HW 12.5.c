#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int g = 0x12345678;
	int* ptr;
	unsigned char* a1, * a2, * a3, * a4;
	unsigned char* a;
	setlocale(LC_ALL, "RUS");
	ptr = &g;
	a = (unsigned char*)ptr;
	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
	return 0;
}