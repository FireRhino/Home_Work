#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int years;
	setlocale(LC_ALL, "RUS");
	printf("������� ���: ");
	scanf("%d", &years);
	if (years % 4 == 0)
		printf("%d - ���������� ���", years);
		else printf("%d - ������������ ���", years);
	return 0;
}