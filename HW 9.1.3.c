#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int i, j, a=5, p=5, s=5;
	for (j = 0; j < s; j++)
	{
		printf("%d   ", p);
	}
	printf("\n");
	for (i = 1; i <= a; i++) 
	{
		p = p + 5;
		s = s - 1;
		for (j = 0; j < s; j++)
			printf("%d  ", p);
		printf("\n");
	}
	return 0;
}