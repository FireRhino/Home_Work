#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
int main() 
{
	float PI = 3.14159, * p1, * p2;
	setlocale(LC_ALL, "RUS");
	p1 = p2 = &PI;
	printf("�� ������ p1=%p �������� *p1=%g\n", p1, *p1);
	printf("�� ������ p2=%p �������� *p2=%g\n", p2, *p2);
	printf("�� ������ p1=%x �������� *p1=%g\n", p1, *p1);
	printf("�� ������ p2=%x �������� *p2=%g\n", p2, *p2);
	printf("�����: ��������� ���������� p1 � p2 ������ ����� PI\n");
	return 0;
}