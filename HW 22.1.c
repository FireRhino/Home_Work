#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
typedef double(*TFun)(double);
double Y(double);
double V(double);
double S(double);
void output(TFun, double, double, double);
int main() 
{
	double a, b, h;
	double x;
	int button;
	setlocale(0, "rus");
	printf("1 - Вычислить функцию\n");
	printf("2 - Вычислить функцию на интревале\n");
	scanf("%d", &button);
	switch (button) {
	case 1:
		printf("\tВычислить функцию\n");
		printf("Введите x\n");
		scanf("%lf", &x);
		printf("1 - Вычислить функцию F1\n");
		printf("2 - Вычислить функцию F2\n");
		printf("3 - Вычислить функцию F3\n");
		scanf("%d", &button);
		switch (button)
		{
		case 1:
			printf("\n\t Function F1\n");
			printf("%d", Y(x));
			break;
		case 2:
			printf("\n\t Function F1\n");
			printf("%d", V(x));
			break;
		case 3:
			printf("\n\t Function F1\n");
			printf("%d", S(x));
			break;
		default: break;
		}
		break;
	case 2:
		printf("\tВычислить функцию на интревале\n");
		printf("Введите a, b, h\n");
		scanf("%lf%lf%lf", &a, &b, &h);
		printf("1 - Посчитать функцию F1\n");
		printf("2 - Посчитать функцию F2\n");
		printf("3 - Посчитать функцию F3\n");
		scanf("%d", &button);
		switch (button)
		{
		case 1:
			printf("\n\t Function F1\n");
			output(Y, a, b, h);
			break;
		case 2:
			printf("\n\t Function F2\n");
			output(V, a, b, h);
			break;
		case 3:
			printf("\n\t Function F3\n");
			output(S, a, b, h);
			break;
		default: break;
		}
		break;
	case 4:
		break;
	default: break;
	}
	return 0;
}
double Y(double x) {
	double y = 0.;
	if (x > 0) {
		y = log(fabs(pow((x * x * x), 1 / 2.)));
	}
	else {
		printf("Вне одз\n");
	}
	return y;
}
double V(double x) {
	double y;
	if (x > 0) {
		y = pow(tan(x * x - 1), 1 / 2.);
	}
	if (x <= 1 && x >= 0) {
		y = -2 * x;
	}
	if (x < 0) {
		y = exp(cos(x));
	}
	return y;
}
double S(double x) {
	double y = 0., count;
	if (x != 1) {
		for (count = 1; count <= 7; count += 2) {
			y += (1 / count) * pow((x - 1) / (x + 1), count);
		}
	}
	else printf("not E(x)\n");
	return y;
}
void output(TFun f, double xn, double xk, double h) {
	for (double x = xn; x <= xk; x += h) {
		printf(" x = %5.2lf, y = %8.4lf\n", x, f(x));
	}
}