#include <stdio.h>
#include <math.h>

/* Функція отримує адреси трьох змінних і змінює їх */
void Calculations(double *a, double *b, double *c)
{
    double sum, product, result;

    sum = *a + *b + *c;             /* сума трьох змінних */
    product = (*a) * (*b) * (*c);   /* добуток трьох змінних */

    /* варіант 2 - парний, тому синус суми */
    result = sin(sum);

    /* записуємо нові значення в ті самі змінні */
    *a = sum;
    *b = product;
    *c = result;
}

int main()
{
    double group = 79;
    double variant = 2;
    double course = 4;

    printf("Initial values: group = %g, version = %g, course = %g\n", group, variant, course);

    Calculations(&group, &variant, &course);

    printf("New meanings: group = %g, version = %g, course = %g\n", group, variant, course);

    return 0;
}