#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_CTYPE, "");

     task();
}

int task()
{
    //Контрольный пример 1
    // a = 2
    // n = 4
    // Значение ряда = 3360

    //Контрольный пример 2
    // a = -4
    // n = 2
    // Значение ряда = -192

    int a, n;
    int s = 1;

    puts("Введите значения a и n");
    scanf("%d %d", &a, &n);

    for (int k = 0; k <= n; k++)
    {
        s = s * (a - k * n);
    }
    printf("Значение ряда равно %d при a = %d и n = %d\n", s, a, n);
}
