#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int	v = 0, gt = 2022, mt = 9, dt = 23, gr, mr, dr;
	printf("������� ���� ��������\n");
	scanf("%d", &dr);
	printf("������� ����� ��������\n");
	scanf("%d", &mr);
	printf("������� ��� ��������\n");
	scanf("%d", &gr);
	printf("������ ����: %d %d %d\n", dt, mt, gt);
	printf("���� ��������: %d %d %d\n", dr, mr, gr);
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
	printf("������� �������: %d", v);
}