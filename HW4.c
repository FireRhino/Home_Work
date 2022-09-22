#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int	v = 0, gt = 2022, mt = 9, dt = 23, gr, mr, dr;
	puts("Введите год рождения");
	scanf("%d", &gr);
	puts("Введите месяц рождения");
	scanf("%d", &mr);
	puts("Введите день рождения");
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