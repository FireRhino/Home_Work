#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	int m, n, s=0, t=0;
	setlocale(LC_ALL, "RUS");
	puts("������� ��� �����: ");
	scanf("%d", &m);
	scanf("%d", &n);
	for (int i = m; i <= n; i++)
	{
		s=s+i;
		t=t+1;
		printf("��������� %d ���\n", t);
	}
	printf("��������� %d\n", s);
	return 0;
}