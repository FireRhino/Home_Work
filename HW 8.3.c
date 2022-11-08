#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	float x, n, z, p = 0, z1, z2 = 0;
	setlocale(LC_ALL, "RUS");
	puts("¬ведите x: ");
	scanf("%f", &x);
	puts("¬ведите n: ");
	scanf("%f", &n);
	for (; p < n; p++)
	{
		z1 = sin(x) + sin(sin(x));
		z2 = z2 + z1;
	}
	z = sin(x) + sin(sin(x)) + z2;
	printf("–езультат %.5f\n", z);
	return 0;
}