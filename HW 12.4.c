#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
	float* ptr_a = array;
	setlocale(LC_ALL, "RUS");
	printf("%p\n", array);
	printf("%p\n", &array[0]);
	printf("%p\n", &array);
	printf("\n");
	printf("��������: %p ���������: %f\n", ptr_a, *ptr_a);
	ptr_a++;
	printf("��������: %p ���������: %f\n", ptr_a, *ptr_a);
	ptr_a + 4;
	printf("��������: %p ���������: %f\n", ptr_a, *ptr_a);
	ptr_a - 2;
	printf("��������: %p ���������: %f\n", ptr_a, *ptr_a);
	printf("\n");
	float* ptr_b = array;
	for (int i = 0; i < 10; i++) {
		*ptr_b += 2; // ����������� �������� ������� +2
		printf("%.2f ", *ptr_b);
		ptr_b++; // ��������� �� ������ �� ��������� ������� �������
	}
	printf("\n\n");
	for (int i = 0; i < 10; i++) {
		ptr_b--;
		printf("%.2f ", *ptr_b);
	}
	return 0;
}