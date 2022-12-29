#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
float border_one(char* border_1);
float border_two(char* border_2);
float function_Y(float);
float function_V(float);
typedef float (*TFunc)(float);
void plot(double x0, double x1, TFunc f);
int main() {
    float x, y;
    float x_1, x_2, h, y_function = 0.;
    char border_1, border_2;
    int button;
    int cycle = 1;
    setlocale(LC_ALL, "RUS");
    while (cycle) {
        system("cls");
        printf("1 - �������� F1\n");
        printf("2 - �������� F2\n");
        printf("3 - �������� F1 �� ��������� Xn, Xk\n");
        printf("4 - �������� F2 �� ��������� Xn, Xk\n");
        printf("5 - ��������� ������ ��������� �������\n");
        printf("6 - �����\n");
        printf("\n");
        printf("�������� �� ������ ������ ��������:\n");
        scanf("%d", &button);
        switch (button) {
        case 1: printf("������� �������� �\n");
            scanf("%f", &x);
            y = function_Y(x);
            printf("�������� f(x) = %f\n", y);
            system("pause");
            break;
        case 2: printf("������� �������� �\n");
            scanf("%f", &x);
            y = function_V(x);
            printf("�������� f(x) = %f\n", y);
            system("pause");
            break;
        case 3: printf("������� ������� � ��������� ����� enter\n");
            scanf("%c", &border_1);
            scanf("%c", &border_1);
            scanf("%f%f", &x_1, &x_2);
            scanf("%c", &border_2);
            scanf("%c", &border_2);
            printf("������� ��� h:\n");
            scanf("%f", &h);
            x_1 += border_one(&border_1);
            x_2 += border_two(&border_2);
            for (float x = x_1; x < x_2; x += h) {
                y_function = function_Y(x);
                printf("|%6f|%6f|\n", x, y_function);
            }
            system("pause");
            break;
        case 4: printf("������� ������� � ��������� ����� enter\n");
            scanf("%c", &border_1);
            scanf("%c", &border_1);
            scanf("%f%f", &x_1, &x_2);
            scanf("%c", &border_2);
            scanf("%c", &border_2);
            printf("������� ��� h:\n");
            scanf("%f", &h);
            x_1 += border_one(&border_1);
            x_2 += border_two(&border_2);
            for (float x = x_1; x < x_2; x += h) {
                y_function = function_V(x);
                printf("|%6f|%6f|\n", x, y_function);
            }
            system("pause");
            break;
        case 5:
            printf("1 - ��������� ������ ������� F1\n");
            printf("2 - ��������� ������ ������� F2\n");
            scanf("%d", &button);
            switch (button) {
            case 1: printf("������ F1\n");
                printf("������� ��������\n");
                scanf("%f%f", &x_1, &x_2);
                plot(x_1, x_2, function_Y);
                break;
            case 2: printf("������ F2\n");
                printf("������� ��������\n");
                scanf("%f%f", &x_1, &x_2);
                plot(x_1, x_2, function_V);
                break;
            }
            system("pause");
            break;
        default:
            cycle = 0;
            break;
        }
    }
    return 0;
}
float function_Y(float x) {
    float y_function = 0.;
    if ((x > 0) && (-1 <= sin(x) <= 1)) {
        y_function = exp((sin(x) * sin(x)) / (pow((0.2 * pow(x, 8)), pow(3, -1))) * (log(5 * x)));
    }
    else printf("�������� ��������� ��� ���\n");
    return y_function;
}
float function_V(float x) {
    float y_function = 0.;
    if (x < 0) {
        y_function = (fabs(x)) / (1 + pow(x, 2)) * (exp(-2 * x));
    }
    if (0 <= x && x < 1) {
        y_function = pow(1 + pow(x, 2), 0.5);
    }
    if (x >= 1 && (-1 <= sin(x) <= 1)) {
        y_function = (1 + sin(x)) / (1 + x);
    }
    return y_function;
}
float border_one(char* border_1) {
    if (*border_1 == '(') {
        return 1;
    }
    if (*border_1 == '[') {
        return 0;
    }
}
float border_two(char* border_2) {
    if (*border_2 == ')') {
        return 0;
    }
    if (*border_2 == ']') {
        return 1;
    }
}
void plot(double x0, double x1, TFunc f)

{
    int SCREENW = 60, SCREENH = 40;//������� ���� ������ � ��������
    char screen[60][40];
    double x, y[60];
    double ymin = 0, ymax = 0;
    double hx, hy;
    int i, j;
    int xz, yz;
    hx = (x1 - x0) / (SCREENW - 1);
    for (i = 0, x = x0; i < SCREENW; ++i, x += hx) {
        y[i] = f(x); //������ �������� ������� ��� ������ ����� ���� ������ �������
        if (y[i] < ymin) ymin = y[i];
        if (y[i] > ymax) ymax = y[i];
    }
    hy = (ymax - ymin) / (SCREENH - 1);
    yz = (int)floor(ymax / hy + 0.5);
    xz = (int)floor((0. - x0) / hx + 0.5);
    //���������� ���� � ���������� ������� ����������� ���������
    for (j = 0; j < SCREENH; ++j)
        for (i = 0; i < SCREENW; ++i) {
            if (j == yz && i == xz) screen[i][j] = '+';
            else if (j == yz) screen[i][j] = '-';
            else if (i == xz) screen[i][j] = '|';
            else screen[i][j] = ' ';
        }
    //����������� ��������� �������� ������� �� ���� ������
    for (i = 0; i < SCREENW; ++i) {
        j = (int)floor((ymax - y[i]) / hy + 0.5);
        screen[i][j] = '*';
    }
    //������ ������� ��������
    for (j = 0; j < SCREENH; ++j) {
        for (i = 0; i < SCREENW; ++i)  putchar(screen[i][j]);
        putchar('\n');
    }
}