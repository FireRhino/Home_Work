#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	float rf = 36, rr = 15, S = 390, cb, tf, tr, itg;
	printf("������� ���� �� 1 ������ �������: ");
	scanf("%f", &cb);
	tf = S / rf * cb;
	printf("��� ������� �� ����-������� ���������� ���������: ");
	printf("%.2f\n", tf);
	tr = S / rr * cb;
	printf("��� ������� �� �����-���� ���������� ���������: ");
	printf("%.2f\n", tr);
	itg = tr - tf;
	printf("����������� �� ����-������� ������� ��: ");
	printf("%.2f", itg);
 }