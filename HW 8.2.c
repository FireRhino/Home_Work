#define _USE_MATH_DEFINES
#define CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

float m(float x)
{float y;
y = ((pow(x, 3)) + (3 * pow(x, 2)) - 3);
return y;
}
int main()
{
	float q, t;
	float x=2;
	setlocale(LC_ALL, "RUS");
	printf("Ââåäèòå øàã òàáóëÿöèè: ");
	scanf("%f", &q);
	printf("| x   |   f(x)|\n");
	t = ((pow(x, 3)) + (3 * pow(x, 2)) - 3);
	for (; x<=4; x+=q) 
	{
		printf("| %.2f | %.2f | \n", x, m(x));
	}
}
