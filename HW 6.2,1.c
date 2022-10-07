#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#define P 3.14
int main()
{
	float x, F;
	setlocale(LC_ALL, "RUS");
	/*
	При х=0,5 F(x)=-0,25
	При x=1,5 F(x)=1,55
	При x=-1,5 F(x)=1,55
	*/
	printf("Введите X: ");
	scanf("%f", &x);
		F = ((1 >= x) && (x >= 0)) ? (pow(x, 2) - x) : (F = pow(x, 2) - sin(P * pow(x, 2)));
		printf("F(x)=%.2f", F);
	return 0;
}