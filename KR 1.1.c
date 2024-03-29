#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
float border_one(char border_1);
float border_two(char border_2);
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
        puts("Работу выполнил: Киселев Н.В. бИСТ-225");
        puts("");
        puts("Y(x)=exp((sin(x) * sin(x)) / (pow((0.2 * pow(x, 8)), pow(3, -1))) * (log(5 * x)))");
        puts("");
        puts("     {(fabs(x)) / (1 + pow(x, 2)) * (exp(-2 * x))");
        puts("V(x)={pow(1 + pow(x, 2), 0.5)");
        puts("     {(1 + sin(x)) / (1 + x)");
        puts("");
        printf("1 - значение функции\n");
        printf("2 - значение функции на интервале Xn, Xk\n");
        printf("3 - построить график выбранной функции\n");
        printf("4 - выход\n");
        printf("\n");
        printf("Выберете из списка нужное действие:\n");
        scanf("%d", &button);
        switch (button) {
        case 1: 
            printf("1 - значение F1\n");
            printf("2 - значение F2\n");
            scanf("%d", &button);
            switch (button) {
            case 1: printf("введите аргумент\n");
                scanf("%f", &x);
                y = function_Y(x);
                printf("Значение f(x) = %f\n", y);
                break;
            case 2: printf("введите аргумент\n");
                scanf("%f", &x);
                y = function_V(x);
                printf("Значение f(x) = %f\n", y);
                break;
            }
            system("pause");
            break;
        case 2: 
            printf("1 - значение F1 на интервале Xn, Xk\n");
            printf("2 - значение F2 на интервале Xn, Xk\n");
            scanf("%d", &button);
            switch (button) {
            case 1: 
                printf("Введите границы и аргументы через enter\n");
                scanf(" %c", &border_1);
                scanf("%f", &x_1);
                scanf("%f", &x_2);
                scanf(" %c", &border_2);
                printf("Введите шаг h:\n");
                scanf("%f", &h);
                x_1 += border_one(border_1);
                x_2 += border_two(border_2);
                for (float x = x_1; x < x_2; x += h) {
                    y_function = function_Y(x);
                    printf("|%6f|%6f|\n", x, y_function);
                }
                system("pause");
                break;
            case 2: 
                printf("Введите границы и аргументы через enter\n");
                scanf(" %c", &border_1);
                scanf("%f", &x_1);
                scanf("%f", &x_2);
                scanf(" %c", &border_2);
                printf("Введите шаг h:\n");
                scanf("%f", &h);
                x_1 += border_one(border_1);
                x_2 += border_two(border_2);
                for (float x = x_1; x < x_2; x += h) {
                    y_function = function_V(x);
                    printf("|%6f|%6f|\n", x, y_function);
                }
                system("pause");
                break;
            }
             break;
            case 3:
            printf("1 - построить график функции F1\n");
            printf("2 - построить график функции F2\n");
            scanf("%d", &button);
            switch (button) {
            case 1: printf("график F1\n");
                printf("Введите интервал\n");
                scanf("%f%f", &x_1, &x_2);
                plot(x_1, x_2, function_Y);
                break;
            case 2: printf("график F2\n");
                printf("Введите интервал\n");
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
    else printf("Аргумент находится вне ОДЗ\n");
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
float border_one(char border_1) {
    if (border_1 == '(') {
        return 1;
    }
    if (border_1 == '[') {
        return 0;
    }
}
float border_two(char border_2) {
    if (border_2 == ')') {
        return 0;
    }
    if (border_2 == ']') {
        return 1;
    }
}
void plot(double x0, double x1, TFunc f)
{
    int SCREENW = 60, SCREENH = 40;//размеры поля вывода в символах
    char screen[60][40];
    double x, y[60];
    double ymin = 0, ymax = 0;
    double hx, hy;
    int i, j;
    int xz, yz;
    hx = (x1 - x0) / (SCREENW - 1);
    for (i = 0, x = x0; i < SCREENW; ++i, x += hx) {
        y[i] = f(x); //расчет значений функции для каждой точки поля вывода графика
        if (y[i] < ymin) ymin = y[i];
        if (y[i] > ymax) ymax = y[i];
    }
    hy = (ymax - ymin) / (SCREENH - 1);
    yz = (int)floor(ymax / hy + 0.5);
    xz = (int)floor((0. - x0) / hx + 0.5);
    //построение осей и заполнение массива отображения пробелами
    for (j = 0; j < SCREENH; ++j)
        for (i = 0; i < SCREENW; ++i) {
            if (j == yz && i == xz) screen[i][j] = '+';
            else if (j == yz) screen[i][j] = '-';
            else if (i == xz) screen[i][j] = '|';
            else screen[i][j] = ' ';
        }
    //определение положения значения функции на поле вывода
    for (i = 0; i < SCREENW; ++i) {
        j = (int)floor((ymax - y[i]) / hy + 0.5);
        screen[i][j] = '*';
    }
    //печать массива символов
    for (j = 0; j < SCREENH; ++j) {
        for (i = 0; i < SCREENW; ++i)  putchar(screen[i][j]);
        putchar('\n');
    }
}
