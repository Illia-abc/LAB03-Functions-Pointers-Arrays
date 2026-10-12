#include <stdio.h>

/* Рекурсивна функція: сума цифр числа */
int sum_of_digits(int n)
{
    /* якщо число від'ємне, беремо його модуль */
    if (n < 0)
    {
        n = -n;
    }

    /* базовий випадок: число однозначне */
    if (n < 10)
    {
        return n;
    }

    /* крок рекурсії: остання цифра + сума цифр решти числа */
    return n % 10 + sum_of_digits(n / 10);
}

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of the digits of a number %d equals: %d\n", n, sum_of_digits(n));

    return 0;
}