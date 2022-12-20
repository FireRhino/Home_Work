#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
int main() 
{
	int* pi, i = 5;
	float* pf, f = 2.1f;
	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));
	return 0;
}