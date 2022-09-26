#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int vr(int gt, int gr, int mt, int mr, int dt, int dr)
{
	int v1;
	v1 = gt - gr;

	if (mr > mt) {
		v1 = v1 - 1;
	}
	else {
		if (mr = mt) {
			if (dr > dt) {
				v1 = v1 - 1;
			}
		}
	}
	int v = v1;
	return v;
}
main()
{
	int v, gt = 2022, mt = 9, dt = 23, gr, mr, dr, v1;
	setlocale(LC_ALL, "RUS");
	printf("День рождения\n");
	scanf("%d", &dr);
	printf("Месяц рождения\n");
	scanf("%d", &mr);
	printf("Год рождения\n");
	scanf("%d", &gr);
	printf("Текущая дата: %d %d %d\n", dt, mt, gt);
	printf("Дата рождения: %d %d %d\n", dr, mr, gr);
	v = vr(gt, gr, mt, mr, dt, dr);
	printf("Текущий возраст: %d ", v);
}