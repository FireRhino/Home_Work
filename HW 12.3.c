#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int* pa, x = 5;
	setlocale(LC_ALL, "RUS");
	pa = &x;
	printf("�� ������ %p �������� *ptr=%d\n", pa, *pa);
	pa++;
	printf("�� ������ %p �������� *ptr=%d\n", pa, *pa);
	pa--;
	printf("�� ������ %p �������� *ptr=%d\n", pa, *pa);
	printf("������ int = %lu\n", sizeof(pa));
	printf("�����: ��� pa++ �� ��������� �� 8 ���� (int = 8 ����) �� ������ ����� ���������� ����, ���������� ���������� ���������� ������ ������, ������� �� ������������ ������. ��� pa-- ��������� ������� �� 8 ����\n");
	printf("\n");
	double* pb, y = 5.;
	pb = &y;
	printf("�� ������ %p �������� *ptr=%f\n", pb, *pb);
	pb++;
	printf("�� ������ %p �������� *ptr=%f\n", pb, *pb);
	pb--;
	printf("�� ������ %p �������� *ptr=%f\n", pb, *pb);
	printf("������ double = %lu\n", sizeof(pb));
	printf("�����: ��� pa++ �� ��������� �� 8 ���� (double = 8 ����) �� ������ ����� ���������� ����, ���������� ���������� ���������� ������ ������, ������� �� ������������ ������. ��� pb-- ��������� ������� �� 8 ����\n");
	printf("\n");
	char* pc;
	printf("������ char = %lu\n", sizeof(pc));
	long double* pld;
	printf("������ long double = %lu\n", sizeof(pld));
	short unsigned int* psui;
	printf("������ short unsigned int = %lu\n", sizeof(psui));
	_Bool* pbool;
	printf("������ _Bool = %lu\n", sizeof(pbool));
	printf("�����: �� ���� ������� ����� ����������� �������� �� 8 ����\n");
	return 0;
}