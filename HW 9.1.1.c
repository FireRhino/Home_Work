#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9
int main()
{
	int row, col, p = 1;
	setlocale(LC_ALL, "RUS");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= p; col++)
		{
			printf("%3d", col * row);
		}
		col = 1;
		p = p + 1;
		printf("\n");
	}
}
