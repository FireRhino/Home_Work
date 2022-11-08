#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9
int main()
{
	int row, col;
	setlocale(LC_ALL, "RUS");
	for (row = 1; row <= ROW; row++) {
		for (col = 1; col <= COL; col++) {
			printf("%d + %d = %d\t", row, col, row + col);
		}
		printf("\n");
	}
}