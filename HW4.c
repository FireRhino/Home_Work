#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int	v = 0, gt = 2022, mt = 9, dt = 23, gr, mr, dr;
	printf("Введите год рождения\n");
	scanf("%d", &gr);
	printf("Введите месяц рождения\n");
	scanf("%d", &mr);
	printf("Введите день рождения\n");
	scanf("%d", &dr);
	printf("Теущая дата: %d %d %d\n", gt, mt, dt);
	printf("Дата рождения: %d %d %d\n", gr, mr, dr);
	v = gt - gr;
	if (mr > mt) {
		v = v - 1;
	}
	else {
		if (mr = mt) {
			if (dr > dt) {
				v = v - 1;
			}
		}
	}
	printf("Текущий возраст: %2d", v);
}