#define _CRT_SUCURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
/*5. Определить есть ли в последовательности число X (для вещественных чисел — с точностью eps)*/

int main(void) {
#define _CRT_SUCURE_NO_WARNINGS
    setlocale(LC_ALL, "RUS");
    FILE* inp;
    bool  s;
    bool Function(FILE * inp);

    inp = fopen("input.txt", "r");
    if (inp == NULL) {
        printf("Не удалось открыть файл");
        return -1;
    }
    s = Function(inp);

    if (s == true) {
        printf("Число содержится в последовательности");
    }
    else {
        printf("Число не содержится в последовательности");
    }
    int fclose(FILE * inp);
    return 0;
}
bool Function(FILE* inp) {
#define _CRT_SUCURE_NO_WARNINGS
    bool flag;
    flag = false;
    double X, current;
    double eps = 1;

    printf(("Введите число: X = "));
    if ((scanf("%lf", &X) == 0)) {
        flag = false;
        return flag;
    }

    while (fscanf(inp, "%lf", &current) == 1) {
        if (((current + eps) >= X) && ((current - eps) <= X)) {
            flag = true;
            break;
        }

        else {
            flag = false;
        }
    }

    if (fscanf(inp, "%lf", &current) == 0) {
        flag = false;
    }

    return flag;
}